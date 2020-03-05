// 02.cpp -- Функция меняющая местами значение двух переменных типа int без использования временной переменной 
//(функция принимает аргументы любого базового типа данных, кроме BOOL)
#define _CRT_SECURE_NO_WARNINGS   // добавление для отключения блокировки стандартных функций "СИ"

#include <stdio.h>                // ввод-вывод
#include <windows.h>              // ввод на русской кириллице


typedef enum 
{
    char1,
    int1,
    short1,
    long1,
    float1,
    double1
} Tip;
Tip type;

void shift(void*, void*, Tip);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a = 5;
    int b = 7;
    puts("До:");
    printf("a = %d, b = %d\n", a, b);
    shift(&a, &b, int1);
    puts("После:");
    printf("a = %d, b = %d\n", a, b);
    
    putchar('\n');
    
    float c = 3.2;
    float d = 5.4;
    puts("До:");
    printf("c = %.1f, d = %.1f\n", c, d);
    shift(&c, &d, float1);
    puts("После:");
    printf("c = %.1f, d = %.1f\n", c, d);


    getchar();
    getchar();
    return 0;
}

void shift(void* p1, void* p2, Tip type)
{
    switch (type)
    {
        case char1:
            *((char*)p1) = *((char*)p1) + *((char*)p2);
            *((char*)p2) = *((char*)p1) - *((char*)p2);
            *((char*)p1) = *((char*)p1) - *((char*)p2);
            break;
    
        case int1:
            *((int*)p1) = *((int*)p1) + *((int*)p2);
            *((int*)p2) = *((int*)p1) - *((int*)p2);
            *((int*)p1) = *((int*)p1) - *((int*)p2);
            break;

        case short1:
            *((short*)p1) = *((short*)p1) + *((short*)p2);
            *((short*)p2) = *((short*)p1) - *((short*)p2);
            *((short*)p1) = *((short*)p1) - *((short*)p2);
            break;

        case long1:
            *((long*)p1) = *((long*)p1) + *((long*)p2);
            *((long*)p2) = *((long*)p1) - *((long*)p2);
            *((long*)p1) = *((long*)p1) - *((long*)p2);
            break;

        case float1:
            *((float*)p1) = *((float*)p1) + *((float*)p2);
            *((float*)p2) = *((float*)p1) - *((float*)p2);
            *((float*)p1) = *((float*)p1) - *((float*)p2);
            break;

        case double1:
            *((double*)p1) = *((double*)p1) + *((double*)p2);
            *((double*)p2) = *((double*)p1) - *((double*)p2);
            *((double*)p1) = *((double*)p1) - *((double*)p2);
            break;

    }
    return;
}