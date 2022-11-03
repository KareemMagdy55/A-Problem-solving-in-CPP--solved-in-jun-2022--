//
// Created by Kareem Magdy on 18/06/2022.
//
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, sum = 0, nDigits;
    cin >> n ;
    n++;
    while (n-- && n != 0){
        nDigits = log10(n) + 1;
        if ( nDigits % 2 != 0 )
            sum ++ ;
    }
     cout << sum;
}
//
//#include <iostream>
//
//using namespace std;
//int main(){
//    int n, sum = 0;
//    cin >> n ;
//    n ++ ;
//    while (n-- && n != 0){
//        if (n < 10 || (n >= 100 && n < 1000)  || (n >= 10000 && n < 100000) )
//            sum ++ ;
//    }
//    cout << sum;
//}
//
//#include <iostream>
//
//using namespace std;
//int main(){
//    int n, sum = 0;
//    cin >> n ;
//    n ++ ;
//    while (n-- && n != 0){
//        if (to_string(n).length() % 2 != 0 )
//            sum ++ ;
//    }
//    cout << sum;
//}