#include <iostream>
#define MAXSIZE 1000

using namespace std;

//task 1
int countOfLetters(char text[MAXSIZE])
{

    if (*text == '\0')
    {
        return 0;
    }
    if (*text >= 'a' && *text <= 'z' || *text >= 'A' && *text <= 'Z')
    {
        return 1 + countOfLetters(++text);
    }
    countOfLetters(++text);
}

//task 2

int strLen(char* text)
{
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}
int countOfWords(char* sentence)
{
    int countOfWords = 1;
    int i = 0;
    bool wordStarted = false;
    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            countOfWords++;
        }
        i++;
    }
    return countOfWords;
}

void toLower(char* text)
{
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] += ' ';
        }
        i++;
    }
}

bool isFirstWordBigger(char* wordOne, char* wordTwo)
{
    toLower(wordOne);
    toLower(wordTwo);
    int len1 = strLen(wordOne);
    int len2 = strLen(wordTwo);
    int biggerLen = len1 > len2 ? len1 : len2;
    int i = 0;
    for (int i = 0; i < biggerLen; i++)
    {
        if (wordOne[i] < wordTwo[i] || wordOne[i] == '\0')
        {
            return false;
        }
    }
    return true;
}

void strcopy(char* destination, char* source)
{
    int len = strLen(source);
    for (int i = 0; i < len; i++)
    {
        destination[i] = source[i];
    }
    destination[len] = '\0';
}

void clearText(char* text)
{
    int len = strlen(text);
    for (int i = 0; i < len; i++)
    {
        text[i] = '\0';
    }

}

bool isLetter(char c)
{
    return c >= 'a' && c <= 'z' || c > 'A' && c < 'Z';
}

char* biggestWord(char* text, char* biggestWord)
{
    char* currentWord = new char[MAXSIZE];
    int biggestWordLen = 0;
    int currentWordLen = 0;
    int len = strLen(text);
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        currentWord[j] = text[i];
        j++;
        if (!isLetter(text[i]))
        {
            currentWord[j--] = '\0';
            currentWordLen = strLen(currentWord);
            if (currentWordLen>biggestWordLen|| (currentWordLen==biggestWordLen && (isFirstWordBigger(currentWord, biggestWord))))
            {
                strcopy(biggestWord, currentWord);
                biggestWordLen = currentWordLen;
            }
            
            clearText(currentWord);
            currentWordLen = 0;
            j = 0;
        }
    }
    delete[] currentWord;
    return biggestWord;
}

void reverseWord(char* word)
{
    int len = strlen(word);
    for (int i = len - 1; i >= 0; i--)
    {
        cout << word[i];
    }
}

void task2(char* text)
{
    char* word = new char[MAXSIZE];
    word[0] = '\0';

    cout<< countOfWords(text) << " ";;
    reverseWord(biggestWord(text, word));

    delete[] word;
}

//task 3
bool fourSumProblem(int arr[], int size, int currentPos, int target, int countOfAddendts)
{
    if (currentPos == size || countOfAddendts > 4) // if there is more than 4 addendts or the end of array is reached
    {
        return false;
    }
    if (target == 0 && countOfAddendts == 4) // if the target sum is reached with four addendts
    {
        return true;
    }
    return fourSumProblem(arr, size, ++currentPos, target - arr[currentPos], ++countOfAddendts) // all situations including current number
        || fourSumProblem(arr, size, ++currentPos, target, countOfAddendts); // call all situations whotout current number
}
int main()
{   
    //task 1
    //char text[MAXSIZE];
    //cin.getline(text, MAXSIZE);
    //cout << countOfLetters(text);

    //task 2
    //char* text = new char[MAXSIZE];
    //cin.getline(text, MAXSIZE);
    //task2(text);
    //delete[] text;

    //task 3
    //int arr[MAXSIZE];
    //int size, sum;
    //cout << "Input array size: ";
    //cin >> size;
    //cout << "Input target sum: ";
    //cin >> sum;
    //for (int i = 0; i < size; i++)
    //{
    //    cin >> arr[i];
    //}
    //cout << boolalpha << fourSumProblem(arr, size, 0, sum, 0);
}
