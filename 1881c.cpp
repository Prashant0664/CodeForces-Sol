

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void rotate90clockwise(vector<vector<ll>>&mat)
{
    // Transpose of matrix
    int n=mat.size();
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(mat[i][j], mat[j][i]);
    // Reverse individual rows
    for (int i = 0; i < n; i++) {
        int low = 0, high = n - 1;
        while (low < high) {
            swap(mat[i][low], mat[i][high]);
            low++;
            high--;
        }
    }
}
void ans(){
    ll n;
    cin>>n;
    vector<string>vv(n);
    for(int i=0;i<n;i++){
        cin>>vv[i];
    }
    vector<vector<ll>>v(n,vector<ll>(n,0));
    vector<vector<ll>>v2(n,vector<ll>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=(int(vv[i][j]-'a'));
            v2[i][j]=v[i][j];
        }
    }
    rotate90clockwise(v2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    ll ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // cout<<i<<" "<<j<<" "<<v[i][j]<<" "<<v2[i][j]<<endl;
            ans+=abs(v[i][j]-v2[i][j]);
        }
    }
    cout<<ans/2<<endl;
    return;
}
int main(){
    int _;
    cin>>_;
    while(_--){
        ans();
    }
    return 0;
}
/*
abba   
bcbb   
bccb   
abba   



*/