#include<iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "n = ";cin >> n;
        if(n <= 0) cout << "Error! Input a valid number:" << endl;
    } while (n <=0);

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if(i < j) cout << "- ";
            else if(i == j) cout << "0 ";
            else cout << "+ ";
        }
        cout << endl;
    }
    
}