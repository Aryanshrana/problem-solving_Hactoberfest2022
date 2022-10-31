class Solution {
public:
    int findcanditate(vector<int>&arr)
    {
        int majority = 0, count =1;
        for(int i =1; i<arr.size(); i++)
        {
            if(arr[majority]==arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count==0)
            {
                majority =i;
                count=1;
            }
        }
        return arr[majority];
    }
    
    int majorityElement(vector<int>& nums) {
       // tech dose 
        // MOORE's Voting Algorithm
        
        int canditate = findcanditate(nums);
        int c =0;
        bool flag = 0;
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i] == canditate)
                c++;
            if(c>nums.size()/2)
            {
                return canditate;
            }
        }
        
            return -1;
    }
};
