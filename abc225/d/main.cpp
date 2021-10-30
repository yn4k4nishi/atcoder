#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main(){

    int N, Q;
    std::cin >> N;
    std::cin >> Q;

    // first : categoly
    // second : index
    // -1 is not belonging
    std::vector<std::pair<int, int>> T(N, std::make_pair(-1, -1));

    for (int q = 0; q < Q; q++)
    {
        int type; std::cin >> type;
        if(type == 1)
        {
            int x, y; std::cin >> x >> y;
            x -= 1; y -= 1; // 0スタート
            T[x].second = y;
            T[y].first = x;
        }
        if(type == 2)
        {
            int x, y; std::cin >> x >> y;
            x -= 1; y -= 1; // 0スタート
            T[x].second = -1;
            T[y].first = -1;
        }
        if(type == 3)
        {
            int x; std::cin >> x;
            x -= 1;
            std::vector<int> ans;
            ans.clear();
            ans.push_back(x);
            
            int i=x;
            while (T[i].second >= 0)
            {
                i = T[i].second;
                ans.push_back(i);
            }

            while (T[x].first >= 0)
            {
                x = T[x].first;
                ans.insert(ans.begin(), x);
            }
            
            std::cout << ans.size() << " ";
            for(int i=0; i<ans.size(); i++){
                std::cout << ans[i] + 1;
                
                if(i != ans.size()-1)
                    std::cout << " ";

            }
            std::cout << std::endl; 

        }
    }
    

    return 0;
}