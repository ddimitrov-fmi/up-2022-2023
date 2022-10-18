// C++ program demonstrating the transformation between bool and int types
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

/* The rule is that true turns into 1 as an integer, false turns into 0.
If we turn any integer into bool type, the rule is: "If the integer is different from 0,
turns into true, else it turns into false". */

int main()
{
	int a = 5;
	cout << (a && true) << endl; //This must show you that 5 turns into true. 
	//The upper cout prints 1, which means that true is turned into 1 as int.

	int b = 0;
	cout << (b || false) << endl; //This must show you that 0 turns into false.
	//The upper cout prints 0, which means that false is turned into 0 as int.

	cout << "(5 < 7) && (5 >= 2): " << ((5 < 7) && (5 >= 2)) << '\n';
	cout << "(4 > 6) || (1 == 1): " << ((4 > 6) || (1 == 1)) << '\n';
    cout << "!(2 >= 3) && (8 < 10): " << (!(2 >= 3) && (8 < 10)) << '\n';

	//Please, be careful that the relational operator equal is ==.
	// If by mistake you use = instead, the compilator will not find it as a mistake.
	//But the result could be different...
	cout << ((1 + false) && !0) + ((a = b == 1) && (a = 1)) * (2022 * sin(-19) - atan(12)) << '\n';

	int num = 5;
	cout << ! ( a && b ) || ( 0 || ( num = num + 1 )) << '\n';
	return 0;
}