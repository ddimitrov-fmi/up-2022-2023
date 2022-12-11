#include <iostream>
#include <cstring>

const std::size_t MAX_CAPACITY = 2049;

void reverse(char str[]);

void reverse(char str[], std::size_t from, std::size_t to);

int main ()
{
    char sentence[MAX_CAPACITY];

    std::cin.getline(sentence, MAX_CAPACITY);

    reverse(sentence);

    std::size_t from, to, index = 0;

    while (sentence[index] != '\0')
    {
        if (sentence[index] == ' ' && sentence[index - 1] != ' ')
        {
            to = index - 1;
            reverse(sentence, from, to);
        }
        else if (sentence[index] != ' ' && (index == 0 || sentence[index - 1] == ' '))
        {
            from = index;
        }

        ++index;
    }

    reverse(sentence, from, index - 1);

    std::cout << sentence << std::endl;

    return 0;
}

void reverse(char str[])
{
    std::size_t size = strlen(str);

    for (std::size_t i = 0; i < size / 2; ++i)
    {
        std::swap(str[i], str[size - 1 - i]);
    }
}

void reverse(char str[], std::size_t from, std::size_t to)
{
    std::size_t size = to - from + 1;

    for (std::size_t i = 0; i < size / 2; ++i)
    {
        std::swap(str[from + i], str[to - i]);
    }
}