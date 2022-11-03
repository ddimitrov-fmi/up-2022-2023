#include <iostream>
using namespace std;
int main() {
    for (char i = 'A'; i <= 'Z'; i++) {
        if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
        {
            // i is a vowel
            // skip this iteration of the loop
            continue;
        }
        // i is a consonant
        cout << i;
    }
    cout << endl;
}

