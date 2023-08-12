#include<bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){

// //     }
// //     return 0;
// // }


// #include <iostream>
// #include <vector>

// using namespace std;

// int findRoundsCount(const vector<int>& neighbors) {
//     int n = neighbors.size();
//     vector<bool> visited(n, false);
//     int roundsCount = 0;

//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             int currentPerson = i;
//             do {
//                 visited[currentPerson] = true;
//                 currentPerson = neighbors[currentPerson] - 1;
//             } while (!visited[currentPerson]);
//             roundsCount++;
//         }
//     }

//     return roundsCount;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> neighbors(n);
//         for (int i = 0; i < n; i++) {
//             cin >> neighbors[i];
//         }

//         int minimumRounds = 1;
//         int maximumRounds = findRoundsCount(neighbors);

//         cout << minimumRounds << " " << maximumRounds << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

vector<int> lexicographicallyMaximumPermutation(vector<int>& p) {
    int n = p.size();
    int l = -1;

    // Find the first element in decreasing subsequence
    for (int i = n - 2; i >= 0; i--) {
        if (p[i] > p[i + 1]) {
            l = i;
            break;
        }
    }

    // If no decreasing subsequence found, permutation is already maximum
    if (l == -1) {
        return p;
    }

    int r = -1;

    // Find maximum element greater than l in the subsequence
    for (int i = n - 1; i > l; i--) {
        if (p[i] > p[l]) {
            r = i;
            break;
        }
    }

    // Swap l and r
    swap(p[l], p[r]);

    // Reverse the subsequence
    reverse(p.begin() + l + 1, p.end());

    return p;
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    vector<int> result = lexicographicallyMaximumPermutation(p);

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
