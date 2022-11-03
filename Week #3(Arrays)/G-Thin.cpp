//
// Created by Kareem Magdy on 01/07/2022.
//

#include<iostream>

int main(){    // solution without array
    short h, w;
    std::cin >> h >> w;
    std::string str ;

    for (int i = 0; i < h; ++i) {
        std::cin >> str ;
        std::cout << str << '\n' << str << '\n';
    }
}







// solution with array
//int main(){
//    short h, w;
//    std::cin >> h >> w;
//    char c[h][w];
//    std::string str ;
//
//    for (int i = 0; i < h; ++i) {
//        for (int j = 0; j < w; ++j) {
//            std::cin >> c[i][j];
//            str += c[i][j];
//        }
//        std::cout << str << '\n' << str <<'\n';
//        str.clear();
//    }
//}
