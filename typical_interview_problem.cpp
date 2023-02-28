// // C++ program to check if a string is
// // substring of other.
#include <bits/stdc++.h>
using namespace std;

// Returns true if s1 is substring
// of s2
int isSubstring(string s1, string s2)
{
	int M = s1.length();
	int N = s2.length();

	/* A loop to slide pat[] one
	by one */
	for (int i = 0; i <= N - M; i++)
	{
		int j;

		/* For current index i, check for
		pattern match */
		for (j = 0; j < M; j++)
			if (s2[i + j] != s1[j])
				break;

		if (j == M)
			return i;
	}
	return -1;
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s1;
    cin>>s1;
	// string s1 = "FFB";
	// string s2 = "FBFFBFFBFB";
                            //    FBFFBFFBFBFBFFBFFBFB
	int res = isSubstring(s1, "FBFFBFFBFBFFBFFBFBFFBFFBFB");
	if (res == -1)
		cout << "NO";
	else
		cout << "YEs ";
				// res;
                cout<<endl;
}
	return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// bool is_substring(string s) {
//     string fb_string = "";
//     int i = 1;
//     for (char c : s) {
//         while (true) {
//             if (i % 3 == 0) {
//                 fb_string += 'F';
//             }
//             if (i % 5 == 0) {
//                 fb_string += 'B';
//             }
//             if (fb_string.back() == c) {
//                 break;
//             }
//             i++;
//         }
//     }
//     return fb_string.substr(0, s.length()) == s;
// }

// int main() {
//     cout << is_substring("FFB") << endl; // 1 (true)
//     cout << is_substring("BFFBFFBF") << endl; // 1 (true)
//     cout << is_substring("BBB") << endl; // 0 (false)
//     return 0;
// }