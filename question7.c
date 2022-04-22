#include <stdio.h>

float fun(int n);

int main()
{
    int n;
    scanf("%d",&n) ;
    printf("%f\n",fun(n));
    return 0;
}

/* 您的答案将被嵌入在这里 */
//float fun(int n){
//    float result = 0;
//    float denominator;
//
//    for (int i = 1; i <= n; ++i) {
//        result += (float )(1/((1.0+i)*i/2.0));
//    }
//
//    return result;
//}

float fun(int n){
    float s,a,b;
    int x,i;
    s=1;
    b=1;
    for (i = 2; i <=n ; i++) {
        b = b + 1;
        a = 1.0 / b;
        s = s + a;
    }

    return n;
}