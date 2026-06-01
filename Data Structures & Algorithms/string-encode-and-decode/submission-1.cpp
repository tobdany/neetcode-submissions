class Solution {
   public:
    string encode(vector<string>& strs) {
        string result = "";
        for (auto x : strs) {
            result += "#";

            // La longitud máxima es de 200, por lo que usaremos 3 char para el msg
            stringstream ss;
            ss << setw(3) << setfill('0') << x.length();
            result += ss.str();

            result += x;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == '#') {
                string newWord = "";
                int tamano = stoi(s.substr(i+1,3));
                newWord = s.substr(i + 4, tamano);
                result.push_back(newWord);
                i = i + 4 + tamano - 1;
            }
        }
        return result;
    }
};
