#include<vector>
using namespace std;

// 利用归并排序求解逆序对的个数
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        if(nums.size()<2)
            return 0;
        return merge_sort(nums,0,nums.size()-1);
    }
    int merge_sort(vector<int> &nums,int p,int q){
        if(p==q)
            return 0;
        int mid=p+(q-p)/2;

        int left=merge_sort(nums,p,mid);
        int right=merge_sort(nums,mid+1,q);

        int cross=merge(nums,p,mid,q);
        return left+right+cross;
    }
    int merge(vector<int> &nums,int p,int mid,int q){
        vector<int> vec_a(mid-p+1,0);
        vector<int> vec_b(q-mid,0);

        for(int i=0,j=p;j<=mid;++i,++j){
            vec_a[i]=nums[j];
        }
        for(int i=0,j=mid+1;j<=q;++i,++j){
            vec_b[i]=nums[j];
        }
        
        int k=p;
        int i=0,j=0;
        int a_len=mid-p+1,b_len=q-mid;
        int count=0;
        while(i<a_len && j<b_len){
            if(vec_a[i]>vec_b[j]){
                // 当前者较小时，对于vec_b[j]而言，逆序对数等于vec_a[i]以及后面的数字的数量.
                count+=a_len-i;
                nums[k++]=vec_b[j++];
            }
            else{
                nums[k++]=vec_a[i++];
            }
        }
        if(i==a_len){
            while(j<b_len){
                nums[k++]=vec_b[j++];
            }
        }
        if(j==b_len){
            while(i<a_len){
                nums[k++]=vec_a[i++];
            }
        }
        return count;

    }
};
