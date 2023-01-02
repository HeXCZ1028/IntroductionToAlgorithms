#include<map>
// 求一个数的所有质因数，或者质因数个数
int getPrimeFactor(int n)
{
    int i=2;
    int countUniqueFactor=0; // 互不相同的质因数个数
    int countAllFactor=0; // 所有质因数的个数

    std::map<int,int> primeFactors;
    while(i*i<=n)
    {
        if(n%i==0)
        {
            countUniqueFactor++;
        }
        // while循环中的n=n/i，可以保证后面进入循环中的i都是质数.
        // 因为循环中i不断地整除n,当外层循环中i递增到2i,3i等时，不会再进入这个循环中.
        // 所以当n%i==0成立时，i一定是个质数.
        while(n%i==0)
        {
            countAllFactor++;
            n=n/i;

            primeFactors[i]++;
        }
        i++;
    }
    // 当原始的n本身是个质数或者被其他质因数整除后剩下的因数也一定是个质数.
    if(n>1)
    {
        countAllFactor++;
        countUniqueFactor++;
        primeFactors[n]++;
    }
    return countAllFactor;
}