class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, maxFreq=0, max_len=0;
        int letters[26]={0};

        for(int r=0;r<s.size();r++){
            letters[s[r]-'A']++;
            maxFreq = max(maxFreq,letters[s[r]-'A']);

            while( r - l + 1 - maxFreq > k ){
                letters[s[l] - 'A']--;
                l++;
            }
            max_len = max(max_len, r - l + 1);

        }
        return max_len;
        
    }
};
