#include <iostream>
#include "Function.h"




int main()
{
	setlocale(LC_ALL, "");

	std::string test = "abcabcabcabc";
	std::string test1 = "abcdeabcdeabcdeabcde";
	std::string test2 = "abababab";

	IsKPeriodic(test, 3);
	IsKPeriodic(test1, 5);
	IsKPeriodic(test2, 2);
	IsKPeriodic(test2, 3);
	IsKPeriodic(test2, 8);

	return 0;
}
