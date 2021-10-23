#include <iostream>
#include <vector>

int main(){
    int h,w;
    std::cin >> h >> w;

    int t  = std::min(h,w);

    std::vector<std::vector<int>> A(h);

    for(int i=0; i<h; i++){
        for(int j=0; j<h; j++){
            int a; std::cin >> a;
            A[i].push_back(a);
        }   
    }

    for(int i1=0; i1<h-1; i1++){
        for(int j1=0; j1<w-1; j1++){
            for(int i2=i1+1; i2<h; i2++){
                for(int j2=j1+1; j2<w; j2++){
                    if( A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2] ){
                        // std::cout << i1 << " ";
                        // std::cout << j1 << " ";
                        // std::cout << i2 << " ";
                        // std::cout << j2 << std::endl;;
                        std::cout << "No" << std::endl;
                        return 0;
                    }
                }   
            }            
        }   
    }

    std::cout << "Yes" << std::endl;

    return 0;
}