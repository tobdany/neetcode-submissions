class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> keyArray;

        for (auto x : strs) {
            int arrayLetras[26] = {0};
            int numero = 0;
            for (int i = 0; i < x.size(); i++) {
                numero = x[i] - 'a';
                arrayLetras[numero]++;
            }
            //construir la llave
            string llaveMapa="";
            for(int i=0;i<26;i++){
                llaveMapa += (char)(i +'a') + arrayLetras[i] ;
            }
            keyArray[llaveMapa].push_back(x);
        }

        vector<vector<string>> vectorStrings;
        for(auto x:keyArray){
            vectorStrings.push_back(x.second);
        } 
        return vectorStrings;                                                                                                                                                                                                                                                  
    }
};
