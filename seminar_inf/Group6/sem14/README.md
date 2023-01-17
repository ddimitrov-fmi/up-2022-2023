## <center> **Семинар по "Увод в програмирането"** </center>

## <center> **Структури** </center>

## 1. Какво са структурите в C++?

Структурите в C++ представляват тип данни, които обединява в себе си дадена информация. Тази информация е множество от базов тип данни, масиви или други обекти. Идеята на структурите е да обобщят тази информация на едно място под едно име с цел тази информация да се обработва по един или друг начин. Отделните елементи, които пазят някакви данни в структурата се наричат **член-данни**. Структурите в себе си могат да съдържат и дефиниции на функции, които от своя страна се наричат **член-функции** или **методи**.

## 2. Деклариране на структури

Шаблон:

```c++
struct name
{
    <type of member1> <name of member1>;
    <type of member2> <name of member2>;
    <type of member3> <name of member3>;
    ...
};
```

Реален пример:

```c++
struct Dog
{
    char name[32];
    char breed[32];
    size_t age;

    void feed()
    {
        std::cout << name << " is fed!";
    }
};
```

## 3. Инициализиране и достъп

По подразбиране структурите са публични. Тоест можем да достъпваме тяхната информация заедно с техните функции. Достъпът на данните става чрез оператора **"."**.

```c++
struct Dog
{
    char name[32];
    char breed[32];
    size_t age;

    void feed()
    {
        std::cout << name << " is fed!";
    }
};

int main()
{
    Dog goldenRetriever;

    char name[32];
    std::cin >> name;
    char breed[23] = { "Golden Retriever" };
    size_t age;
    std::cin >> age;

    strcpy(goldenRetriever.name, name);
    strcpy(goldenRetriever.breed, breed);
    goldenRetriever.age = age;

    goldenRetreiver.feed();

    return 0;
}
```

## 4. Масиви от структури

```c++
struct Dog
{
    char name[32];
    char breed[32];
    size_t age;

    void feed()
    {
        std::cout << name << " is fed!";
    }
};

int main()
{
    Dog dogs[4];

    for (int i = 0 ; i < 4 ; i++)
    {
        std::cout << "Enter name: ";
        std::cin.getline(dogs[i].name, 32);
        std::cout << "Enter breed: "
        std::cin.getline(dogs[i].breed, 32);
        std::cout << "Enter age: ";
        std::cin >> dogs[i].age;
    }

    return 0;
}
```

## 5. Указатели към обекти

```c++
struct Dog
{
    char name[32];
    char breed[32];
    size_t age;

    void feed()
    {
        std::cout << name << " is fed!";
    }
};

int main()
{
    //Example 1
    Dog* dog1 = new Dog;

    std::cin.getline((*dog1).name, 32);
    std::cin.getline((*dog1).breed, 32);
    std::cin >> (*dog1).age;

    delete dog1;

    //Example 2

     Dog* dog2 = new Dog;
    std::cin.getline(dog2->name, 32);
    std::cin.getline(dog2->breed, 32);
    std::cin >> dog2->age;

    delete dog2;

    return 0;
}
```

Рекурсивни структури

```c++
struct MatryoshkaDoll
{
   char name[32];
   MatryoshkaDoll* smallerDoll;
};

```

Ако член-данната ни не е указател към обект ще получим безкрайно влагане на структури. По този начин сега ще можем да кажем къде свършва рекурсивното влагане като накрая просто ще насочим **smallerDoll** да сочи към **nullptr**;

#

## Задача

Да се дефинира структура Planet, определяща планета по име (символен низ), разстояние от слънцето, диаметър и маса (реални числа). Да се дефинират функции, изпълняващи следните действия:

а) въвежда данни за планета от клавиатурата;

б) извежда данните за планета;

в) връща като резултат броя секунди, които са необходими на светлината да достигне от слънцето до планетата (да се приеме, че светлината има скорост 299792 km/s и че разстоянието на планетата до слънцето е зададено в километри).

г) създава едномерен масив от планети с фиксиран размер и въвежда данните за тях от стандартния вход;

д) извежда данните за планетите от масив, подаден на функцията като параметър;
