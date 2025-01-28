package DATA_STRUCTRE_ALGORITHM.Arrays.twoPointer;

import java.util.Arrays;

public class ps1679 {
    class Solution {
    public int maxOperations(int[] nums, int k) {
        Arrays.sort(nums) ; 
        int i = 0 , j = nums.length-1, c=0 ; 
        while(i<j){
            if(nums[i] + nums[j] == k){
                c++ ; 
                i++ ; j-- ; 
            }else if(nums[i] + nums[j] < k) {
                i++ ; 
            }else {
                j-- ; 
            }
            
        }
        return c ; 
    }
}
    
}
// The provided code defines a method maxOperations within a Solution class that calculates the maximum number of operations to find pairs in an array nums that sum up to a given value k. The approach involves sorting the array and using two pointers, i starting from the beginning and j from the end. The algorithm iterates while i is less than j, checking if the sum of elements at i and j equals k. If so, it increments the counter c and moves both pointers inward. If the sum is less than k, it moves the left pointer i to the right; if greater, it moves the right pointer j to the left. Finally, it returns the counter c, representing the maximum number of such operations.