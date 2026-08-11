class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int unplaced = n;
        vector<bool> used(n , false);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(!used[j] && fruits[i] <= baskets[j]) {
                    unplaced--;
                    used[j] = true;
                    break;
                }   

            }
        }
        return unplaced;
    }
};