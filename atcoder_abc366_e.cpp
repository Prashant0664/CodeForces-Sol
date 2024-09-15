#include <iostream>
#include <vector>
#include <algorithm>

struct Point {
    int x, y;
    Point(int x_, int y_) : x(x_), y(y_) {}
};

// Calculate the Manhattan distance sum for a given (x, y) coordinate
long long manhattanDistanceSum(int x, int y, const std::vector<Point>& points) {
    long long totalDistance = 0;
    for (const auto& point : points) {
        totalDistance += std::abs(x - point.x) + std::abs(y - point.y);
    }
    return totalDistance;
}

int countValidPairs(const std::vector<Point>& points, int D) {
    int N = points.size();
    std::vector<int> xCoords(N), yCoords(N);

    for (int i = 0; i < N; ++i) {
        xCoords[i] = points[i].x;
        yCoords[i] = points[i].y;
    }

    // Sort the coordinates to find median
    std::sort(xCoords.begin(), xCoords.end());
    std::sort(yCoords.begin(), yCoords.end());

    int medianX = xCoords[N / 2];
    int medianY = yCoords[N / 2];

    // Check points within the range
    int validCount = 0;
    for (int x = medianX - D; x <= medianX + D; ++x) {
        for (int y = medianY - D; y <= medianY + D; ++y) {
            if (manhattanDistanceSum(x, y, points) <= D) {
                ++validCount;
            }
        }
    }

    return validCount;
}

int main() {
    int N, D;
    std::cin >> N >> D;

    std::vector<Point> points;
    for (int i = 0; i < N; ++i) {
        int x, y;
        std::cin >> x >> y;
        points.emplace_back(x, y);
    }

    int result = countValidPairs(points, D);
    std::cout << result << std::endl;

    return 0;
}
