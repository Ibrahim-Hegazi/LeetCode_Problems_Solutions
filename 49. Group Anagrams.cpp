class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
	for (int i = 0; i < strs.size(); i++)
	{
		string word = strs[i];
		sort(word.begin(), word.end());
		mp[word].push_back(strs[i]);
	}
    vector<vector<string>>ans;
	for (auto vec : mp) {
		ans.push_back(vec.second);
	}
    return ans;
    }
};
