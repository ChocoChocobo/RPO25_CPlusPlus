#include <iostream>
#include <string> // подключение комплексного типа данных строк

// Синтаксис структуры
struct Product
{
    // Поля или же переменные и методы
    std::string name;
    double price;
    int quantity; // количество
};

int main()
{
    setlocale(LC_ALL, "RU");

    // Задача пример: нужно иметь набор товаров, выводить их на экран и вычислять суммарную стоимость
    Product products[3] =
    {
        { "Коки-кола", 119.9, 76 },
        { "Газява", 99.9, 120 },
        { "Дошик", 74.99, 34 },
    };

    double total = 0;
    // Подссчет суммарной стоимости
    for (int i = 0; i < 3; i++)
    {
        total += products[i].price * products[i].quantity;
    }
    std::cout << "Наш склад стоит: " << total << " тугриков.";
}