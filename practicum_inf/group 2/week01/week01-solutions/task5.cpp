#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    // check whether a, b, c can form a triangle
    if (a + b > c && a + c > b && b + c > a)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
        
    return 0;
}
