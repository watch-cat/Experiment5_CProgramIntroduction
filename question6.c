#include <stdio.h>
int prime(int x);
int main()
{
    int i,k=0;
    for(i=1;i<=100;i++)
        if(prime(i)==1)
        {printf("%4d",i);
            k++;
            if(k%10==0) printf("\n");
        }
    printf("\n%4d\n",k);
    return 0;
}
/* 请在这里填写答案 */
int prime(int x){

    static int primeNumber[200], numOfPrimeNum;
    if (x == 1){
        primeNumber[0] = 2;
        primeNumber[1] = 3;
        numOfPrimeNum = 2;
    }

    if (x == 2 || x == 3) return 1;
    if (x == 1 || x == 4) return 0;

    if ((x+1)%6 != 0 && (x-1)%6 != 0){
        return 0;
    }

    //除2，3外的质数，都分布在6的倍数左右
    for (int j = 0; j < numOfPrimeNum; ++j) {
        if (x % primeNumber[j] == 0) break;
        //数字的质因数只会出现在小于等于其算术平方根的范围内
        if (j == (numOfPrimeNum - 1)){
            primeNumber[numOfPrimeNum] = x;
            numOfPrimeNum++;
            return 1;
        }
    }

    return 0;
}