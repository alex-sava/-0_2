// 02.cpp -- Функция меняющая местами значение двух переменных без использования временной переменной 
//(функция принимает аргументы любого базового типа данных, кроме BOOL)
#define _CRT_SECURE_NO_WARNINGS   // добавление для отключения блокировки стандартных функций "СИ"

#include <stdio.h>                
#include <windows.h>  
#include <iostream>

using namespace std;

template <typename T1, typename T2>
void shift(T1 &a, T2 &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int a = 5;
    int b = 7;
    puts("До:");
    printf("a = %d, b = %d\n", a, b);
    shift(a, b);
    puts("После:");
    printf("a = %d, b = %d\n", a, b);
    
    putchar('\n');
    
    float c = 3.2;
    float d = 5.4;
    puts("До:");
    printf("c = %.1f, d = %.1f\n", c, d);
    shift(c, d);
    puts("После:");
    printf("c = %.1f, d = %.1f\n", c, d);

    getchar();
    getchar();
    return 0;
}