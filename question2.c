#include <stdio.h>
double  fun(int m);
int main()
{
    printf("ji=%.0lf\n",fun(20));
    return 0;
}

/* 请在这里填写答案 */
double fun(int m){
    double result = 1;

    for (int i = 2; i <= m; i += 2) {
        result *= i;
    }

    return result;
}
