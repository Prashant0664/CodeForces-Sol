// C++ program to print all prime numbers
// in the range [2:N]
#include <bits/stdc++.h>
using namespace std;
void printprime(int N)
{
    // Create a leastfactor array and initialise
    // it with 0, it will store the least prime
    // factor of the number
    vector<int> leastFactor(N + 1, 0);

    // create a empty vector factors, it will
    // store the prime numbers
    vector<int> factors;
    for (int i = 2; i <= N; ++i)
    {
        if (leastFactor[i] == 0)
        {
            leastFactor[i] = i;
            factors.push_back(i);
        }
        for (int j = 0; i * factors[j] <= N; j++)
        {
            leastFactor[i * factors[j]] = factors[j];
            if (factors[j] == leastFactor[i])
            {
                break;
            }
        }
    }
    // print all the prime numbers
    cout << "Prime Numbers are: \n";
    for (auto i : factors)
    {
        cout << i << " ";
    }
    return;
}

// Driver Code
int main()
{
    int N = 10;
    printprime(N);
    return 0;
}
// int t;
// t = 1;
// // cin>>t;
// while (t--)
// {
//     ll s;
//     cin >> s;
//     double p = log10(s) / log10(3);
//     if (p - (long long int)p == 0)
//     {
//         cout << "Yes\n";
//     }
//     else if (s % 3 == 0 && s % 2 == 0)
//     {
//         cout << "Yes\n";
//     }
//     else if ((s&(s - 1)) == 0)
//     {
//         cout << "Yes\n";
//     }
//     else
//     {
//         cout << "No\n";
//     }
// }