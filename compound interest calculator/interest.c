#include <stdio.h>
#include <math.h>
int main(void)
{
    float p;
    float rate;
    int times;
    float years;
    float result;

    printf("Oh so you decided to put your money in a saving account to earn interest? enter your starting amount\n");
    scanf("%f", &p);

    printf("Enter the interest rate\n");
    scanf("%f", &rate);
    rate /= 100;

    printf("you could've invested in halal stocks and got halal money and MORE money. Enter number of times interest compounded\n");
    scanf("%d", &times);

    printf("For how many years?\n");
    scanf("%f", &years);

    result = p*pow((1+(rate/times)), times*years);

    printf("money earned: %.3f", result);

return 0;
}
