#include <iostream>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int dist = 0;

    if (n > 1) {
        // For at least two cities
        dist = min(a, b) + min(min(a, b), c) * (n - 2);
    }

    cout << dist;

    return 0;
}
