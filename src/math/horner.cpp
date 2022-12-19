// 利用霍纳规则计算多项式,见<<算法导论>> 2.3

#include<vector>
using namespace std;
double computePolynomial(vector<int>& coefficient,double value)
{
    double result=0;
    for(int i=coefficient.size()-1;i>=0;--i)
    {
        result=coefficient[i]+result*value;
    }
    return result;
}