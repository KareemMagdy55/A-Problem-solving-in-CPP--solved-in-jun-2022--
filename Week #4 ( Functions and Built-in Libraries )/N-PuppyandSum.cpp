#include <iostream>
using namespace std;
void sol() {
    int d, n, sum = 0;
    cin >> d >> n ;
    for (int i = 0; i <= d * n ; ++i)
        sum += i ;

    cout << sum;
}
int main() {
       int t ;
       cin >> t ;
        while (t--)
            sol();
}