class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int left = 0;
        int finalLength = 0;

        for (int i = 0; i < s.length() ; i++){
            while( charSet.find(s[i]) != charSet.end() ){
                charSet.erase(s[left]);
                left++;
            }
            charSet.insert(s[i]);
            finalLength = max(finalLength, i - left + 1 );
        }
        return finalLength;

    }
};
