// Created by Kareem Magdy on 13/06/2022.

#include <iostream>
#include <cmath>

int main(){

    long double x ; // same as long long int data type
    std::cin >>  x ;

     // divide by a double value to generate a double result that may be used as a parameter for the floor function.
    std::cout.precision(18); // show all numbers that have maximum 18 digits, so that avoid scientific notion problem.
    std::cout << floorl(x/10); //
    return 0;
}