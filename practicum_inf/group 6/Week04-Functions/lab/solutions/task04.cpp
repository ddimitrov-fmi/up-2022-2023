#include <iostream>

void drawRectangles(int squaresCount, int squareLength);

void drawFullLine(int count);

void drawBorderLine(int count, int squareLength);

int main ()
{
    int m, n;

    std::cin >> m >> n;

    drawRectangles(n, m);

    return 0;
}

void drawRectangles(int squaresCount, int squareLength)
{
    int length = squareLength * squaresCount - (squaresCount - 1);

    drawFullLine(length);
    for (std::size_t i = 0; i < squareLength - 2; ++i)
    {
        drawBorderLine(length, squareLength);
    }
    drawFullLine(length);
}

void drawFullLine(int count)
{
    for (std::size_t i = 0; i < count; ++i)
    {
        std::cout << "* ";
    }
    std::cout << std::endl;
}

void drawBorderLine(int count, int squareLength)
{
    for (std::size_t i = 0; i < count; ++i)
    {
        std::cout << (i % (squareLength - 1) == 0 ? "* " : "  ");
    }
    std::cout << std::endl;
}