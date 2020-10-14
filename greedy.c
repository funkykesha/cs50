// Программа Гайбадулина
// Вычисляем количество монеток для сдачи
// Номинал монет 25, 10, 5, 1

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Вводим переменные
    float money, change, product;
    int twentyfive, ten, five, one;

    //Стоимость товара
    product = 8.76;

    //Запрашиваем деньги у покупателя
    printf("Товар стоит %.2f руб. Прнимают только наличные. Сколько денег вы дадите кассиру (руб.коп)?\n", product);
    money = get_float("");

    //Вычисляем сдачу
    change = ( money - product ) * 100;
    printf("Ваша сдача %.f коп.\n", change );

    //Вычисляем количество монет
    twentyfive  =   change / 25;
    ten         =   (change - twentyfive * 25) / 10;
    five        =   (change - twentyfive * 25 - ten * 10) / 5;
    one         =   (change - twentyfive * 25 - ten * 10 - five * 5);
    coin        =   twentyfive + ten + five + one;
    printf("Вам дадут %d мон.\n%d - 25-копеечных\n%d - 10-копеечных\n%d - 5-копеечных\n%d - 1-копеечных\n", coin, twentyfive, ten, five, one);
}