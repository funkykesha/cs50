/*
    * Программа Гайбадулина Арсения
    * Построение пирамиды Марио
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Объявляем переменные блоков пирамиды
    int a;
        printf("Какой высоты будет башня?\n");
    a = get_int("");

    while (a < 0 || a > 23)      /* Проверяем правильность введенного числа */
    {
        printf("Число должно быть больше 0 и меньше 23\n");
        a = get_int("");
    }
        int b = a;
        while (b > 0)
        {
            int c = b;
            int d = b;
            while(c > 1)
            {
                printf(" ");
                c = c - 1;
            }
            while (d < a + 2)
            {
                printf("#");
                d = d + 1;
            }
                printf("\n");
                b = b - 1;

        }
}