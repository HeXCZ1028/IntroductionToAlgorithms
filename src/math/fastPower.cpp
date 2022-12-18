// 快速计算a的n次幂
int fastPow(int a,int n){
    int ans=1;
    while(n){
        if(n&1)
            ans*=a;
        a*=a;
        n>>=1;
    }
    return ans;
}

#include<vector>
using namespace std;
// 矩阵版本
vector<vector<int>> MatrixMultiplicaiton(const vector<vector<int>> &matrix_a,const vector<vector<int>> &matrix_b){
    int m=matrix_a.size();
    int mid=matrix_a[0].size();
    int n=matrix_b[0].size();
    
    vector<vector<int>> res(m,vector<int>(n,0));
    
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            int mul=0;
            for(int k=0;k<mid;++k)
                mul+=matrix_a[i][k]*matrix_b[k][j];
            res[i][j]=mul;
        }
    }
    return res;
}

vector<vector<int>> fastMatrixPow(vector<vector<int>> &matrix,int n){
    // 矩阵必须满足是方阵，才能计算n次幂
    int row_len=matrix.size();
    
    // 初始化ans为单位矩阵
    vector<vector<int>> ans(row_len,vector<int>(row_len,0));
    for(int i=0;i<row_len;++i)
    	ans[i][i]=1;
    
    
    while(n){
        if(n&1)
            ans=MatrixMultiplicaiton(ans,matrix);
        matrix=MatrixMultiplicaiton(matrix,matrix);
        n>>=1;
    }
    return ans;
}