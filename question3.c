#include <stdio.h>
int fun( int n );

int main()
{
    int m;
    scanf("%d", &m);
    printf("The result is %d\n", fun(m));
    return 0;
}

/* 你的程序将被嵌入在这里 */
int fun(int n){
    int quadraticSum = 0;

    while (n != 0){
        quadraticSum += (n%10)*(n%10);
        n /= 10;
    }

    if (quadraticSum % 5 == 0) return 1;
    else return 0;

}