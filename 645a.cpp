#include<bits/stdc++.h>
using namespace std;
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<' ';
#define endo cout<<endl;
#define printv(v) for(auto x:v){ps(x);}endo;
#define printve(v) for(auto x:v){ps(x);};
typedef long long int ll;

void solution(){
    vector<string>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    string a="";
    for(int i=0;i<=1;i++){
        if(i==0 || i==2){
            for(int j=0;j<=1;j++){
                if(v[i][j]!='X')
                    a+=v[i][j];
            }
        }
        else{
            for(int j=1;j>=0;j--){
                if(v[i][j]!='X')
                    a+=v[i][j];
            }
        }
    }

    string b="";
    for(int i=2;i<=3;i++){
        if(i==0 || i==2){
            for(int j=0;j<=1;j++){
                if(v[i][j]!='X')
                    b+=v[i][j];
            }
        }
        else{
            for(int j=1;j>=0;j--){
                if(v[i][j]!='X')
                    b+=v[i][j];
            }
        }
    }   
    // cout<<a<<" "<<b<<endl;
    if((a=="ABC" || a=="BCA" || a=="CAB") && (b=="ABC" || b=="CAB" || b=="BCA")){
        cout<<"YES"<<endl;
        return;
    }
    if((a=="ACB" || a=="CBA" || a=="BAC") && (b=="ACB" || b=="CBA" || b=="BAC")){
        cout<<"YES"<<endl;
        return;
    }
    if((a=="BAC" || a=="ACB" || a=="CBA") && (b=="BAC" || b=="CBA" || b=="ACB")){
        cout<<"YES"<<endl;
        return;
    }
    if((a=="BCA" || a=="CAB" || a=="ABC") && (b=="BCA" || b=="ABC" || b=="CAB")){
        cout<<"YES"<<endl;
        return;
    }
    if((a=="CAB" || a=="ABC" || a=="BCA") && (b=="CAB" || b=="BCA" || b=="ABC")){
        cout<<"YES"<<endl;
        return;
    }
    if((a=="CBA" || a=="BAC" || a=="ACB") && (b=="CBA" || b=="ACB" || b=="BAC")){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
    }

    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        solution();
    }
    return 0;
}