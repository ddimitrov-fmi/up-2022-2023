#include <iostream>

int main ()
{
    int* intInHeap = new (std::nothrow) int(5);
    if (!intInHeap)
    {
        std::cout << "Problem while allocating memory for the int" << std::endl;
        return 1;
    }

    std::cout << *intInHeap << std::endl;

    int* arrayInHeap = new (std::nothrow) int[10];
    if (!arrayInHeap)
    {
        std::cout << "Problem while allocating memory for the array" << std::endl;
        
        delete intInHeap;
        return 1;
    }

    arrayInHeap[0] = 2;
    arrayInHeap[1] = 5;
    arrayInHeap[2] = 10;

    std::cout << arrayInHeap[0] << " " << arrayInHeap[1] << " " << arrayInHeap[2] << std::endl;

    delete intInHeap;
    delete[] arrayInHeap;

    return 0;
}