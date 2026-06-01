class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<tuple<int, int, int>> resultadoSet;
        for (int t=0;t<nums.size();t++) {
            for (int i = 0; i < nums.size(); i++) {
                for (int j = nums.size() - 1; j > i; j--) {
                    if ( (nums[i] + nums[j] == -nums[t]) && ( i != j && i != t && j!=t) ) {
                        vector<int> temporal;
                        temporal.push_back(nums[i]);
                        temporal.push_back(nums[j]);
                        temporal.push_back(nums[t]);
                        sort(temporal.begin(),temporal.end());
                        resultadoSet.insert({temporal[0], temporal[1], temporal[2]});
                        break;
                    }
                }
            }
        }

        vector<vector<int>> resultados;
        for (auto x : resultadoSet) {
            vector<int> temporalTriplet;
            temporalTriplet.push_back(get<0>(x));
            temporalTriplet.push_back(get<1>(x));
            temporalTriplet.push_back(get<2>(x));
            resultados.push_back(temporalTriplet);
        }
        return resultados;
    }
};
