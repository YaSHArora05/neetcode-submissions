class Solution {
public:
    string encode(vector<string>& strs) {
    string res;
    for (string &s : strs)
        res += s + "||";
    return res;
}

vector<string> decode(string s) {
    vector<string> ans;
    string temp;

    for (char c : s) {
        if (c == '||') {
            ans.push_back(temp);
            temp.clear();
        } else {
            temp += c;
        }
    }

    return ans;
}

    
};
