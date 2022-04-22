#include <stdio.h>

double Fac(int x);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.10g\n", Fac(n));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
double Fac(int x){
    double result = 1;
    for (int i = 1; i <= x; ++i) {
        result *= i;
    }

    return result;
}