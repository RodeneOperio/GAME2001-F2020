// Factorial :
/*
	Ex: 9! = 9 x 8 x 7... x 1
	9! = 9 x 8!
		8! = 8 x 7!
			7! = 7 x 6!
				...
					1! = 1 x 0!
*/

// Double Factorial (Semi-Factorial) 9!! = 9 x 7 x 5 x 3 x 1
#include <iostream>
#include <cassert>
using namespace std;

// Single Factorial
int factorial(int x)
{
	assert(x >= 0);

	// Base Case
	if (x == 0)
	{
		// I know that 0! = 1
		return 1;
	}

	// Tail recursion
	return(factorial(x - 1) * x);
}

// Double Factorial 
int doubleFactorial(int x)
{
	assert(x >= 0);

	// Base case
	if (x == 0 || x == 1)
	{
		return 1;
	}

	return(doubleFactorial(x - 2) * x);
}

// Main
<<<<<<< Updated upstream
=======
/*
>>>>>>> Stashed changes
int main()
{
	cout << "FACTORIALS!" << endl;

	cout << "The factorial of 5: ";
	cout << factorial(5) << endl;

	cout << "The double factorial of 7: ";
	cout << doubleFactorial(7) << endl;
	return 0;
<<<<<<< Updated upstream
}
=======
}
*/
>>>>>>> Stashed changes
