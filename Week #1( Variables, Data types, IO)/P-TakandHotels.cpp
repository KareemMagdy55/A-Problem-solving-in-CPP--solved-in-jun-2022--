//
// Created by Kareem Magdy on 15/06/2022.
//
#include <iostream>
int main(){
   int n, k, x, y ;

   std::cin >> n >> k >> x >> y ;

   if(n < k ) std::cout << n * x  ; // TotalPrice = total nights * X-Price per night
   else std::cout << k * x + (n - k) * y ; // TotalPrice = K-Nights * X-Price per night + ( total Nights - K-Nights) * X-Price per night
}