// 0001_two_sum.cpp test file

#include <iostream>
#include <vector>
#include <cassert>
#include "../solutions/cpp/0001_two_sum.cpp"

int main(){
    // Test case 1:
    std::vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    std::vector<int> result1 = twoSum(nums1, target1);
    assert(result1[0] == 0 && result1[1] == 1); // Expected: [0, 1]

    // Test case 2:
    std::vector<int> nums2 = {3, 2, 4};
    int target2 = 6;
    std::vector<int> result2 = twoSum(nums2, target2);
    assert(result2[0] == 1 && result2[1] == 2); // Expected: [1, 2]

    // Test case 3:
    std::vector<int> nums3 = {3, 3};
    int target3 = 6;
    std::vector<int> result3 = twoSum(nums3, target3);
    assert(result3[0] == 0 && result3[1] == 1); // Expected [0, 1]

    std::cout<<"All test cases passed! "<<std::endl;

    return 0;
}

