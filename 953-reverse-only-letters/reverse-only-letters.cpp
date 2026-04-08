class Solution {
public:
    bool isWord(char ch){
        ch = tolower(ch);
        if(isalpha(ch)) return true;
        return false;
    }
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j){
            if(!isWord(s[i])){
                i++;
            }
            else if(!isWord(s[j])){
                j--;
            }
            else{
                swap(s[i] , s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};