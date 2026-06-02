class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int maxAmount=0;

        while(left < right){
            int waterAmount=(right-left)*min(heights[left],heights[right]);
            if(waterAmount > maxAmount ) maxAmount = waterAmount;
             
            if (heights[left] < heights[right] ){
                left++;
            }else if(heights[left] > heights[right]){
                right--;
            }else{
                left++;
                right--;
            }

        }
        return maxAmount;
    }
};
