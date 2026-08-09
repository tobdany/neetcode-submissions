class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefixArray(nums.size());
        vector<int> sufixArray(nums.size());

        for(int i = 0; i < nums.size() ; i++){
            if( i == 0){
                prefixArray[0] = 1;
            } else{
                prefixArray[i] = prefixArray[i - 1] * nums[i - 1];
            }
        }

        for(int i = nums.size() - 1 ; i >= 0; i-- ){
            if( i == nums.size() - 1){
                sufixArray[i] = 1;
            } else{
                sufixArray[i] = sufixArray[i + 1] * nums[i + 1];
            }
        }

        for(int i = 0; i < nums.size(); i++){
            //guardar los resultados en prefixArray
            prefixArray[i] = prefixArray[i] * sufixArray[i];
        }

        return prefixArray;

    };
};
