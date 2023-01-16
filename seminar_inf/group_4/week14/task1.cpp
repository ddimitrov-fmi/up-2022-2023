#include <iostream>
#include <cstring>

const int MAX_SIZE = 50;

struct Book
{
    char *title;
    char author[MAX_SIZE];
    char genre[MAX_SIZE];
    double price;
    int sales;
};

void initializeBook(Book &book, const char *title, const char *author, const char *genre, unsigned sales, double price)
{
    book.title = new char[strlen(title)];
    strcpy(book.title, title);
    strcpy(book.author, author);
    strcpy(book.genre, genre);
    book.sales = sales;
    book.price = price;
}

void printBook(const Book &b)
{
    std::cout << b.title << std::endl;
    std::cout << b.author << std::endl;
    std::cout << b.genre << std::endl;
    std::cout << b.price << std::endl;
    std::cout << b.sales << std::endl;
}

void printBookWithLowestPrice(Book *books, size_t count)
{
    double min = books[0].price;
    int index = 0;
    for (int i = 1; i < count; i++)
    {
        if (books[i].price < min)
        {
            min = books[i].price;
            index = i;
        }
    }

    printBook(books[index]);
}

Book &getBestBook(Book *books, size_t count)
{
    int salesMax = 0;
    int index = 0;
    for (int i = 0; i < count; i++)
    {
        if (books[i].sales > salesMax)
        {
            salesMax = books[i].sales;
            index = i;
        }
    }

    return books[index];
}

bool compareBooks(const Book& book1, const Book& book2)
{
    const bool equalTitle = book1.title == book2.title;
    const bool equalAuthor = book1.author == book2.author;
    const bool equalGenre = book1.genre == book2.genre;
    const bool equalPrice = book1.price == book2.price;
    const bool equalSales = book1.sales == book2.sales;

    return equalAuthor && equalGenre && equalSales && equalPrice && equalTitle;
}

bool isBookInArray(Book *books, size_t count, const Book& book)
{
    for (size_t i = 0; i < count; i++)
    {
        if(compareBooks(book, books[i]))
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char **argv)
{
    Book b[3];

    initializeBook(b[0], "It1", "Stephen King", "Horror", 500000, 10.2);
    initializeBook(b[1], "It2", "Stephen King", "Horror", 5000, 10.1);
    initializeBook(b[2], "It3", "Stephen King", "Horror", 666, 30);

    printBookWithLowestPrice(b, 3);

    std::cout << std::boolalpha << isBookInArray(b, 3, b[1]) << std::endl;

    for (int i = 0; i < 3; i++)
        delete[] b[i].title;

    return 0;
}
