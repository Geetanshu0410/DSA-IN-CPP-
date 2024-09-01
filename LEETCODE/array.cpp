
// Q1 leet code TWO SUM EASY  
// #include<iostream> 
// using namespace std;

// int index(int arr[],int target , int size){
//     for (int i = 0; i < size ; i++)
//     {
//        for (int  j = size-1 ; j>=0; j--)
//        {
//          if (arr[i]+arr[j]==target)
//          {
//             cout<<" target value get in and there index are "<<i<<" "<<j<<endl;
//             // cout<<(i,j);
//          }   
//         }
//     }
//     cout<<"could not found"<<endl;
//     return -1; // Returning a pair of -1 to indicate failure

// };
// int main(){
//     int arr[]={2,4,5,1};
//     int target=7;
//     int size=4;
//     index(arr,target,size);
// return 0 ;
// }

// Q26
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
// Custom Judge:
// The judge will test your solution with the following code:
// int[] nums = [...]; // Input array
// int[] expectedNums = [...]; // The expected answer with correct length
// int k = removeDuplicates(nums); // Calls your implementation
// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }
// If all assertions pass, then your solution will be accepted.
 
//  class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if (nums.empty()) return 0;

//     int i = 0;  // Initialize the first pointer

//     for (int j = 1; j < nums.size(); j++) {
//         if (nums[j] != nums[i]) {  // Compare current element with the last unique element
//             i++;                   // Move the pointer for unique elements
//             nums[i] = nums[j];      // Place the new unique element at the next position
//         }
//     }

//     return i + 1;  // The number of unique elements
}
};
// #include<iostream> 
// using namespace std;
//  int unique(int arr[], int size,int array[]){
//     int ans=0 ;
//     for (int i = 0; i < size; i++)
//     {
//         ans=ans^arr[i];  
//         // array[i]=ans+array[i];
//     }
//     return ans ;
// }
//  int main(){
//     int arr[]={0,1,1,2,2,3,3,4};
//     int array[8];
//     int size=8;
//     int ans=unique(arr,size,array);
//     cout<<"the number of unize eleement is "<<ans;
//     cout<<array;
//  }


(Q27)
// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
// Return k.

//  class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         //k is the unique number 
//         int size=nums.size();
//         int k=0;
//             for(int i =0;i<size;i++){
//                 if(nums[i]!=val){
//                     nums[k]=nums[i];
//                     k++;
//                 }  

//             }
//             return k;
//     }
// };


 (Q37)
//  Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
//  class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int size =nums.size();
//         int s=0;
//         int e=size-1;
//         while(e>=s){
//             int mid=(s+e)/2;
//             if(nums[mid]==target){
//                 return mid;
//             }
//             else if (target<nums[mid]){
//                 e=mid-1;
//             }
//             else if (target>nums[mid]){
//                 s=mid+1;
//             }
//         }
// return s ;
// }
// };
