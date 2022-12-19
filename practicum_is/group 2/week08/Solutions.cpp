#include <iostream>
using namespace std;
const int MAXSIZE = 100;

// task1
int len(const char str[MAXSIZE])
{
    int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

//task2

void smallLeters(char source[MAXSIZE], char* result)
{
    int i = 0, j = 0;
    while (source[i] != '\0')
    {
        if (source[i] >= 'a' && source[i] <= 'z')
        {
            result[j] = source[i];
            j++;
        }
        i++;
        result[j] = '\0';// vajno
    }
}

//task3
void replaceSymbol(char* str, char oldSymbol, char newSymbol)
{
    for (int i = 0; i < len(str); i++)
    {
        if (str[i] == oldSymbol)
        {
            str[i] = newSymbol;
        }
    }
}

//task4
void removeSymbol(char* str, char symbol)
{
    int i = 0;
    int length = len(str);
    while (str[i] != '\0')
    {
        if (str[i] == symbol)
        {
            for (int j = i; j < length - 1; j++)
            {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0';
        }
        i++;
    }
}

//task5
bool isPalindrome(const char* str)// ako iskame da go podavame v konzolata
{
    int length = len(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            return false;
        }
    }
    return true;
}

//task6 
char getFirstUniqueChar(const char* str)
{
    bool isUnique = true;
    int length = len(str);
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                isUnique = false;
            }
        }
        if (isUnique == true)
        {
            return str[i];
        }
        isUnique = true;
    }
}

//task7
void swap(char& a, char& b)
{
    char temp = a;
    a = b;
    b = temp;
}
void reverseString(char* str)
{
    int length = len(str);
    for (int i = 0; i < length / 2; i++)
    {
        swap(str[i], str[length - 1 - i]);
    }
}

//task8
void concat(char* str1, char* str2, char* result)
{
    int len1 = len(str1);
    int len2 = len(str2);
    for (int i = 0; i < len1; i++)
    {
        result[i] = str1[i];
    }
    for (int i = len1; i < len1 + len2; i++)
    {
        result[i] = str2[i - len1];
    }
    result[len1 + len2] = '\0';
}

//task9
void calculateSentenceMetrics(char* sentence, int& numberOfWords, int& longestWordLength, int& shortestWordLength)
{
    int startIndex = 0;
    int endIndex = 0;
    numberOfWords = 1;
    int i = 0;
    while (sentence[i])
    {
        if (sentence[i] == ' ')
        {
            endIndex = i;
            int currentLen = endIndex - startIndex;
            if (currentLen > longestWordLength)
            {
                longestWordLength = currentLen;
            }
            if (currentLen < shortestWordLength)
            {
                shortestWordLength = currentLen;
            }
            startIndex = i + 1;
            numberOfWords++;
        }
        i++;
    }
}

bool isValidMail(const char* email)
{
    int i = 0;
    bool hasAt = true;
    bool hasDotAfterAt = true;
    while (email[i])
    {
        if (email[i] == ' ')
        {
            cout << "There is space in the email ";
            return false;
        }
        if (email[i] == '@')
        {
            if (len(email) - i < 7)
            {
                cout << "There is less than 6 symbols after @ ";
                return false;
            }
            hasAt = true;
            if (i < 6)
            {
                cout << "There is less than 6 symbols before @ ";
                return false;
            }
            if (email[i + 1] == '.')
            {
                cout << "There is . after @";
                return false;
            }
        }
        if (email[i] == '.' && hasAt)
        {
            hasDotAfterAt = true;
        }
        i++;
    }
    if (hasAt == false)
    {
        cout << "There is no @ in the email. ";
        return false;
    }
    if (hasDotAfterAt == false)
    {
        cout << "There is no . in the email. ";
        return false;
    }
    return true;
}
//task 10
int main()
{
    isValidMail("Pesho@gmail.com") ? cout << "Valid email." : cout << "Invalid email! ";
    return 0;
}
