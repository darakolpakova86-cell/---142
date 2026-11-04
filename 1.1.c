#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Проверяет допустимость значений
 * @param x значение x
 * @param y значение y
 * @param z значение z
 */
void checkValues(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции a
 */
double a(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции b
 */
double b(const double x, const double y, const double z);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно
 */
int main()
{
    const double x = 1.7;
    const double y = 1.08;
    const double z = 0.5;

    checkValues(x, y, z);

    printf("a = %lf\n", a(x, y, z));
    printf("b = %lf\n", b(x, y, z));

    return 0;
}

void checkValues(const double x, const double y, const double z)
{
    if (x < -1)
    {
        printf("Error: x must be greater than or equal to -1");
        exit(1);
    }

    if (pow(y, 2) + pow(sin(x), 2) == 0.0)
    {
        printf("Error: denominator is zero");
        exit(1);
    }
}

double a(const double x, const double y, const double z)
{
    return sin(x) / sqrt(pow(y, 2) + pow(sin(x), 2))
           - pow(x, 2) * y * z;
}

double b(const double x, const double y, const double z)
{
    return exp(-z * x) * sqrt(x + 1) + exp(-y * x);
}
