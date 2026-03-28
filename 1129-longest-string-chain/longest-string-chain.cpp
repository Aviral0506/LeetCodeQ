class Solution {
public:
    bool checkPredecessor(string m, string n) {
        if (n.length() != m.length() + 1) return false;

        int j = 0;
        for (int i = 0; i < n.length(); i++) {
            if (j < m.length() && m[j] == n[i]) {
                j++;
            }
        }

        return j == m.length();
    }

    int t[1001][1001];

    int solve(vector<string>& words, int i, int p){
        int n = words.size();
        if(i >= n) return 0;

        if(p != -1 && t[i][p] != -1){
            return t[i][p];
        }

        int take = 0;
        if(p == -1 || checkPredecessor(words[p], words[i])){
            take = 1 + solve(words , i + 1, i);
        }

        int skip = solve(words , i + 1, p);

        if(p != -1){
            return t[i][p] = max(skip, take);
        }

        return max(skip, take);
    }

    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](string &a, string &b){
            return a.length() < b.length();
        });

        memset(t, -1 , sizeof(t));
        return solve(words , 0, -1);
    }
};