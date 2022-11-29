/**
 * @file binarySearch.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

// 二分查找某一元素在数组中的位置，不存在返回-1
int binary_search(const vector<int> &nums,int target){
    int left=0,right=nums.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

// 查找target的最小下标，若不存在返回-1 。
int lower_bound(const vector<int> &nums,int target){
    int begin=0,end=nums.size();
    
    while(begin<end){
        int mid=begin+(end-begin)/2;
        if(nums[mid]<target)
            begin=mid+1;
        else
            end=mid;
    }
    // 此时,跳出循环后,begin和end指向同一个位置,都指向第一个大于等于target的位置
    // 若数组中所有元素都比target小,则begin=nums.size()
    
    if(begin!=nums.size() && nums[begin]==target)
        return begin;
    else
        return -1;
}

// 查找target的最大下标，若不存在返回-1。

int upper_bound(const vector<int> &nums,int target){
    int begin=0,end=nums.size();
    while(begin<end){
        int mid=begin+(end-begin)/2;
        if(nums[mid]<=target)
            begin=mid+1;
        else
            end=mid;
    }
    // 此时,跳出循环后,begin和end指向同一个位置,都指向第一个大于target的位置
    // 若数组中所有元素都大于target,则begin=0
    
    if(begin>0 && nums[begin-1]==target)
        return begin-1;
    else
        return -1;
}