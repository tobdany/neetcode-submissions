bool compararFrecuencia(const std::pair<int, int>& a, const std::pair<int, int>& b){
    return a.second > b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> buckets;
        for(int i=-1000;i<=1000;i++)
        buckets.push_back({i,0});

        for(auto x:nums){
            int index=x+1000;
            buckets[index].second++;
        }

        sort(buckets.begin(),buckets.end(),compararFrecuencia);

        vector<int> result;
        int iterador=0;
        while(k>0){
            result.push_back(buckets[iterador].first);
            iterador++;
            k--;
        }
        return result;
    }
};
