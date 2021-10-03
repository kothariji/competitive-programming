#include <limits>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> vec(n);
    for (auto& e : vec)
        std::cin >> e;
    
    std::sort(vec.begin(),vec.end());
    
    std::vector<size_t> smallests;
    int last_diff = std::numeric_limits<int>::max();
    
    for (size_t i = 0, tmp; i < vec.size() - 1; ++i) {
        tmp = std::abs(vec[i] - vec[i+1]);
        if (tmp < last_diff) {
            smallests.assign(1, i);
            last_diff = tmp;
        } else if (tmp == last_diff) {
            smallests.push_back(i);
        }
    }
    
    for (auto& d : smallests)
        std::cout << vec[d] << " " << vec[d+1] << " ";
    std::cout << '\n';
    
    return 0;
}
