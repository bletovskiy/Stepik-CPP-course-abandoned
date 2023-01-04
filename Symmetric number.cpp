#include <iostream>
using namespace std;
int main() {
    int n,first,second;
    cin >> n;
    first = n / 1000 - n % 10;
    second = n / 100 % 10 - n / 10 % 10;
    cout << first * first + second * second + 1;
    return 0;
}
