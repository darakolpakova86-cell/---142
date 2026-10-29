#include <stdio.h>
#include <stdlib.h>

double getDouble();

void checkValues(const double m);

double calculateEnergy(const double m);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter mass of ice (kg): ");
    double m = getDouble();

    checkValues(m);

    printf("Energy = %lf J\n", calculateEnergy(m));

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
        printf("Error: invalid input");
        exit(1);
    }

    return value;
}

/**
 * @brief Проверяет допустимость введённой массы
 * @param m масса льда в килограммах
 */
void checkValues(const double m)
{
    if (m <= 0)
    {
        printf("Error: mass must be greater than zero");
        exit(1);
    }
}

/**
 * @brief Вычисляет энергию, необходимую для плавления льда
 * @param m масса льда в килограммах
 * @return Количество энергии в джоулях
 */
double calculateEnergy(const double m)
{
    const double c = 2100.0;
    const double lambda = 330000.0;
    const double t = 10.0;

    return c * m * t + lambda * m;
}
