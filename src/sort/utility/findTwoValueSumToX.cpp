// 一些利用排序算法的常见用法
#include<vector>
#include<algorithm>
using namespace std;
// <<算法导论>> 2.3.7：给定n个整数的集合S和另一个整数x,确定s中是否存在两个其和刚好为x的整数.
// 排序+双指针
vector<int> findTwoValueSumToX(const vector<int> &arr,int x)
{
    sort(arr.begin(),arr.end());

    int i=0,j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]+arr[j]>x)
        {
            j--;
        }
        else if(arr[i]+arr[j]<x)
        {
            i++;
        }
        else
        {
            return vector<int>{arr[i],arr[j]};
        }
    }
    return vector<int>{-1,-1};
}