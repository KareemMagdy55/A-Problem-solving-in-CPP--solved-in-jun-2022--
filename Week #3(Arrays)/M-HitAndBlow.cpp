//
// Created by Kareem Magdy on 02/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    int n, sum1 = 0, sum2 = 0;
    cin >> n ;

    int a[n], b[n];

    for (int& i : a ) cin >> i ;
    for (int& i : b ) cin >> i ;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            if(a[i] == b[j] && i == j)
                sum1 ++ ;

            else if (a[i] == b[j] && i != j)
                sum2 ++ ;
        }

    cout << sum1 << '\n' << sum2;
}