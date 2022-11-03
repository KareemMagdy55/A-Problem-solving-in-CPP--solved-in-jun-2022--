//
// Created by Kareem Magdy on 14/06/2022.
//

#include <iostream>

int main(){
    int age, cost;

    std::cin >> age >> cost ;

    if (age >= 13) std::cout << cost ;
    else if (age <= 5) std::cout << 0 ;
    else std::cout << cost/2 ;


    return 0;
}