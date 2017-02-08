//
// Created by 王青龙 on 08/02/2017.
//

#include <unordered_map>
#include <set>
#include "solution.h"

std::vector<std::vector<std::string>> Solution::groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::multiset<std::string>> mp;
    for(auto s: strs){
        auto t = s;
        std::sort(t.begin(), t.end());
        mp[t].insert(s);
    }

    std::vector<std::vector<std::string>> anagrams;
    for(auto m:mp){
        std::vector<std::string> anagram(m.second.begin(), m.second.end());
        anagrams.push_back(anagram);
    }

    return anagrams;

}
