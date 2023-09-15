#include <math.h>

class Gaussian {
    // private variable declaration
    private:
        float mu, sigma2;

    // public variable and function declarations
    public:
        // constructor functions
        Gaussian ();
        Gaussian (float, float);

        // change value of average and standard deviation 
        void setMu(float);
        void setSigma2(float);

        // output value of average and standard deviation
        float getMu();
        float getSigma2();

        // functions to evaluate 
        float evaluate (float);
        Gaussian multiply (Gaussian);
        Gaussian add (Gaussian);
};

// constructor function definitions
Gaussian::Gaussian() {                                  // 	Set default values. Use: Gaussian defaultgaussian;
    mu = 0;
    sigma2 = 1; 
}

Gaussian::Gaussian (float average, float sigma) {       // Specify mu and var. Use: Gaussian mygaussian(30.0, 100.0);
    mu = average;
    sigma2 = sigma;
}

// set function definitions
void Gaussian::setMu (float average) {
    mu = average;
}

void Gaussian::setSigma2 (float sigma) {
    sigma2 = sigma;
}

// get function definitions
float Gaussian::getMu () {
    return mu;
}

float Gaussian::getSigma2() {
    return sigma2;
}

// evaluate function definition
float Gaussian::evaluate(float x) {
    float coefficient;
    float exponential;

    coefficient = 1.0 / sqrt (2.0 * M_PI * sigma2);
    exponential = exp ( pow (-0.5 * (x - mu), 2) / sigma2 );
    return coefficient * exponential;
}

// multiply function definition
Gaussian Gaussian::multiply(Gaussian other) {
    float denominator;
    float numerator;
    float new_mu;
    float new_var;

    denominator = sigma2 + other.getSigma2();
    numerator = mu * other.getSigma2() + other.getMu() * sigma2;
    new_mu = numerator / denominator;

    new_var = 1.0 / ( (1.0 / sigma2) + (1.0 / other.sigma2) );

    return Gaussian(new_mu, new_var);
}

// add function definition
Gaussian Gaussian::add(Gaussian other) {
    float new_mu;
    float new_sigma2;

    new_mu = mu + other.getMu();
    new_sigma2 = sigma2 + other.getSigma2();

    return Gaussian(new_mu, new_sigma2);
}