//
// Created by Kareem Magdy on 08/07/2022.
//

#include <iostream>

using namespace std;
int main(){
    short n;
    cin >> n ;

    int arr[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};

    for (int& i: arr)
        if (n % i == 0){
            cout << "YES";
            exit(0);
        }

    cout << "NO";
}