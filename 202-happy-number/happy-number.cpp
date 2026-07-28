class Solution {
public:
    int getNext(int n) {
        int sum = 0;
        while(n > 0) {
            int digits = n % 10;
            sum += digits * digits;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> st;
        while(n != 1 && !st.count(n)){
            st.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};