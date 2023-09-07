#include<bits/stdc++.h>
using namespace std;
#define pb push_back
typedef long long int ll;

void cols(vector<vector<char>>&v,int n,int m,vector<int>&col){
    for(int i=0;i<m;i++){
            int f1=0;
            int f=0;
            char c='.';
            int k=0;
            for(int j=0;j<n;j++){
                if(f1==0 && v[j][i]=='.'){
                    f=1;
                    continue;
                }
                f=0;
                if(v[j][i]=='.'){
                    f=1;
                    break;
                }
                if(c=='.' && v[j][i]!=c){
                    f1=1;
                    c=v[j][i];
                }
                
                if(c!='.' && v[j][i]!=c){
                    f=1;
                    break;
                }
                k++;
                // cout<<f<<" "<<v[j][i]<<" "<<j<<" "<<i<<" -\n\n";
            }
            // cout<<k<<" "<<f<<endl;
            if(k>=2 && f==0){
                col.push_back(i);
            }
        }
        for(int j=0;j<(int)col.size();j++){
            for(int i=0;i<n;i++){
                if(col.size()==0){
                    cout<<"NO\n";
                    break;

                }
                else{
                    v[i][col[j]]='.';
                    // cout<<v[r[j]][i]<<" ";
                }
            }
            // cout<<"\n";
        }

        return;
}
void rows(vector<vector<char>>&v,int n,int m,vector<int>&r,vector<int>&col){
    for(int i=0;i<n;i++){
            int f1=0;
            int f=0;
            char c='.';
            int k=0;
            for(int j=0;j<m;j++){
                if(f1==0 && v[i][j]=='.'){
                    f=1;
                    continue;
                }
                f=0;
                if(v[i][j]=='.'){
                    f=1;
                    break;
                }
                if(c=='.' && v[i][j]!=c){
                    f1=1;
                    c=v[i][j];
                }
                if(c!='.' && v[i][j]!=c){
                    f=0;
                    break;
                }
                k++;
                // cout<<f<<" "<<v[i][j]<<" "<<i<<" "<<j<<" -\n\n";
            }
            // cout<<k<<" "<<f<<endl;
            if(k>=2 && f==0){
                r.push_back(i);
            }
        }
        cols(v,n,m,col);
        for(int j=0;j<(int)r.size();j++){
            for(int i=0;i<m;i++){
                if(r.size()==0){
                    cout<<"NO\n";
                    break;

                }
                else{
                    v[r[j]][i]='.';
                }
            }
        }
        return;
}

int main(){
    int t;
    t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>>v(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }
        vector<int>r;
        vector<int>col;
        for(int i=0;i<max(n,m);i++){
            rows(v,n,m,r,col);
        }
        // cols(v,n,m,col);
        

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]!='.'){
                    ans++;
                }
                // cout<<v[i][j]<<" ";
            }
            // cout<<"\n";
        }
        cout<<ans<<endl;


        
    }
    return 0;
}