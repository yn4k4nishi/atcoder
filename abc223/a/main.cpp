#include <iostream>

int main(){
    int x;
    std::cin >> x;

    if( x == 0){
        std::cout << "No" << std::endl;
    } else if(x%100 == 0){
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }


    return 0;
}