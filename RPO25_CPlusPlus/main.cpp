#include <iostream>
#include <chrono> // библиотека времени
#include <thread> // библиотека потока

long long Fibonacci(int n)
{
    return (n < 1) ? n : Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    setlocale(LC_ALL, "RU");
    
    // Библиотека <chrono>
    // Позволяет представить в программе временной интервал, конкретно количество тактов с заданной единицей измерения, например, секунды, миллисекунды, микросекунды и так далее.
    // Создаем точку во времени под названием start и инициализируем ее началом таймера (время старта программы)
    std::chrono::time_point start = std::chrono::steady_clock::now();
    
    // Имитируем работу программы с помощью функции sleep_for(), заставляя текущий поток заснуть на некоторое время.
    //std::this_thread::sleep_for(std::chrono::seconds(5));  
    int fibResult = Fibonacci(32);

    // Создаем точку во времени для конца программы
    std::chrono::time_point end = std::chrono::steady_clock::now();

    // Вычисляем разницу между конечной точкой времени работы программы и начальной. Класс duration при создании экземпляра позволяет указать тип данных и время, которое он отображает в угловых скобках.
    std::chrono::duration<double, std::milli> duration = end - start;

    std::cout << "Время выполнения программы: " << duration << std::endl;
}