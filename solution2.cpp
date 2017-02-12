//
// Created by 王青龙 on 2017/2/12.
//

#include <unordered_map>
#include <set>
#include "solution2.h"

std::vector<std::vector<std::string>> Solution2::groupAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::multiset<std::string>> mp;
    for (auto str : strs) {
        std::string str_cpy = str;
        std::sort(str.begin(), str.end());
        mp[str].insert(str_cpy);
    }
    std::vector<std::vector<std::string>> res;
    for (auto m:mp) {
        std::vector<std::string> anamgram(m.second.begin(), m.second.end());
        res.push_back(anamgram);
    }
    return res;
}
