//
// Created by Kareem Magdy on 25/06/2022.
//

#include<iostream>
int main(){
    int a, b, x ;
    std::cin >> a >> b >> x ;

    std::cout << ( (a < x && b > abs(a-x)) || a == x? "YES" : "NO");
}
// A + B >> cats and dogs
// A is Cats
// b can be cats and dogs
// input >> A B X
//