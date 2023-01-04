#include <iostream>
using namespace std;

int main(){

    int n1, n2, n3, k;
    cin >> n1 >> n2 >> n3;
    k = (n1) / 2 + n1 % 2 + (n2) / 2+n2 % 2 + (n3) / 2+ n3 % 2 ;
    cout << k;
    return 0;
}
