//
// Created by Kareem Magdy on 01/07/2022.
//
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n ;
    double max, tempMax;
    std::cin >> n ;

    int x[n], y[n];

    for (int i = 0; i < n  ; ++i)
        cin >> x[i] >> y[i];


    max = sqrt(pow(x[0] - x[1] , 2) + pow(y[0] - y[1], 2) );

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j)
                tempMax = sqrt(pow(x[i] - x[j] , 2) + pow(y[i] - y[j], 2) );

            if(tempMax > max) {
                max = tempMax;
            }
        }
    }
    cout.precision(10);
    cout << fixed <<  max ;
}
