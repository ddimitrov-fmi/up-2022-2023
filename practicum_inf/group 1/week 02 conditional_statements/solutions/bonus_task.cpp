#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "There are the following types of chess pieces:\n"
         << "q-queen\n"
         << "k-knight\n"
         << "r-rook\n"
         << "b-bishop\n"
         << "Choose a type: ";

    char type;
    cin >> type;

    char firstX, secondX;
    int firstPosX, firstPosY, secondPosX, secondPosY;

    cout << "The program expects correct positions in the format <a-h><1-8>, for example b3.\n"
         << "Enter position of first piece: ";
    cin >> firstX >> firstPosY;

    cout << "Enter position of second piece: ";
    cin >> secondX >> secondPosY;

    // convert from <a-h> to <1-8>
    firstPosX = (int)(firstX - 'a') + 1;
    secondPosX = (int)(secondX - 'a') + 1;

    bool canPiecesTakeEachOther = false;
    int diffX = abs(firstPosX - secondPosX);
    int diffY = abs(firstPosY - secondPosY);

    if (type == 'r')
    {
        // the pieces must be on the same row or col
        canPiecesTakeEachOther = (firstPosX == secondPosX) || (firstPosY == secondPosY);
    }
    else if (type == 'b')
    {
        // the differences of the rows and cols must be the same
        canPiecesTakeEachOther = diffX == diffY;
    }
    else if (type == 'q')
    {
        canPiecesTakeEachOther =
            ((firstPosX == secondPosX) || (firstPosY == secondPosY)) // the other piece is on the same row/col
            || (diffX == diffY);                                     // the other piece is diagonal to the current
    }
    else if (type == 'k')
    {
        // a knight can take another knight if the moves forms the shape L
        // Two squares in one direction and one square in the other direction
        canPiecesTakeEachOther = (diffX == 2 && diffY == 1) || (diffX == 1 && diffY == 2);
    }
    else
    {
        cout << "Unknown type!\n";
        return 0; // exits the program
    }

    if (canPiecesTakeEachOther)
    {
        cout << "The pieces CAN take each other!" << endl;
    }
    else
    {
        cout << "The pieces CANNOT take each other!" << endl;
    }

    return 0;
}