class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen;

        for (int num : arr) {
            freq[num]++;
        }

        for (auto& f : freq) {
            if (seen.find(f.second) != seen.end()) {
                return false;
            }
            seen.insert(f.second);
        }

        return true;
    }
};