#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Проверяет допустимость значения
 * @param x значение x
 */
void checkValues(const double x);

/**
 * @brief Вычисляет значение заданной функции
 * @param x значение x
 * @return значение функции
 */
double f(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    double x;

    printf("Enter x: ");

    if (scanf("%lf", &x) != 1)
    {
        printf("Error: incorrect input");
        return 1;
    }

    checkValues(x);

    printf("y = %lf\n", f(x));

    return 0;
}

void checkValues(const double x)
{
    if (x > 2 && fabs(cos(x)) < 1e-12)
    {
        printf("Error: tangent is undefined");
        exit(1);
    }
}

double f(const double x)
{
    const double a = 2.0;

    if (x > a)
    {
        return tan(x) + M_PI / 3.0;
    }
    else
    {
        return sin(x) * a;
    }
}
