//
// Created by Kareem Magdy on 21/06/2022.
//
#include<iostream>
using namespace std;
int main() {
    short h, w ;
    cin >> h >> w;
    char image1[h][w];
    char image2[h+2][w+2];
    // when you have a pattern fill it first then edit

    for (int i = 0; i < h + 2; ++i)
        for (int j = 0; j < w + 2; ++j)
            image2[i][j]= '#';


    for (int i = 0; i < h; ++i)
        for (int j = 0; j < w; ++j) {
            cin >> image1[i][j];
            image2[i+1][j+1] = image1[i][j];
        }


    for (int i = 0; i < h+2; ++i) {
        for (int j = 0; j < w + 2; ++j)
            cout << image2[i][j];
        cout << '\n';
    }

}
// 2 * 2
// a  b   a11  a12
// a  b   a21  a22


// 4 * 4
// ####
// #ab#  a22 a23
// #ab#  a32 a33
// ####
