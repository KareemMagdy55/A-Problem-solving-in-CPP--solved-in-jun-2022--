//
// Created by Kareem Magdy on 30/06/2022.
//

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    int a[n * 4 - 1];
    int counter[n + 1];

    for (int& i:counter) i = 0 ;

    for (int& i : a) {
        cin >> i;
        counter[i] ++ ;
    }
    for (int i = 0 ; i < n + 1 ; i ++) {
        if (counter[i] == 3)
            cout << i ;
    }

}
// sum of 3 2 1 1 2 4 4 4 4 3 1 3 2 1 3 = 38
// 38 - 4 = 34 , 34 - 8 = 26 , 26 - 12 = 14 , 14 - 16 = -2



// 4 cards have integer 1 on it
// 4 cards have integer 2 on it
// and so on .............
// total is 4N cards
// tak remove one of them >> 4n - 1
// random card has an integer A[random card]
