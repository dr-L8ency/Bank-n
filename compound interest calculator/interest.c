#include <stdio.h>
#include <math.h>
int main(void)
{
    float p;
    float rate;
    int times;
    float years;
    float result;

    printf("oh so you decided to put your money in a saving account to earn interest? you scummy piece of shit, anyways enter your starting amount\n");
    scanf("%f", &p);

    printf("stupid nigger, enter the interest rate\n");
    scanf("%f", &rate);
    rate = rate/100;

    printf("you could've invested in halal stocks and got halal money and MORE money, enter number of times interest compounded\n");
    scanf("%d", &times);

    printf("for how many years?\n");
    scanf("%f", &years);

    result = p*pow((1+(rate/times)), times*years);

    printf("money earned: %.3f", result);

return 0;
}
