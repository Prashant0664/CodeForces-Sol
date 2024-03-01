#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    int maxSum = 0;
    for (int i = 0; b * i < a; i++) {
        for (int j = 0; c * j < a - b * i; j++) {
            int sum = b * i + c * j;
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    std::cout << "Maximum sum of b and c: " << maxSum << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

int main() {
    int N; // Number of ingredients
    std::cout << "Enter the number of ingredients: ";
    std::cin >> N;

    std::vector<int> ingredients(N);
    std::cout << "Enter the grams of each ingredient: ";
    for (int i = 0; i < N; i++) {
        std::cin >> ingredients[i];
    }

    int A, B; // Grams of each ingredient for dish A and dish B
    std::cout << "Enter the grams of each ingredient for dish A: ";
    std::cin >> A;
    std::cout << "Enter the grams of each ingredient for dish B: ";
    std::cin >> B;

    int maxServings = INT_MAX;
    for (int i = 0; i < N; i++) {
        int servingsA = ingredients[i] / A;
        int servingsB = ingredients[i] / B;
        maxServings = std::min(maxServings, std::min(servingsA, servingsB));
    }

    std::cout << "Maximum total number of servings: " << maxServings << std::endl;

    return 0;
}
