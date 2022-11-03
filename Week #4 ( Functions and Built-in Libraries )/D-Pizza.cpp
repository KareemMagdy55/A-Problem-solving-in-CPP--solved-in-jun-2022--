//
// Created by Kareem Magdy on 27/07/2022.
//

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];

    for(int& i : a) cin >> i ;



}
// if A=(90, 180, 45, 195)
/*
 * 1st rotation(90 degree) >>> 90, 270
 * 2nd rotation(180 degree) >>> 90, 90, 180
 * 3rd rotation(45 degree) >>> 45, 45, 90, 180
 * 4th rotation (195 degree) >> 45, 45, 90, 120, 60
 */