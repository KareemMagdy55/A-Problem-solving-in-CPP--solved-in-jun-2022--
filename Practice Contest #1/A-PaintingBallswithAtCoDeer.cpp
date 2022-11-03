//
// Created by Kareem Magdy on 03/07/2022.
//
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k;
    int_fast64_t possibleWays;
    cin >> n >> k ;
    possibleWays =  k * powl(k - 1, n - 1) ;
    cout << possibleWays;
}


// n balls in row
// k colors to paint n balls
// any two adjacent balls must be painted in different colors.
