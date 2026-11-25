#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Проверяет правильность ввода
 */
void checkValues(const double a, const double b, const double c);

/**
 * @brief Выполняет преобразование чисел
 */
void process(double *a, double *b, double *c);

int main()
{
    double a, b, c;

    printf("Enter a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Error: incorrect input");
        return 1;
    }

    printf("Enter b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Error: incorrect input");
        return 1;
    }

    printf("Enter c: ");
    if (scanf("%lf", &c) != 1)
    {
        printf("Error: incorrect input");
        return 1;
    }

    checkValues(a, b, c);

    if (a < b && b < c)
    {
        a = a * 2;
        b = b * 2;
        c = c * 2;
    }
    else
    {
        if (a < 0)
            a = -a;

        if (b < 0)
            b = -b;

        if (c < 0)
            c = -c;
    }

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);
    printf("c = %lf\n", c);

    return 0;
}

void checkValues(const double a, const double b, const double c)
{
    if (a != a || b != b || c != c)
    {
        printf("Error: incorrect values");
        exit(1);
    }
}
