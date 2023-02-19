class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // Using Sorting Technique
        int ans;
        sort(nums.begin() , nums.end()); //Time Complexity for sorting is o(nlogn) and Space Complexity is O(n).
        for(int i = 0 ; i < nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                ans = nums[i];
            }
        }

        return ans;
        
    }
};

// ======================================================== Negative Marking Methode ==================================================================

// Visited Solution

// Time Complexity ;- O(n);
// Space Complexity :-O(1);
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = -1;
        
        for(int i = 0 ; i < nums.size(); i++)
        {   
            // index ko positive kr rahe hai
           int index = abs(nums[i]);

            // Already Visited
           if(nums[index] < 0)
           {
               ans = index;
               break;
           }

            // Visited Mark
           nums[index] *= -1;
        }

      return ans;
        
    }
};
