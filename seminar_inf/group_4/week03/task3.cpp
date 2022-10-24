#include <iostream>

int main(int argc, char** argv)
{
    int sideA, sideB, sideC;

    do {
        std::cout << "Enter side A:" << std::endl;
        std::cin >> sideA;
        std::cout << "Enter side B:" << std::endl;
        std::cin >> sideB;
        std::cout << "Enter side C:" << std::endl;
        std::cin >> sideC;
    } while (sideA <= 0 || sideB <= 0 || sideC <= 0
        || sideA + sideB <= sideC || sideA + sideC <= sideB || sideC + sideB <= sideA);

    /*
    std::cout << "Enter side A:" << std::endl;
    std::cin >> sideA;
    std::cout << "Enter side B:" << std::endl;
    std::cin >> sideB;
    std::cout << "Enter side C:" << std::endl;
    std::cin >> sideC;
    while (sideA <= 0 || sideB <= 0 || sideC <= 0
        || sideA + sideB <= sideC || sideA + sideC <= sideB || sideC + sideB <= sideA) {
        std::cout << "Enter side A:" << std::endl;
        std::cin >> sideA;
        std::cout << "Enter side B:" << std::endl;
        std::cin >> sideB;
        std::cout << "Enter side C:" << std::endl;
    }
    */

    // Calculate perimeter and area...

    return 0;
}
