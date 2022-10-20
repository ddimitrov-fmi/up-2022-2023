#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "a = ";
    cin >> num1;
    cout << "b = ";
    cin >> num2;

    cout<< num1 * num2<<", "<< (num1 * num2) % 100 % 10<<" - "<<(((num1 * num2) % 100 % 10) % 2 == 0)<<endl;


    return 0;
}