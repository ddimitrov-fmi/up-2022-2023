#include <iostream>
#include <cmath>
#include <cstring>

const std::size_t MAX_NAME_SIZE = 50;
const std::size_t MAX_DEFINITION_SIZE = 500;
const std::size_t MAX_NUMBER_OF_DEFINITIONS = 10;

struct Vector3D
{
    double x;
    double y;
    double z;
};

struct Point2D
{
    double x;
    double y;
};

struct Definition
{
    char* name;
    char* definition;
};

struct MiniExam
{
    const Definition* definitions[MAX_NUMBER_OF_DEFINITIONS];
    std::size_t size = 0;
};

struct AnswerSheet
{
    char* studentDefinitions[MAX_NUMBER_OF_DEFINITIONS];
    std::size_t size = 0;
};

struct LineEquation
{
    double a;
    double b;
    double c;
};


LineEquation getLineEquationFromTwoPoint(const Point2D& first, const Point2D& second);

double getDeterminantLevelTwo(double values[][2]);

/**
 * @brief Function to return the length of a vector
 * 
 * @param vector the vector itself
 * @return the vector length
 */
double getVectorLength(const Vector3D& vector);


/**
 * @brief Function to return the scalar products of two vectors
 * 
 * @param first the first vector
 * @param second the second vector
 * @return the scalar product of the vectors
 */
double getScalarProduct(const Vector3D& first, const Vector3D& second);

/**
 * @brief Function to check if two vectors are perpendicular
 * 
 * @param first the first vector
 * @param second the second vector
 * @return if the vectors are perpendicular
 */
bool arePerpendicular(const Vector3D& first, const Vector3D& second);

/**
 * @brief Function to return the vector product of two vectors
 * 
 * @param first the first vector
 * @param second the second vector
 * @return a new Vector3D instance for the vector product
 */
Vector3D getVectorProduct(const Vector3D& first, const Vector3D& second);

/**
 * @brief Function to return the scalar triple product of two vectors
 * 
 * @param first the first vector
 * @param second the second vector
 * @param third the third vector
 * @return the scalar triple product of the vectors 
 */
double getScalarTripleProduct(const Vector3D& first, const Vector3D& second, const Vector3D& third);

/**
 * @brief Function to return the midpoint of two points
 * 
 * @param first the first point
 * @param second the second point
 * @return a new Point2D instance for the midpoint
 */
Point2D getMidpoint(const Point2D& first, const Point2D& second);

/**
 * @brief Function to return the distance between two points
 * 
 * @param first the first point
 * @param second the second point
 * @return the distance between the points
 */
double getDistance(const Point2D& first, const Point2D& second);

/**
 * @brief Function to initialize a new Definition instance from the console
 * 
 * @return a new dynamically allocated Definition instance
 */
Definition* createDefinition();

/**
 * @brief Function to add a new definition to a existing mini exam
 * 
 * @param exam the exam to which we're adding questions
 * @param definition the definition to be added
 */
void addDefinition(MiniExam& exam, const Definition* definition);

double getVectorLength(const Vector3D& vector) 
{
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2) + pow(vector.z, 2));
}

double getScalarProduct(const Vector3D& first, const Vector3D& second)
{
    return first.x * second.x + first.y * second.y + first.z * second.z;
}

bool areLinearyIndependent(const Vector3D& first, const Vector3D& second)
{
    return getScalarProduct(first, second) == 0;
}

Vector3D getVectorProduct(const Vector3D& first, const Vector3D& second)
{
    Vector3D result;

    double firstCoordinateDeterminant[2][2] = {{first.y, first.z}, {second.y, second.z}};
    double secondCoordinateDeterminant[2][2] = {{first.z, first.x}, {second.z, second.x}};
    double thirdCoordinateDeterminant[2][2] = {{first.x, first.y}, {second.x, second.y}};

    result.x = getDeterminantLevelTwo(firstCoordinateDeterminant);
    result.y = getDeterminantLevelTwo(secondCoordinateDeterminant);
    result.z = getDeterminantLevelTwo(thirdCoordinateDeterminant);

    return result; 
}

double getScalarTripleProduct(const Vector3D& first, const Vector3D& second, const Vector3D& third)
{
    return getScalarProduct(getVectorProduct(first, second), third);
}

Point2D getMidpoint(const Point2D& first, const Point2D& second)
{
    Point2D result;
    result.x = (first.x + second.x) / 2;
    result.y = (first.y + second.y) / 2;

    return result;
}

double getDistance(const Point2D& first, const Point2D& second)
{
    return sqrt(pow(first.x - second.x, 2) + pow(first.y - second.y, 2));
}

double getDeterminantLevelTwo(double values[][2])
{
    return values[0][0] * values[1][1] - values[0][1] * values[1][0];
}

LineEquation getLineEquationFromTwoPoint(const Point2D& first, const Point2D& second)
{
    LineEquation result;

    result.a = second.y - first.y;
    result.b = first.x - second.x;
    result.c = -(result.a * (second.x) + result.b * (second.y));

    return result;
}

void addDefinition(MiniExam& exam, const Definition* definition)
{
    if (exam.size >= MAX_NUMBER_OF_DEFINITIONS) 
    {
        std::cout << "The mini exam is full of definitions" << std::endl; 
        return;
    }

    for (int i = 0; i < exam.size; ++i)
    {
        if (strcmp(exam.definitions[i]->name, definition->name) == 0)
        {
            std::cout << "There is a definition with the same name" << std::endl;
            return;
        }
    }

    exam.definitions[exam.size++] = definition;
}

