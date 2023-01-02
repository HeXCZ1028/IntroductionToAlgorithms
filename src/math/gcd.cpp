// 求两个数的最大公约数
int gcdRecursion(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcdRecursion(b,a%b);
}

int gcdIteration(int a,int b)
{
    while(b!=0)
    {
        int t=a;
        a=b;
        b=t%b;
    }
    return a;
}

// 求两个数的最小公倍数
// 两个数的乘积等于两个数最小公倍数和最大公约数的乘积
int lcd(int a,int b)
{
    int gcdValue=gcdIteration(a,b);
    int lcdValue=(a*b)/gcdValue;
    return lcdValue;
}