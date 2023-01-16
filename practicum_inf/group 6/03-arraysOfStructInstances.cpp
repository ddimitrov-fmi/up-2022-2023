#include <iostream>
#include <cstring>
#include <cassert>

const std::size_t MAX_NAME_SIZE = 50;
const std::size_t DEFAULT_NUMBER_OF_PEOPLE = 3;

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

void initialize(Person& person, const char* name, int age, double weight)
{
    assert(name != nullptr);

    strcpy(person.name, name);
    person.age = age;
    person.weight = weight;
}

int main ()
{
    Person people[DEFAULT_NUMBER_OF_PEOPLE]; // creating an array of Person instances

    // note that we can extract the initialization of the struct instance in a separate function
    initialize(people[0], "Sasho", 20, 82.4);
    initialize(people[1], "Dancho", 22, 73.4);
    initialize(people[2], "Gabi", 14, 48.2);

    // printing information
    for (std::size_t i = 0; i < DEFAULT_NUMBER_OF_PEOPLE; ++i)
    {
        printPerson(people[i]);
    }

    std::cout << std::endl;

    Person* dynamicallyAllocatedPeople = new (std::nothrow) Person[DEFAULT_NUMBER_OF_PEOPLE];
    if (!dynamicallyAllocatedPeople)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    // initialization
    initialize(dynamicallyAllocatedPeople[0], "Dinamichen", 20, 82.4);
    initialize(dynamicallyAllocatedPeople[1], "Dinamichna", 22, 73.4);
    initialize(dynamicallyAllocatedPeople[2], "Dinamichno", 14, 48.2);

    for (std::size_t i = 0; i < DEFAULT_NUMBER_OF_PEOPLE; ++i)
    {
        printPerson(dynamicallyAllocatedPeople[i]);
    }

    delete[] dynamicallyAllocatedPeople; // do not forget to deallocate!

    return 0;
}