Definition* createDefinition()
{
    Definition* result = new (std::nothrow) Definition;
    if (!result)
    {
        std::cout << "Memory problem!" << std::endl;
        return nullptr;
    }

    char name[MAX_NAME_SIZE];
    std::cout << "Enter name of the definition: ";
    std::cin.getline(name, MAX_NAME_SIZE);

    result->name = new (std::nothrow) char[strlen(name) + 1];
    if (!result->name) 
    {
        delete result;
        std::cout << "Memory problem!" << std::endl;
        return nullptr;
    }
    strcpy(result->name, name);


    char definition[MAX_DEFINITION_SIZE];
    std::cout << "Enter explanation of the definition: ";
    std::cin.getline(definition, MAX_DEFINITION_SIZE);

    result->definition = new (std::nothrow) char[strlen(definition) + 1];
    if (!result->definition) 
    {
        delete[] result->name;
        delete result;
        std::cout << "Memory problem!" << std::endl;
        return nullptr;
    }
    strcpy(result->definition, definition);

    return result;
}

void deallocateDefinition(const Definition* definition)
{
    delete[] definition->name;
    delete[] definition->definition;
    delete definition;
}

MiniExam* generateExam()
{
    MiniExam* miniExam = new (std::nothrow) MiniExam();
    if (!miniExam) 
    {
        std::cout << "Memory problem!" << std::endl;
        return nullptr;
    }

    std::size_t size;
    std::cout << "How many definitions will your mini exam consist of? ";
    std::cin >> size;
    std::cin.ignore();

    for (std::size_t i = 0; i < size; ++i)
    {
        const Definition* current = createDefinition();
        if (!current)
        {
            std::cout << "Memory problem!" << std::endl;
            for (std::size_t j = 0; j < miniExam->size; ++j)
            {
                deallocateDefinition(miniExam->definitions[j]);
            }
            delete miniExam;
            return nullptr;
        }
        addDefinition(*miniExam, current);
    }

    return miniExam;
}

void deallocateExam(const MiniExam* exam)
{
    for (std::size_t i = 0; i < exam->size; ++i)
    {
        deallocateDefinition(exam->definitions[i]);
    }
    delete exam;
}

AnswerSheet* createAnswerSheet(const MiniExam* exam)
{
    AnswerSheet* result = new (std::nothrow) AnswerSheet();
    if (!result)
    {
        std::cout << "Memory problem!" << std::endl;
        return nullptr;
    }

    for (std::size_t i = 0; i < exam->size; ++i)
    {
        char buffer[MAX_DEFINITION_SIZE];
        std::cout << "Write your definition for \'" << exam->definitions[i]->name << "\': ";
        std::cin.getline(buffer, MAX_DEFINITION_SIZE);

        result->studentDefinitions[i] = new (std::nothrow) char[strlen(buffer) + 1];
        if (!result->studentDefinitions[i])
        {
            std::cout << "Memory problem!" << std::endl;
            for (std::size_t j = 0; j < result->size; ++j)
            {
                delete[] result->studentDefinitions[j];
            }
            delete result;
            return nullptr;
        }
        strcpy(result->studentDefinitions[i], buffer);

        ++result->size;
    }
    
    return result;
}

void deallocatAnswereSheet(const AnswerSheet* sheet)
{
    for (std::size_t i = 0; i < sheet->size; ++i)
    {
        delete[] sheet->studentDefinitions[i];
    }
    delete sheet;
}

int gradeDefinitions(const MiniExam& exam, const AnswerSheet& answerSheet)
{
    if (exam.size != answerSheet.size)
    {
        std::cout << "Wrong combination of exam and answer sheet" << std::endl;
        return -1;
    }

    int result = 0;

    for (std::size_t i = 0; i < exam.size; ++i)
    {
        if (strcmp(exam.definitions[i]->definition, answerSheet.studentDefinitions[i]) == 0)
        {
            ++result;
        }
    }

    return result;
}

int main() 
{
    Vector3D vector1{1,2,3}, vector2{6,7,8}, vector3{5,2,3};

    std::cout << getVectorLength(vector1) << std::endl;
    std::cout << getScalarProduct(vector1, vector2) << std::endl;

    Vector3D vectorProduct = getVectorProduct(vector1, vector2);
    std::cout << vectorProduct.x << " " << vectorProduct.y << " " << vectorProduct.z << std::endl;

    std::cout << getScalarTripleProduct(vector1, vector2, vector3) << std::endl;

    Point2D firstPoint{1,-2}, secondPoint{2,3};

    std::cout << getDistance(firstPoint, secondPoint) << std::endl;
    LineEquation line = getLineEquationFromTwoPoint(firstPoint, secondPoint);
    std::cout << line.a << "x + " << line.b << "y + " << line.c << " = 0" << std::endl;

    Definition* def = createDefinition();
    std::cout << "Name: " << def->name << std::endl;
    std::cout << "Definition: " << def->definition << std::endl;

    deallocateDefinition(def);

    MiniExam* exam = generateExam();
    AnswerSheet* sheet = createAnswerSheet(exam);

    std::cout << "Correct answers: " << gradeDefinitions(*exam, *sheet) << std::endl;

    deallocateExam(exam);
    deallocatAnswereSheet(sheet);

    return 0;
}