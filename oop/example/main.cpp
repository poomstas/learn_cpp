#include <iostream>

// class declaration. Still need this here, even though it's defined in gaussian.cpp.
// This can be put in a separate header (.h) file.
class Gaussian {
	private:
		float mu, sigma2;

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

int main () {
	Gaussian defaultgaussian; // See first "constructor function definition" in gaussian.cpp
	std::cout << "default gaussian mu:\t" << defaultgaussian.getMu() << std::endl;
	std::cout << "default gaussian var:\t" << defaultgaussian.getSigma2() << std::endl;

	defaultgaussian.setMu(10.0); // See first "set function definitions" in gaussian.cpp
	std::cout << "new gaussian mu:\t" << defaultgaussian.getMu() << std::endl;
	std::cout << std::endl;

	Gaussian mygaussian(30.0, 100.0); // See second "constructor function definition" in gaussian.cpp
	Gaussian othergaussian(10.0, 25.0);
	
	std::cout << "average:\t\t" << mygaussian.getMu() << std::endl;
	std::cout << "evaluation at 15:\t" << mygaussian.evaluate(15.0) << std::endl;

	std::cout << "mul results variance:\t" << mygaussian.multiply(othergaussian).getSigma2() << std::endl;
	std::cout << "mul results average:\t" << mygaussian.multiply(othergaussian).getMu() << std::endl;

	std::cout << "add results variance:\t" << mygaussian.add(othergaussian).getSigma2() << std::endl;
	std::cout << "add results average:\t" << mygaussian.add(othergaussian).getMu() << std::endl;

	return 0;
}