//
// Created by Kareem Magdy on 18/06/2022.
//
#include <iostream>
int main(){
    short s, t, x ;
    std::cin >> s >> t >> x;
    if( (t < s && (x < t || x >=s )) || (  x < t  && x >= s))std::cout << "Yes";
    else std::cout << "No";
}
     //            s =  20  , t  = 7 , x = 12
     //            20 < 13      &&   7  > 13
     // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
     // <--------------------t-----s----------------------------------->
     //