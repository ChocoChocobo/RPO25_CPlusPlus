#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    // ќбъ€вл€ем переменные x и y
    float x = 36.6, y;
    // ќбъ€вл€ем указатель
    float* ptrX;
    // ѕрисваиваем указателю ptrX адрес переменной X
    ptrX = &x;
    // ѕеременной y присваиваем значение переменной, адрес которой содержит указатель ptrX
    y = *ptrX;
    // ”величение значени€, вз€тое по указателю
    *ptrX += 5;
    // ƒобавление значени€ к произведению значени€, вз€того по указателю ptrX на y
    y = 5 + (*ptrX) * y;
    
    // ќпераци€ присваивани€
    int value = 18;
    int* ptr1, *ptr2;
    ptr1 = &value;
    ptr2 = ptr1;
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;
    std::cout << value << std::endl;
    std::cout << *ptr2 << std::endl;
    
    // ƒемонстраци€ работы с операторами в консоли:
    //std::cout << ptrX << std::endl; // вывод адреса переменной x
    //std::cout << &ptrX << std::endl; // вывод адреса переменной с указателем
    //std::cout << *ptrX << std::endl; // получение значени€ по адресу, на который указывает указатель
    //std::cout << y << std::endl;
}