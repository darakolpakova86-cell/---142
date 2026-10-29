#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double getDouble();

void checkSide(const double side);

double hypotenuse(const double a, const double b);

double perimeter(const double a, const double b);

double area(const double a, const double b);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter a: ");
    double a = getDouble();
    checkSide(a);

    printf("Enter b: ");
    double b = getDouble();
    checkSide(b);

    printf("Hypotenuse = %lf\n", hypotenuse(a, b));
    printf("Perimeter = %lf\n", perimeter(a, b));
    printf("Area = %lf\n", area(a, b));

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
 * @brief Проверяет, что длина катета положительна
 * @param side длина катета
 */
void checkSide(const double side)
{
    if (side <= 0)
    {
        printf("Error");
        exit(1);
    }
}

/**
 * @brief Вычисляет длину гипотенузы
 * @param a первый катет
 * @param b второй катет
 * @return Длина гипотенузы
 */
double hypotenuse(const double a, const double b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

/**
 * @brief Вычисляет периметр треугольника
 * @param a первый катет
 * @param b второй катет
 * @return Периметр треугольника
 */
double perimeter(const double a, const double b)
{
    return a + b + hypotenuse(a, b);
}

/**
 * @brief Вычисляет площадь треугольника
 * @param a первый катет
 * @param b второй катет
 * @return Площадь треугольника
 */
double area(const double a, const double b)
{
    return a * b / 2;
}
