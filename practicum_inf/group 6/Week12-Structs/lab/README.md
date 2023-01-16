# Структури

# Geometry Helper :triangular_ruler:

Тъй като един от най-предизвикателните предмети, който ви предстои през следващия семестър, е **Геометрия**, ще се опитаме да улесним поне малко работата ви, като напишем програма, която би могла да пресмята някои части от *по-сметкаджийските* и досадни задачи. Също така ще добавим и функционалност за добавяне на определения.

### 3D Вектор

Първото нещо, с което ще се сблъскате в курса по **Геометрия**, е именно **векторът**. Един от начините за представяне на вектор е чрез координати. Понеже всичко е *по-забавно* :clown_face: в 3-мерното пространсво, векторът в нашата задача ще се характеризира с **3 координати** - *x, y, z*. За целта създайте структура `Vector3D`, съдържаща в себе си нужната информация за един тримерен вектор.

Имплементирайте следните функции, свързани с вектори:

```c++
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
```

### 2D Точка

След всичките тези вектори, нека слезем на земята или иначе казано - в равнината. :woozy_face: Нека дефинираме най-малката единица, а именно - точката. В равнината сме, т.е. ще са ни необходими само две координати. Вземете това предвид и създайте структура `Point2D`, която би свършила работа за представяне на такава точка.

Имплементирайте следните функции, свързани с точки:

```c++
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
```

### Права (Бонус)

Освен точки, в равнината има и прави. Всяка права се характеризира с т. нар. **уравнение на права**, което наричаме уравнение от вида: `Ax + By + C = 0`. Създайте функция, която намира уравнението на права по дадени две точки. Помислете от какви структури се нуждаете и как ще изглежда сигнатурата на функцията.

### Определения

За съжаление, в геометрията освен задачи, има и теория, мноооого теория... :cry: Едно от най-важните неща за взимане на теоретичния изпит са определенията. Напишете структура `Definition`, която представлява определение. Всяко определение се състои от име (напр. "вектор") и дефиниция (напр. "насочена отсечка, която ...")

> Забележкa: Текстовите полета трябва да са с точен размер

Създайте функция със следната сигнатура:

```c++
/**
 * @brief Function to initialize a new Definition instance from the console
 * 
 * @return a new dynamically allocated Definition instance
 */
Definition* createDefinition();
```

Помислете за подходящо реализиране на функцията така, че потребителят да разбира какво се очаква от него да направи.

### Мини изпит

Щракваме с пръсти и се пренасяме директно в лятната сесия :sparkles: - изпитът по геометрия и по-точно частта с определенията. Ще симулираме мини изпит, който изисква правилното написване на няколко определения. За тази цел създайте структура `MiniExam`, която вътре в себе си пази масив от определения с максимален размер 10.

Създайте функция, която добавя ново определение към мини изпит:

```c++
/**
 * @brief Function to add a new definition to an existing mini exam
 * 
 * @param exam the exam to which we're adding questions
 * @param definition the definition to be added
 */
void addDefinition(MiniExam& exam, const Definition* definition);
```

Помислете как ще следите колко определения имате в момента и дали не са възможни някакви проблеми при добавяне - например добавяне на определение, което е вече добавено?

### Оценяване (Бонус)

Разбира се, за да бъде оценен един студент, той трябва да напише собствена дефиниция на дадено определение. Проверяващият мини изпита в нашата задача е изключително педантичен и признава едно определение за вярно дефинирано само ако то е *1:1* съвпадащо с неговата дефиниция. Помогнете на преподавателя, като напишете функция `gradeDefinitions`, която да приема вече създаден мини изпит, както и дефинициите на студент, който прави изпита, и връща резултат - число, показващо броя на верните определения. Помислете за правилна сигнатура на функцията. Покажете действието на функцията в кратка конзолна програма.

### :warning: Забележки

- Погрижете се за правилното използване на динамична памет и не допускайте memory leaks
- Целете се към максимално спазване на чист код
- Не е позволено използването на `std::string`
- Позволено е използването на библиотеките `<cstring>` и `<cmath>`