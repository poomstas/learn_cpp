class Gaussian {
    // private variable declaration. private variables and functions are only available within your class code
    private:
        float mu, sigma2;

    // public variable and function declarations. accessible within your class and also by an object of the class
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