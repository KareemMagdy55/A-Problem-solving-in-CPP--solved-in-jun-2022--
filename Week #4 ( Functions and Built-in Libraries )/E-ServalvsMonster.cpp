//
// Created by Kareem Magdy on 27/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    int h, a, counter = 0;
    cin >> h >> a;

    while (h > 0){
        h -= a;
        counter ++ ;
    }
    cout << counter ;
}