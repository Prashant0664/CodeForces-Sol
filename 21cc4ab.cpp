#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

int power(int a, int b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int temp = power(a, b / 2);
    long long result = (1LL * temp * temp) % MOD;
    if (b % 2 == 1)
        result = (result * a) % MOD;
    return static_cast<int>(result);
}

int modularInverse(int a) {
    return power(a, MOD - 2);
}

int expectedSum(std::vector<int>& A, std::string& S, int K) {
    int N = A.size();
    std::vector<int> prefixSum(N + 1, 0);
    for (int i = 0; i < N; ++i) {
        prefixSum[i + 1] = prefixSum[i] + A[i];
        prefixSum[i + 1] %= MOD;
    }

    int totalSum = prefixSum[N];
    int expected = 0;

    for (int i = 0; i < K; ++i) {
        if (S[i] == 'L') {
            expected += prefixSum[N];
            expected %= MOD;
            totalSum += expected;
            totalSum %= MOD;
        } else {
            expected += totalSum;
            expected %= MOD;
            totalSum += expected;
            totalSum %= MOD;
        }
    }

    int inverseK = modularInverse(K);
    int result = (1LL * expected * inverseK) % MOD;

    return result;
}

int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int N, K;
        std::cin >> N >> K;

        std::vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            std::cin >> A[i];
        }

        std::string S;
        std::cin >> S;

        int result = expectedSum(A, S, K);
        std::cout << result << std::endl;
    }

    return 0;
}
