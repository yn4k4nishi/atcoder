#include <iostream>
#include <vector>

int main(){
    int N ,M;
    std::cin >> N >> M;

    long long int B[M];

    for (int j = 0; j < M; j++)
    {
        long long int b; std::cin >> b;
        if(j != 0)
        {
            if(b != B[j-1] + 1)
            {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
        B[j] = b;
    }
    

    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            long long int b; std::cin >> b;

            if(B[j]+7 != b){
                // std::cout << B[j] << " " << b << std::endl;
                std::cout << "No" << std::endl;
                return 0;
            }

            B[j] = b;
        }
        
    }

    std::cout << "Yes" << std::endl;    

    return 0;
}