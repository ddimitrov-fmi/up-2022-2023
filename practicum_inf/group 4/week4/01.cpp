#include<iostream>
using namespace std;

int main(){
    int inputNumber = 1;
    cin >> inputNumber;

    if (inputNumber < 1)
    {
        std::cout << "Invalid";
        return 0;
    }

    int result = 1;
    int temp = 0;
    int beforeValue = 0;

    for(int i = 2; i <= inputNumber; i++){        
        temp = result;
        result += beforeValue;
        beforeValue = temp;
    }

    cout << result << endl;

    return 0;
}