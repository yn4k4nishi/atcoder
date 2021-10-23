#include <iostream>
#include <vector>

using Graph = std::vector<std::vector<int>>;

bool is_finish(std::vector<int> p){
    for (int i = 1; i < 9; i++)
    {
        if(p[i] != i){
            return false;
        }
    }
    return true;
}

int DFS(std::vector<int> p, Graph g, int zero_b, int depth=0){
    if(is_finish(p)) return depth;

    for(auto i : g[p[0]])
    {
        if(i == zero_b) continue;

        std::vector<int> t = p;
        zero_b = t[0];

        for (auto a : p)
        {
            if(a == i)
                std::swap(t[a-1], t[0]);
        }
        
        
        int j = DFS(t, g, zero_b, depth+1);

        if(j > 0)
            return j;
    }

    return -1;

}

int main(){
    int M; std::cin >> M;

    Graph g(9);

    for (int i = 0; i < M; i++)
    {
        int a, b; 
        std::cin >> a >> b;

        g[a-1].push_back(b-1);
        g[b-1].push_back(a-1);
    }
    
    int before = -1;
    std::vector<int> p(9);
    p[0] = 45;
    for (int i = 1; i < 9; i++)
    {
        int pi; std::cin >> pi;
        p[i] = pi;

        p[0] -= pi;
    }

    std::cout << DFS(p, g, before) << std::endl;

    return 0;
}