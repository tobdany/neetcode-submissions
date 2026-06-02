class Solution {
public:
    int trap(vector<int>& height) {
        int left=0, right=height.size()-1;
        int maxLeft=0, maxRight=0;
        int localArrayL[height.size()], localArrayR[height.size()];

        for(int i=0;i<height.size();i++){
            maxLeft = max(maxLeft,height[i]);
            localArrayL[i]=maxLeft;
        }

        for(int i=height.size()-1;i>=0;i--){
            maxRight=max(maxRight,height[i]);
            localArrayR[i]=maxRight;
        }

        int waterLevel=0;
        for(int i=0;i<height.size()-1;i++){
            waterLevel += min(localArrayL[i],localArrayR[i]) - height[i];
        }

        return waterLevel;
    }
};
