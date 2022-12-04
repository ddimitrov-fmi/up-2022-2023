#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 256;

char** allocateLines(std::size_t size);

void print(char** lines, std::size_t size);

void deallocate(char** lines, std::size_t size);

int main ()
{
    std::size_t size;
    std::cin >> size;

    std::cin.ignore();

    char** lines = allocateLines(size);
    if (!lines)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    print(lines, size);

    deallocate(lines, size);

    return 0;
}

char** allocateLines(std::size_t size)
{
    char** lines = new (std::nothrow) char*[size];
    if (!lines)
    {
        return nullptr;
    }

    for (std::size_t i = 0; i < size; ++i)
    {
        char temp[MAX_CAPACITY + 1];
        std::cin.getline(temp, MAX_CAPACITY);

        lines[i] = new (std::nothrow) char[strlen(temp) + 1];
        if (!lines[i])
        {
            deallocate(lines, i);
            return nullptr;
        }

        strcpy(lines[i], temp);
    }

    return lines;
}

void print(char** lines, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        std::cout << lines[i] << std::endl;
    }
}

void deallocate(char** lines, std::size_t size)
{
    for (std::size_t i = 0; i < size; ++i)
    {
        delete[] lines[i];
    }

    delete[] lines;
}