#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double getDouble();

void checkValues(const double x, const double y, const double z);

double a(const double x, const double y, const double z);

double b(const double x, const double y, const double z);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x: ");
    double x = getDouble();

    printf("Enter y: ");
    double y = getDouble();

    printf("Enter z: ");
    double z = getDouble();

    checkValues(x, y, z);

    printf("a = %lf\n", a(x, y, z));
    printf("b = %lf\n", b(x, y, z));

    return 0;
}

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble()
{
    double value = 0.0;

    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }

    return value;
}

/**
 * @brief Проверяет допустимость введённых значений
 * @param x значение x
 * @param y значение y
 * @param z значение z
 */
void checkValues(const double x, const double y, const double z)
{
    if (x < -1)
    {
        printf("Error: x must be greater than or equal to -1");
        exit(1);
    }

    if (y * y + sin(x) * sin(x) == 0.0)
    {
        printf("Error: denominator is zero");
        exit(1);
    }
}

/**
 * @brief Вычисляет значение функции a
 * @param x значение x
 * @param y значение y
 * @param z значение z
 * @return Рассчитанное значение a
 */
double a(const double x, const double y, const double z)
{
    return sin(x) / sqrt(y * y + sin(x) * sin(x))
           - pow(x, 2) * y * z;
}

/**
 * @brief Вычисляет значение функции b
 * @param x значение x
 * @param y значение y
 * @param z значение z
 * @return Рассчитанное значение b
 */
double b(const double x, const double y, const double z)
{
    return exp(-z * x) * sqrt(x + 1) + exp(-y * x);
}
