class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        output = []
        
        for i in range(len(nums)):
            one = nums[i]
            two = target - nums[i]
            for j in range(i+1,len(nums)):
                if two ==nums[j]:
                    output = [i,j]
            flag = True
        
        return output
 
