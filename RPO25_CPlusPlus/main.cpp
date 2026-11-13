#include <iostream>
#include <string>

// Функция обязательно должна быть объявлена ПЕРЕД местом ее вызова!
float CalculateS(float a, float b)
{
    return a * b;
}
// Если return используется без возвращаемого значения, то он говорит о принудительном завершении работы функции. Функция может содержать несколько операторов return.
float CalculatePrice(float price, int quantity, bool hasDiscount)
{
    // Фиксированная скидка в 10%
    if (hasDiscount) return price * quantity * 0.9;
    else return price * quantity;
}

// Функция обмена значениям
void Swap(int &value1, int &value2)
{
    int temp = value1;
    value1 = value2;
    value2 = temp;
}

// Функция ввода опции из меню
void UserInput(int &userInput)
{
    std::cout << "Введите опцию: ";
    std::cin >> userInput;
}

int main()
{
    setlocale(LC_ALL, "RU");

    // Тема: Передача параметра по значению и по ссылке
    // В языке С++ все аргументы функций передаются по значению. Это значит, что при вызове функции в систему помещаются ФАКТИЧЕСКИЕ значения аргументов. Другими словами в функции создаются локальные копии.
    // Для того, чтобы произвести изменение аргумента, необходимо передать его по ссылке или указателю на ячейку памяти. В таком случае вызванная функция сможет обращаться к фактической переменной косвенно.
    // Синтаксис пример: float CalculateS(float &a, float &b)
    // & - амперсанд или же ссылка

    // Ссылка - это альтернативное имя для объекта, позволяющее принять тот же тип данных, а также манипулировать объектом, на который ссылка ссылается.
    // Пример:
    int value1 = 5;
    int& refValue1 = value1;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "refValue1: " << refValue1 << std::endl;
    value1 = 10;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "refValue1: " << refValue1 << std::endl;
    refValue1 = 20;
    std::cout << "value1: " << value1 << std::endl;
    std::cout << "refValue1: " << refValue1 << std::endl;
}