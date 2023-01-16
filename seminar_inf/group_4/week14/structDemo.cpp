#include <iostream>
#include <cstring>

struct Person
{
    char name[10];
    int age;
    char *jobTitle;
};

int main()
{
    Person p;
    p.age = 15;

    strcpy(p.name, "Trai40");

    p.jobTitle = new char[11];
    strcpy(p.jobTitle, "Programmer");

    std::cout << p.name << " " << p.age << " " << p.jobTitle << std::endl;

    Person *pPtr = &p;
    std::cout << pPtr->name << " " << pPtr->age << " " << pPtr->jobTitle << std::endl;

    Person people[10];
    Person *pPtr2 = new Person;

    // Don't forget to free up the allocated memory!
    delete pPtr2;
    delete[] p.jobTitle;

    return 0;
}
