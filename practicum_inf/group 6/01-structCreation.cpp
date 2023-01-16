#include <iostream>
#include <cstring>

const std::size_t MAX_NAME_SIZE = 50;

struct Person
{
    char name[MAX_NAME_SIZE];
    int age;
    double weight;
};

void printPerson(const Person& person)
{
    std::cout << "My name is " << person.name << ". I am " << person.age << 
                    " years old and I am " << person.weight << " kg." << std::endl;
}

int main ()
{
    Person basicPerson; // struct creation with undefined fields

    //  field initialization (access operator '.')
    strcpy(basicPerson.name, "Gosho");
    basicPerson.age = 18;
    basicPerson.weight = 78.4;

    // printing information about the person
    printPerson(basicPerson);

    Person directInitPerson{"Ivan", 19, 67.8}; // struct creation with direct initialization
    printPerson(directInitPerson);

    return 0;
}