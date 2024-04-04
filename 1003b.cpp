// #include<bits/stdc++.h>
// using namespace std;
// #define pn(x) cout<<x<<endl;
// #define ps(x) cout<<x<<' ';
// #define endo cout<<endl;
// #define printv(v) for(auto x:v){ps(x);}endo;
// #define printve(v) for(auto x:v){ps(x);};
// typedef long long int ll;

// void solution(){
//     ll a,b,k;
//     cin>>a>>b>>k;
//     ll aa=a,bb=b,kk=k;
//     string s(a+b,'0');
//     if(b>a){
//         swap(a,b);
//     }
//     int f=0;
//     if(k%2==0){
//         f=1;
//         k--;
//     }
//     string t="";
//     a-=k;
//     b-=k;
//     string g="";
//     if(f==1)g+="1";
//     for(int i=0;i<a;i++){
//         g+="0";
//     }
//     while(k--){
//         t+="01";
//     }
//     for(int i=0;i<a;i++){
//         t+="1";
//     }
//     s=g+t;
//     string h=s;
//     int zc=0,oc=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='0'){
//             zc++;
//         }else{
//             oc++;
//         }
//     }
//     // cout<<s<<" "<<t<<endl;
//     // cout<<aa<<" "<<aa<<endl;
//     if(aa==zc && bb==oc){
//         cout<<s<<endl;
//     }
//     else cout<<t<<endl;
//     return;
// }
// int main(){
//     int _=1;
//     cin>>_;
//     while(_--){
//         solution();
//     }
//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int a, b, x;
	cin >> a >> b >> x;
	
	if (x % 2 == 0) {
		if (a > b) {
			for (int i = 0; i < x / 2; ++i)
				cout << "01";
			cout << string(b - x / 2, '1');
			cout << string(a - x / 2, '0');
		} else {
			for (int i = 0; i < x / 2; ++i)
				cout << "10";
			cout << string(a - x / 2, '0');
			cout << string(b - x / 2, '1');
		}
	} else if (a > b) {
		for (int i = 0; i < x / 2; ++i)
			cout << "01";
		cout << string(a - x / 2, '0');
		cout << string(b - x / 2, '1');
	} else {
		for (int i = 0; i < x / 2; ++i)
			cout << "10";
		cout << string(b - x / 2, '1');
		cout << string(a - x / 2, '0');
	}
	cout << endl;
	
	return 0;
}