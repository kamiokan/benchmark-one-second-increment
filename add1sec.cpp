#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    long long result = 0;
    system_clock::time_point p = system_clock::now() + seconds(1);
    cout << "start" << endl;

    // 1秒間実行する
    while (p > system_clock::now()) {
        result++;
    }

    cout << result << endl;
    cout << "end" << endl;
}
