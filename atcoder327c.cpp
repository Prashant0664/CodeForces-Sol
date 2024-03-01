#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isValidSudoku(int board[][9]) {
    int N=9;
    unordered_set<int> rows[N], cols[N], subgrids[N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int num = board[i][j];
            if (num == 0) continue; // Skip empty cells
            int subgrid_index = (i / 3) * 3 + j / 3; // Get sub-grid index
            if (rows[i].count(num) || cols[j].count(num) || subgrids[subgrid_index].count(num))
                return false;
            rows[i].insert(num);
            cols[j].insert(num);
            subgrids[subgrid_index].insert(num);
        }
    }
    return true;
}
void ans(){
    int arr[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
        }
    }
    if(isValidSudoku(arr)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return;
}
int main(){
    int _=1;
    // cin>>_;
    while(_--){
        ans();
    }
    return 0;
}
