/**
 * @file atcoder__8999878.cpp
 * @brief This file contains the implementation of a program that sorts a vector of integers in ascending order.
 */
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    while(n--){
        cin >> a[n];
    }
    sort(a.begin(), a.end());
    
}