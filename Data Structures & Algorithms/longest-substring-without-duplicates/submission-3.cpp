class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1 ) return 1;
        map<char,pair<int,int>> newSubstring;
        int biggestSize=0;

        for(int i=0;i<s.size();i++){
            char c = s[i];
            if(newSubstring[c].first==0){
                newSubstring[c].first++;
                newSubstring[c].second=i;
            }else{
                if( newSubstring.size() > biggestSize ){
                    biggestSize = newSubstring.size();
                }
                
                i = newSubstring[c].second;
                newSubstring.clear();
            }
        }

        if( newSubstring.size() > biggestSize ) biggestSize = newSubstring.size();

        return biggestSize;
    }
};
