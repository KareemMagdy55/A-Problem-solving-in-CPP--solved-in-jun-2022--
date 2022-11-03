//
// Created by Kareem Magdy on 26/06/2022.
//

#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for (int i = x1- 2; i <= x1+ 2; ++i) {
        for (int j = y1- 2; j <= y1 + 2; ++j) {
            if (pow(x1 - i, 2) + pow(y1 - j, 2) == 5 && pow(x2 - i, 2) + pow(y2 - j, 2) == 5) {
                cout << "Yes";
                exit(0);
            }
        }
    }
    cout << "No";
}
// 1000000000 1000000000 999999999 999999999
//cout << i << ' ' << j << '\n';
