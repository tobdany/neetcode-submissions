class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s1.length() > s2.length()) return false;

        vector<int> keyChar(26, 0);
        vector<int> windowChar(26, 0);
        int windowSize = s1.length();

        for (int i = 0; i < windowSize; i++) {
            int index = s1[i] - 'a';
            keyChar[index]++;
        }

        for (int i = 0; i < windowSize; i++) {
            int charTemp = s2[i] - 'a';
            windowChar[charTemp]++;
        }

        if (keyChar == windowChar) return true;

        for (int i = windowSize; i < s2.length(); i++) {
           
            int charTemp = s2[i] - 'a';
            windowChar[charTemp]++;
            
   
            int charPasado = s2[i - windowSize] - 'a'; 
            windowChar[charPasado]--; 

            if (keyChar == windowChar) return true;
        }
        return false;
    }
};