#include <iostream>
#include "solution.h"
int main() {

    std::vector<std::string> arr = {"eat", "tea", "tan", "ate", "nat", "bat"};

    Solution s;

    std::vector<std::vector<std::string>> res;

    res = s.groupAnagrams(arr);

    for(auto i = res.begin(); i!= res.end(); ++i){
        for(auto j = i->begin(); j!=i->end(); ++j){
            std::cout<<*j<<std::endl;
        }
        std::cout<<std::endl;
    }

    return 0;
}