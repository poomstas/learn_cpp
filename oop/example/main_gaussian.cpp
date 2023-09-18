#include <iostream>
#include "gaussian.h"

// using namespace std; // Use this to remove all std::

// class declaration. Still need this here, even though it's defined in gaussian.cpp.
// This can be put in a separate header (.h) file.
// Moved to separate header file (gaussian.h). Header files don't need to be included in g++ compile.
// Note that both gaussian.cpp and main.cpp can both refer to the class def in the header file.

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