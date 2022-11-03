//
// Created by Kareem Magdy on 09/06/2022.
//
#include <iostream>
#include <cmath>

int main(){

    int a, b ;
    double d;

    std::cin >> a >> b ;

    // first we get the distance between (0, 0) and (a, b) by the Pythagorean theorem

    d = sqrt((a*a) + (b*b));

    // the problem description says that (x, y) is one step from (0, 0)
    // so (x, y) = (a/d ,b/d)

    std::cout << a/d << ' '<<b/d;

    return 0;
}