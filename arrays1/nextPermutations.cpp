
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind1,ind2;
        int n=nums.size();
        for(int k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                ind1=k;
                break;
            }
        }
        if(ind1<0){
            //no break point found
            //simply reverse the array
            reverse(nums.begin(),nums.end());
           
        }
        else{
            //find index2
            //again traverse from backwards and find 
            //ind2 that is greater than ind1
            for(int i=n-1;i>ind1;i--){
                if(nums[i]>nums[ind1]){
                    ind2=i;
                    break;
                }

            }
            swap(nums[ind1],nums[ind2]);
            reverse(nums.begin()+
            ind1+1,nums.end());
           
        }
        
    }
};