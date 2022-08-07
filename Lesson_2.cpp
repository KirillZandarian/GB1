#include <iostream>

using namespace std;

const int Rows = 3;
const int Columns = 3;


// Задание 2


enum Case { cross, zero, empty1 }; // Создание списка
    //cross, // Крестик
    //zero, // Нолик
    //empty // Пусто


// Задание 5

struct MyVariant //Создание структуры
{
    const char *owner; // Имя
    const char *city; // Город
    int age; // Возвраст
    float Wage;// "ЗП"
};

int main()
{

    // Задание 1
 
    short int TemperatureCelsius; //Температура в цельции
    int Circle; // Окружность
    long long Mass; // Масса
    char Celsius; // Цельции
    bool Atmosphere; // Атмосфера (да или нет)
    float SurfaceArea; // Площадь поверхности
    double Time; // Время

    Time = 20;
    Circle = 10917;
    Mass = 73477ll;
    Atmosphere = false;
    SurfaceArea = 3.793f;
    TemperatureCelsius = -53;
    Celsius = 'C';
    std::cout << "Time " << Time << "\nCircle " << Circle << "\nMass " << Mass << "\nAtmosphere " << Atmosphere << "\nSurfaceArea " << SurfaceArea << std :: endl;
    std::cout << "\nTemperatureCelsius " << TemperatureCelsius << Celsius << "\n" << std::endl;

    // Задание 3

    char array[Rows][Columns] = {{'O', 'x', 'x'}, {'x','x','x'}, {'x', 'x', 'x'}};
    for (int i = 0; i < Rows; ++i)
    {
        for (int j = 0; j < Columns; ++j)
        {
            cout << array[i][j];
        }
        cout << endl;
    }

    //Задание 5

    MyVariant UnionMyData; // Объеденинение моих данных

    UnionMyData.owner = "Kirill";
    UnionMyData.city = "Konakovo";
    UnionMyData.age = 29;
    UnionMyData.Wage = 60000;

    MyVariant Data = { "Andry", "Konakovo", 26, 50000 };

    std::cout << "\nOwner " << UnionMyData.owner << std :: endl;
    std::cout << "City " << UnionMyData.city << std :: endl;
    std::cout << "Age " << UnionMyData.age << std :: endl;
    std::cout << "Wage " << UnionMyData.Wage << std :: endl;

    std::cout << "\n" << Data.owner << " " << Data.age << std :: endl;

    return 0;
}