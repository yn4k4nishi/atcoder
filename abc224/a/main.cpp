#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    if( s.substr(s.length()-2) == "er" ){
        std::cout << "er" << std::endl;
    }else{
        std::cout << "ist" << std::endl;
    }

    return 0;
}