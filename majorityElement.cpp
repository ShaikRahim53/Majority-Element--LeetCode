#include <vector> // Include vector
#include <iostream> // Include for main function output

class Solution {
public:
    int majorityElement(std::vector<int>& nums) { // Use std::vector<int>
        int count, len = nums.size();
        int threshold = len / 2;

        for (int i = 0; i < len; i++) {
            count = 0;
            for (int j = 0; j < len; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count > threshold)
                return nums[i];
        }
        return -1;
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 2, 3, 3, 3}; // Use std::vector<int>
    int result = s.majorityElement(nums);
    std::cout << "Majority Element: " << result << std::endl; // Print the result
    return 0;
}
