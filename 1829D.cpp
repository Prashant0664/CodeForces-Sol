#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int>arr, int K, int start, int end, int max_sum,vector<vector<vector<int>>>&v,vector<int>arr2,int s2,int siz)
{
    if(s2==siz){
        return max_sum;
    }
    if (K == 0)
        return max_sum;
    if(v[K][start][end]!=-1){
        return v[K][start][end];
    }
    int max_sum_start = max_sum + arr2[s2]*arr[start];
    int max_sum_end = max_sum + arr2[s2]*arr[end];
    int ans = max(
        maxSum(arr, K - 1, start + 1, end, max_sum_start,v,arr2,s2+1,siz),
        maxSum(arr, K - 1, start, end - 1, max_sum_end,v,arr2,s2+1,siz));
    return v[K][start][end]=ans;
}
int main() {
     int i  = 0;
     int ki = 0;
     vector<int>arr1 = {10,2,3,4,5,6};
     vector<int>arr2 = {10,1,5};
     int j = arr1.size()-1;
     int n=6;
     int k=3;
     vector<vector<vector<int>>>v(3+1,vector<vector<int>>(n+1,vector<int>(n+1,-1)));
     cout<< maxSum(arr1,3,0,n-1,0,v,arr2,0,k)<<endl;
}