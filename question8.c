#include<stdio.h>
double fun(int m);
int main()
{int n;
    scanf("%d", &n);
    printf("The result is %f\n", fun(n));
    return 0;
}


/* 请在这里填写答案 */
double fun(int m){
    double result = 0;

    for (int i = 1; i <= m; ++i){
        result += 1/(2*(double )i*i);
    }

    return result;
}