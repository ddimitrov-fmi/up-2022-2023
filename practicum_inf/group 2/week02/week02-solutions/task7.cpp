#include<iostream>
using namespace std;


int main()
{
    
    int number, digit1, digit2, digit3, digit4;
    
    cin >> number;
    
    digit1 = number / 1000;
    digit2 = number / 100 % 10;
    digit3 = number / 10 % 10;
    digit4 = number % 10;
    
    if(digit1 % 2 == 1 && digit1 > digit2  && digit1 > digit3 && digit1 > digit4){
        cout<<"YES"<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
	return 0;
}
