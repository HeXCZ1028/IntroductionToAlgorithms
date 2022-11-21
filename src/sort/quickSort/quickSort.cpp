// 算法导论中的实现，通过双指针实现
// partition 时间复杂度:o(n),其中n=r-p+1.
// [p,r]
#include<vector>
#include<stdlib.h>
using namespace std;
int partition(vector<int> &nums,int p,int r){
    int sentry=nums[r];
    int i=p-1;// i记录在遍历过程中，调整数组的元素满足小于等于sentry的最后一个元素的下标
    for(int j=p;j<r;++j){
        // j 记录当前遍历的元素下标nums[p,r-1]
        if(nums[j]<=sentry){
            i++;
            std::swap(nums[i],nums[j]);
        }
    }
    // 循环结束后,nums[p,i] 保存在nums[p,r-1]中所有小于等于sentry的元素
    
    // 此时 nums[i+1] 保存一个下标最小的大于sentry的元素.
    // 特殊情况:(1) nums[p,r-1]所有元素都大于sentry，此时，i等于p-1，i+1 刚好是p;(2) nums[p,r-1]所有元素都小于等于
    // sentry,此时，i=r-1 ,i+1 刚好是r.
    std::swap(nums[i+1],nums[r]);
    return i+1;
}

// 为了保证性能，随机化
int randomized_partition(vector<int> &nums,int p,int r) {
    int i = rand() % (r - p + 1) + p;
    swap(nums[r], nums[i]);
    return partition(nums,p,r);
}
// 算法 （robret sedgewick 著作）也有partition的实现，个人觉得没有算法导论中双指针的方式优雅，因此不再参考.

void quicksort(vector<int> &nums,int p,int r){
    if(p<r){
        int q=partition(nums,p,r);
        // int q=randomized_partition(nums,p,r);
        quicksort(nums,p,q-1);
        quicksort(nums,q+1,r);
    }
}