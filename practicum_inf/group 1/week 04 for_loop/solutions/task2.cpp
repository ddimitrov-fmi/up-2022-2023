#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int floors, apartments;
	cout << "Floors: ";
	cin >> floors;

	cout << "Number of apartments for each floor: ";
	cin >> apartments;

    char letter;
    
	for (int f = floors; f > 0; f--)
	{
		if (f == floors)
		{
			letter = 'L';
		}
		else if (f % 2 == 0)
		{
			letter = 'O';
		}
		else
		{
			letter = 'A';
		}
		for (int app = 0; app < apartments; app++)
		{
			cout << letter << f << app << " ";
		}
		cout << endl;
	}
	return 0;
}