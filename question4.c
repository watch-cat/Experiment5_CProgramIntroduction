#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */
double mypow(double x,int n){
    static double result = 1;
    if (n >= 1) {
        result *= x;
        return mypow(x, n - 1);
    }

    return result;
}