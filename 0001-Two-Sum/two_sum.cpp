class Solution { //class or container
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0;i<nums.size();i++) //Outer loop ; i<num.size() - jab tk array end nhi hota
        {
            for (int j= i +1;j<nums.size();j++) //inner loop
            {
                if (nums[i]+nums[j]==target ){ //condition two index sum = 9
                return {i,j}; //indices return
                }
                
            }
 
        }
        return {};
    }
};
