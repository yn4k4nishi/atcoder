#include <iostream>
#include <vector>

int main(){
    int N; std::cin >> N;

    std::vector<int> vx, vy;

    int ans = 0;

    for(int i=0; i<N; i++){
        int x, y;
        std::cin >> x >> y;

        for (int k = 0; k < vx.size()-1; k++){
            for (int l = k+1; l < vx.size(); l++){
                
                int kx = vx[k] - x;
                int ky = vy[k] - y;

                int lx = vx[l] - x;
                int ly = vy[l] - y;

                if(kx * lx + ky*ly == 0){
                    continue;
                }

                ans++;
            }
            
        }

        vx.push_back(x);
        vy.push_back(y);
        
    }

    std::cout << ans << std::endl;

    return 0;
}