// 3. Сумма двух чисел

#include <stdio.h>
int main ()
{
    int firstNumber, secondNumber, sum;
    printf ("Введите два целых числа: "),

    // Читаем 2 целых числа функций scanf()
    scanf ("%d %d", &firstNumber, &secondNumber);
    sum = firstNumber + secondNumber;
    printf("%d + %d = %d\n", firstNumber, secondNumber, sum);

    return 0;
}
