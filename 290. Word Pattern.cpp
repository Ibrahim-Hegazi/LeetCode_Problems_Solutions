//REVISE LATER
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> v;
        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                v.push_back(s.substr(start, i - start));
                start = i + 1;
            }
        }
        v.push_back(s.substr(start, s.length() - start));

        if (v.size() != pattern.size()) return false;

        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        for (int i = 0; i < v.size(); i++) {
            char c = pattern[i];
            string w = v[i];

            if (charToWord.count(c) && charToWord[c] != w) return false;
            if (wordToChar.count(w) && wordToChar[w] != c) return false;

            charToWord[c] = w;
            wordToChar[w] = c;
        }

        return true;
    }
};
