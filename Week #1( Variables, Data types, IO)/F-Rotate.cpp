//
// Created by Kareem Magdy on 12/06/2022.
//
#include <iostream>
int main(){
    int nums[3];
    int userNum, sum = 0;

    std::cin >> userNum;

    nums[0] =  userNum % 10;
    nums[1] =  userNum / 10 %10;
    nums[2] =  userNum / 100 %10;

    for (int num : nums) {
        for (int j = 100; j >= 1; j /= 10) {
            sum += num * j ;
        }
    }

    std::cout << sum;
    return 0;
}
//
//int main(){
//
//    int num, a, b, c;
//
//    std::cin >> num ;
//
//    a =  num % 10;
//    b =  num / 10 %10;
//    c =  num / 100 %10;
//
//
//    std::cout   << a*100 + b*10 + c +
//                   b*100 + c*10 + a +
//                   c*100 + a*10 + b ;
//    return 0;
//}
//
