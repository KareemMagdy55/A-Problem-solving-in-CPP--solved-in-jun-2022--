//
// Created by Kareem Magdy on 16/07/2022.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, min = 0 ;
    cin >> n ;
    int a[n];

    for(int & i: a) cin >> i ;


    auto itr = find(a, a + n, min);

    while (distance(a, itr) < n ) {
        min ++;
        itr = find(a, a + n, min);
    }

    cout << min ;
}
