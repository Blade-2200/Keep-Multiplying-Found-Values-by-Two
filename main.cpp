// 1. Keep Multiplying Found Values by Two

// ## Approach
// **Problem Statement**
// You are given an array of integers nums. You are also given an integer original which is the first number that needs to be searched for in nums.

// You then do the following steps:

// If original is found in nums, multiply it by two (i.e., set original = 2 * original).
// Otherwise, stop the process.
// Repeat this process with the new number as long as you keep finding the number.
// Return the final value of original.

// ### 1. Brute Force (Direct Search)
// - Continuously check whether the current value of original exists in the array.
// - If it does, update original by multiplying it by 2.
// - Stop once original is not present in the array.
// - Time Complexity: O(n * k)
// - n = size of the array
// - k = number of times we double original
// - Space Complexity: O(1) (no extra significant memory used)

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (std::find(nums.begin(), nums.end(), original) != nums.end()) {
            original = original * 2;
        }   
        return original;
    }
};
