#include<iostream>

using std::cout;
using std::cin;
using std::endl;

/* 
Task 1:
    Read three integers from the console, number of apples, pears and bananas
    Print a the following message:
    Pesho, don't forget to buy <apples> apples, <pears> pears and <bananas> bananas!
    In which 
        - <apples> is replaced with the first entered number
        - <pears> is replaced with the second entered number
        - <bananas> is replaced with the third entered number
*/

int main()
{
	int apples;
    int pears;
    int bananas;

    cin >> apples >> pears >> bananas; //reads three numbers

    cout << "Pesho, don't forget to buy "
         << apples  << " apples, "
         << pears   << " pears and "
         << bananas << " bananas!" << endl;

	return 0;
}