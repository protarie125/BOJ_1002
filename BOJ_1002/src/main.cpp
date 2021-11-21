#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        auto dx = x1 - x2;
        auto dy = y1 - y2;
        auto d = dx * dx + dy * dy;

        auto dr1 = (r1 + r2) * (r1 + r2);
        auto dr2 = (r1 - r2) * (r1 - r2);

        if (0 == d && 0 == dr2) {
            cout << "-1\n";
            continue;
        }

        if (dr2 == d || d == dr1) {
            cout << "1\n";
            continue;
        }

        if (dr2 < d && d < dr1) {
            cout << "2\n";
            continue;
        }

        cout << "0\n";
    }

    return 0;
}