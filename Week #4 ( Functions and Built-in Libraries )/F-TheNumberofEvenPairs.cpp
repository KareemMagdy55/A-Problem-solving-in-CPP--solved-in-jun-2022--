//
// Created by Kareem Magdy on 27/07/2022.
//

#include <iostream>
using namespace std;

int main() {
    int n, m, counter = 0;
    cin >> n >> m;

    while (n --) counter += n ;
    while (m --) counter += m ;

    cout << counter ;
}