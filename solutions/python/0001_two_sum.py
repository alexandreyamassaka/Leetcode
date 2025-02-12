from typing import List

def twoSum(nums: List[int], target: int) -> List[int]:
    numMap = {} 

    for i, num in enumerate(nums):
        coomplement = target - num
        if coomplement in numMap:
            return [numMap[coomplement], i]
        numMap[num] = i

    return []


