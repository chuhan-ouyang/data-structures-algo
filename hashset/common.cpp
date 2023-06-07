class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int record[26] = {0};
        for (int i = 0; i < words[0].size(); ++i) record[words[0][i] - 'a']++;
        for (int i = 1; i < words.size(); ++i){
            int newRec[26] = {0};
            for (int j = 0; j < words[i].size(); ++j){
                newRec[words[i][j] - 'a']++; 
            } 
            for (int i = 0; i < 26; ++i) {
                record[i] = min(record[i], newRec[i]);
            }
        }
        vector<string> res;
        for (int i = 0; i < 26; ++i){
            for (int j = 0; j < record[i]; ++j){
                res.push_back(string(1, char('a' + i)));
            }
        }
        return res;
    }
};