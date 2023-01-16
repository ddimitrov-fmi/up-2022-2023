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
    Person* dynamicallyAllocatedPerson = new (std::nothrow) Person; // allocating memory for a Person instance
    // std::nothrow --> will not throw an exception if there is a problem while allocating memory

    if (!dynamicallyAllocatedPerson) // check if the allocation is successfull
    {
        std::cout << "Memory problem" << std::endl;
        return 1;
    }

    // initialization, note the access operator for pointers!
    strcpy(dynamicallyAllocatedPerson->name, "Dinamichen");

    (*dynamicallyAllocatedPerson).age = 20; // also a valid syntax
    dynamicallyAllocatedPerson->age = 20; // clearer syntax
    dynamicallyAllocatedPerson->weight = 81.2;

    printPerson(*dynamicallyAllocatedPerson);

    delete dynamicallyAllocatedPerson; // do not forget to deallocate!
    
    return 0;
}