#include <iostream>

int main(int argc, char** argv)
{
    int protectorDepth;
    double tyreAge;

    std::cin >> protectorDepth >> tyreAge;
    bool shouldChange = protectorDepth < 4 || tyreAge >= 6;

    //std::cout << std::boolalpha << "Tyre should be changed: " << shouldChange << std::endl;

    if(shouldChange)
    {
        std::cout << "Cange your tyre!" << std::endl;
    }
    else
    {
        std::cout << "You may drive your car!" << std::endl;
    }

    return 0;
}
