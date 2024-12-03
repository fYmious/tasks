#include <stdio.h>

int f(int m, int n);

int main(void)
{
    int m, n; // инициализируем переменные m и n
    printf("Введите числа m и n: "); // выводим сообщение в терминал
    scanf("%d %d", &m, &n); // прочитали m и n
    // из терминала и сохранили в переменные m и n

    // вызываем функцию f
    int result = f(m, n); // вызываем функцию f с параметрами m и n

    printf("%d", result); // выводим результат в терминал

    return 0;
}

// функция f принимает два числа m и n
int f(int m, int n)
{
    // && := и
    if (n < 0 && m > 0)
    {
        return m + n * n;
    }
    else if (m <= 0 && n < 0)
    {
        return m + 2 * n;
    }
    else
    {
        return m + 1;
    }
}
