#include <iostream>
#include <cstring>
#include <cassert>

struct Teacher
{
    char* name;
    char* subject;
};

void initialize(Teacher& teacher, const char* name, const char* subject)
{
    assert(name);
    assert(subject);

    teacher.name = new (std::nothrow) char[strlen(name) + 1];
    if (!teacher.name)
    {
        std::cout << "Memory problem" << std::endl;
        return;
    }
    strcpy(teacher.name, name);

    teacher.subject = new (std::nothrow) char[strlen(subject) + 1];
    if (!teacher.subject)
    {
        std::cout << "Memory problem" << std::endl;

        // if allocating memory for one of the fields is unsuccessfull, then the whole initialization is unsuccessfull
        // so we should deallocate the already allocated memory 
        delete[] teacher.name; 
        return;
    }
    strcpy(teacher.subject, subject);
}

void print(const Teacher& teacher)
{
    assert(teacher.name);
    assert(teacher.subject);

    std::cout << "My name is " << teacher.name << " and I am teaching " << teacher.subject << "." << std::endl;
}

void deallocate(const Teacher& teacher)
{
    delete[] teacher.name;
    delete[] teacher.subject;
}

int main ()
{
    Teacher teacher;

    initialize(teacher, "Borislav Draganov", "DIS2");
    print(teacher);
    deallocate(teacher);

    Teacher* dynamicallyAllocatedTeacher = new (std::nothrow) Teacher;
    if (!dynamicallyAllocatedTeacher)
    {
        std::cout << "Memory problem!" << std::endl;
        return 1;
    }

    initialize(*dynamicallyAllocatedTeacher, "Alexandra Soskova", "EAI");
    print(*dynamicallyAllocatedTeacher);

    // note that you should first deallocate the fields of the struct instance, 
    // and only then to deallocate the dynamically allocated struct instance itself
    deallocate(*dynamicallyAllocatedTeacher);
    delete dynamicallyAllocatedTeacher;

    return 0;
}