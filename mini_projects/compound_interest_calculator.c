#include <stdio.h>
#include <math.h>

int main()
{

    // Compound Interest Calculator

    double principal = 0.0, rate = 0.0, total = 0.0;
    int years = 0, timesCompounded = 0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal amount(P): ");
    scanf("%lf", &principal);

    printf("Enter the intrest rate %% (r): ");
    scanf("%lf", &rate);
    rate /= 100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter # time compounded per year(n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + (rate / timesCompounded)), timesCompounded * years);
    printf("Based on the provided numbers : \n");
    printf("rate:%lf\n", rate);
    printf("principal:%lf\n", principal);
    printf("years:%d\n", years);
    printf("timesCompounded:%d\n", timesCompounded);
    printf("Your total after %d will be:$%lf\n", years, total);

    return 0;
}