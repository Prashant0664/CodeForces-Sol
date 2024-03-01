// Problem Statement
// Given two distinct words startWord and targetWord, and a list denoting wordList of unique words of equal lengths. Find the length of the shortest transformation sequence from startWord to targetWord.
// Keep the following conditions in mind:

// A word can only consist of lowercase characters.
// Only one letter can be changed in each transformation.
// Each transformed word must exist in the wordList including the targetWord.
// startWord may or may not be part of the wordList

// CODE

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        queue<pair<string,int>>q;
        q.push({startWord,0});
        int n=wordList.size();
        unordered_map<string,int>m;
        for(int i=0;i<n;i++){
            m[wordList[i]]++;
        }
        if(m.find(targetWord)==m.end()){
            return 0;
        }
        vector<char>vs={
            'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'
        };
        int l=targetWord.length();
        while(!q.empty()){
            auto tp=q.front();
            q.pop();
            for(int i=0;i<l;i++){
                string temp=tp.first;
                for(int j=0;j<26;j++){
                    temp[i]=vs[j];
                    if(temp==targetWord){
                        return tp.second+2;
                    }
                    if(m[temp]>0){
                        q.push({temp,tp.second+1});
                        m[temp]--;
                    }
                }
            }
        }
        return 0;
        
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends