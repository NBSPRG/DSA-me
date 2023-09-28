// 905. Sorting  Array By Parity(odd , even) Leetcode

// we will check first element whether it's odd or even;
// if it's even then we will just move ahead by icrementing our 'i' pointer;
// else we will replace first element with the last and then j-- means one odd element has been positioned correctly so, now for next we do j--;
// we will do it till i < j 


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    //    sorting array br parity
    // using two pointer approach
        int i = 0, j = nums.size()-1;
        while(i < j)
        {
            if(nums[i] & 1)
            {
                swap(nums[i], nums[j]);
                j--;
            }

            else i++;
        }
        return nums;
    }
};
