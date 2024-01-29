//Needs Modification later in terms of the algorithm and of tidiness
class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char, int>mp1, mp2;
    for (int i = 0; i < s.length(); i++) {
        mp1[s[i]]++;
    }for (int i = 0; i < t.length(); i++) {
        mp2[t[i]]++;
    }
    int mx{ 0 };
    if (mp1.size() > mp2.size())
        mx = 1;
    else
        mx = 2;
    if (mx == 1) {
        for (auto it : mp1) {
            auto ptr = mp2.find(it.first);
            if (ptr != mp2.end()) {
                if (mp2[ptr->second] != mp1[it.second] || mp2[ptr->first] != mp1[it.first]) {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    else
    {
        for (auto it : mp2) {
            auto ptr = mp1.find(it.first);
            if (ptr != mp1.end()) {
                if (mp1[ptr->second] != mp2[it.second] || mp1[ptr->first] != mp2[it.first]) {
                    return false;
                }
            }
            else {
                return false;
            }
        }
    }
    return true;
    }
};
