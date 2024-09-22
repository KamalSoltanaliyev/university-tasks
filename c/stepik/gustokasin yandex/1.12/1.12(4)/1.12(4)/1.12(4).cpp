#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
    int distance() const {
        return x * x + y * y;
    }
};

bool compare(const Point& a, const Point& b) {
    return a.distance() < b.distance();
}

int main() {
    int n;
    cin >> n;
    vector<Point> points(n);
    for (int i = 0; i < n; ++i) {
        cin >> points[i].x >> points[i].y;
    }
    sort(points.begin(), points.end(), compare);
    for (const auto& point : points) {
        cout << point.x << " " << point.y << endl;
    }
    return 0;
}
