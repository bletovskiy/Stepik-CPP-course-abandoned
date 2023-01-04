#include <iostream>
using namespace std;
int main() {
    int t, h, m, s;
    cin >> t;
    h = t / 3600;
    t -= h * 3600;
    m = t / 60;
    t -= m * 60;
    s = t;

    cout << h % 24 << ":";
    cout << m / 10 << m % 10 << ":";
    cout << s / 10 << s % 10;


    return 0;
}
