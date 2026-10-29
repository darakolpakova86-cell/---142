#include <stdio.h>
#include <stdlib.h>

int getInt();

void checkValues(const int a, const int b);

int sum(const int a, const int b);

int difference(const int a, const int b);

double average(const int a, const int b);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter a: ");
    int a = getInt();

    printf("Enter b: ");
    int b = getInt();

    checkValues(a, b);

    printf("Sum = %d\n", sum(a, b));
    printf("Difference = %d\n", difference(a, b));
    printf("Average = %lf\n", average(a, b));

    return 0;
}

/**
 * @brief Считывает с клавиатуры целое число
 * @return Считанное значение
 */
int getInt()
{
    int value = 0;

    if (scanf("%d", &value) != 1)
    {
        printf("Error: invalid input");
        exit(1);
    }

    return value;
}

/**
 * @brief Проверяет допустимость введённых значений
 * @param a первое число
 * @param b второе число
 */
void checkValues(const int a, const int b)
{
    (void)a;
    (void)b;
}

/**
 * @brief Вычисляет сумму двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанная сумма
 */
int sum(const int a, const int b)
{
    return a + b;
}

/**
 * @brief Вычисляет разность двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанная разность
 */
int difference(const int a, const int b)
{
    return a - b;
}

/**
 * @brief Вычисляет среднее арифметическое двух чисел
 * @param a первое число
 * @param b второе число
 * @return Рассчитанное среднее арифметическое
 */
double average(const int a, const int b)
{
    return ((double)a + b) / 2.0;
}
