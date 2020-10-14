#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Сколько минут в душе вы проводите?\n");
    int s = get_int("");
    printf("За это время вы тратите %i бутылок воды по пол-литра\n", s * 12);
}
