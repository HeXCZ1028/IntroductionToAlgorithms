#include<iostream>
#include<vector>
using namespace std;
// 此时i的左子树和右子树都满足大顶堆，但是i可能不满足，需要调整。
// 时间复杂度为O(log n)
void maxHeapify(vector<int> &nums,int i,int heapSize){
    
    // 这里 left and right 是2*i+1,2*i+2的原因是数组下标是从零开始。
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;// 表示i和i的左右孩子中最大值的下标。
    if(left<heapSize && nums[left]>nums[i])
        largest=left;
    if(right<heapSize && nums[right]>nums[largest])
        largest=right;
    
    if(largest!=i){
        // 不满足大顶堆，需要调整
        std::swap(nums[i],nums[largest]);
        
        maxHeapify(nums,largest,heapSize);
    }
}

// 迭代版调整堆,避免递归时间过大
void maxHeapifyIterative (vector<int> &nums,int i,int heapSize)
{
    while(i<heapSize)
    {
        int left=2*i+1;
        int right=2*i+2;
        int largest=i;// 表示i和i的左右孩子中最大值的下标。
        if(left<heapSize && nums[left]>nums[i])
            largest=left;
        if(right<heapSize && nums[right]>nums[largest])
            largest=right;
        
        if(largest!=i){
            std::swap(nums[i],nums[largest]);
            i=largest;
        }
        else
        {
            break;
        }
    }
}

// 建堆
// 自底向上的利用maxHeapify 把数组转换为大顶堆。
// 时间复杂度为 O(n).(证明见算法导论)
void buildMaxHeap(vector<int> &nums){
    
    int len=nums.size();
    int heapSize=nums.size();
    for(int i=len/2;i>=0;--i){
        maxHeapify(nums,i,heapSize);
    }
}

void heapSort(vector<int> &nums){
    buildMaxHeap(nums);
    
    int len=nums.size();
    int heapSize=nums.size();
    for(int i=len-1;i>=1;--i){
        std::swap(nums[i],nums[0]);
        heapSize--;
        maxHeapify(nums,0,heapSize);
    }
}