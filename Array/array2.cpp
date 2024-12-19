#include<iostream>
#include<algorithm>
using namespace std;
    
// LEETCODE Q1 ON THE ARRAY
// Given a non-empty array of integers nums , every element appears twice except  
// for one. Find that single one. leetcode Q1)on array with time complexcity as 1 and spacecomplexcity as 1 
 
                                                 //fucntion place    
//(Q1)finding the unique value in the array 
// int funiquevalue(int arr[],int size ) {
//     int ans=0;
// for (int i = 0; i <size; i++)
// {
//     ans=ans^arr[i];                         // we have use xor operator to cut down the same value in the array 
//                                             // first all the value will get stored in ans from the array and later on the with the help of the xor operator it get cut down the same value in it 
// }
// return ans ;
// }

//(Q2) sorting zeros and 1 and placing it on in order of zero then 1
//  int sort(int arr[],int size){
//     int zerocount=0;
//     int onescount=0;
    //counting 
    // Method 1 for it 
    // for (int  i = 0; i < size; i++)
    // {
    //     if (arr[i]==0)
    //     {
    //         zerocount++;
    //     }
    //     else{
    //         onescount++;
    //     }
    // }
    // //insertion 
    // for (int  i = 0; i < zerocount ; i++)
    // {
    //     arr[i]=0;     
    // }
    // for (int  i = zerocount; i <size ; i++)
    // {
    //     arr[i]=1;
    // }
    // M2 for it 
    // by using the fill fucntion we gona do it 
    // fill(arr,arr+zerocount, 0);
    // fill(arr+zerocount,arr+size,1);
    //M3 simplest bass space complexcity jada hai nlogn  //
    // using sort fucntion 
    // sort(arr,arr+size);
    // }

//solving some pairs Questione 
int sort(int arr[],int size){
        for (int  i = 0; i < size; i++)
        {
            for (int  j = 0; j < size; j++)
            {
                cout<<arr[i] << "," << arr[j]<<endl;
            }  
        }
        return 0;
     }


//2 pattern//
// int sort(int arr[],int size){
//         for (int  i = 0; i < size; i++)
//         {
//             for (int  j = i; j < size; j++)      // insisted from the staring it from the front root it get exted after one cycle each at time 
//             {
//                 cout<<arr[i] << "," << arr[j]<<endl;
//             }       
//         }
//         return 0;
//      }

  //3 pattern//
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = 1; j < size; j++)      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[j] << "," << arr[i]<<endl;
    //         }
    //     }
    //     return 0;
    //  }

    // sum of two should be equal to the target value imp qq
    // bool matcher(int arr[],int size, int target){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = 0; j < size; j++)
    //         {
    //             if (arr[i]+arr[j]==target)
    //             {
    //                 return true;
    //             }
    //         }
    //     }
    //         return false ; 
    // }

// Q4 crating a tripplet 
// int tripletcreator(int arr[],int size){
//     int count =0;                    // to count the number we can you count instalize it with zero then make count ++
// for (int  i = 0; i < size; i++)
// {
//     for (int  j = 0; j < size; j++)
//     {
//         for (int  k = 0; k < size; k++)
//         {
//             cout<<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<endl;
//             count++; // imp remeber  it is use to count the number of time the triplet is been created 
//         }
//     }
// }
// cout<<"count:"<<count;// printing the triple t 
// }


// Q6 leet code question (a)
// Given an array of integers nums and an integer target return indices of the two
// numbers such that they add up to target.
// you may assume that each input would have exactly one solution, and you may
// not use the same element
// you can anser in same order

// int sumoftwo(int arr[],int size,int target){
//         for (int i = 0; i < size; i++)
//         {
//             for (int j = i+1; j < size; j++)  //this i+1 give more relivant pairs no duplicacy will be there 
//             {
//                 if (arr[i]+arr[j]==target)
//                 {
//                     cout<<"the index is"<<" "<<i<<" and other one is"<<" "<<j<<endl;
//                 }
                
//             }
            
//         }
//         return 0;
        
// }

// Q7 leet code question (b) three value taker 
// Given an integer array nums, return all the triplets [nums[i],nums[j],nums[k]
// such that i!=j ,i!=k ,i!=j ,
// Notice that the solution s
// not contain duplicate triplets.

// int threesum(int arr[],int size,int target){
//     for (int  i = 0; i < size; i++)
//     {
//         for (int j = i+1; j < size; j++)
//         {
//           for (int  k = j+1; k < size; k++)
//           {
//             if (arr[i]+arr[j]+arr[k]==target)
//             {
//                 cout<<" target is found " <<arr[i]<<" , "<<arr[j]<<" , "<<arr[k]<<" , "<<endl; 
//             }
            
//           }
          
//         }
        
//     }
    
    
// }

    
int main(){
//(Q1)finding the unique value in the array
// int arr[]={1,2,3,4,4,3,2,1,5};
// int size=9;
// int ans = funiquevalue(arr,size);
// cout<<"ans is"<<ans<<endl;
// }


// (Q2) sorting zeros and 1 and placing it on in order of zero then 1
// int arr[]={0,1,1,0,0,1,0,1};
// int size=8;
// int ans=sort(arr,size);
// for (int i = 0; i < size; i++)
//     {
//     cout<<arr[i]<<" ";
//     }

//Q3 pairs
int arr[]={10,20,30,40};
int size=4;
sort(arr,size);
return 0;

//Q4 it is match finder {Q1} leet code ans 
// int arr[]={10,5,20,15,30};
// int size =5;
// int target=35;
// bool ans=matcher(arr,size,target);
// if (ans==true)
// {
//    cout<<"ansis found"<<endl;
// }
// else
// {
//     cout<<"not found";
// }

// //Q5 it is creating a triplet 
// int arr[]={10,20,30,40,50,60};
// int size=6;
// tripletcreator(arr,size);

// Q6 leet code question 
// Given an array of integers nums and an integer target return indices of the two
// numbers such that they add up to target.
// you may assume that each input would have exactly one solution, and you may
// not use the same element
// you can anser in same order

// int arr[]={2,7,11,5,4};
// int size=5;
// int target=9;
// sumoftwo(arr,size,target);
// }

// Q7 leet code question 
// Given an integer array nums, return all the triplets [nums[i],nums[j],nums[k]
// such that i!=j ,i!=k ,i!=j ,
// Notice that the solution s
// not contain duplicate triplets.
// int arr[]={-1,0,1,2,-1,-4};
// int size=6;
// int target=0;

// threesum(arr,size,target);













}
// p4
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = 0; j < i; j++)      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[i] << "," << arr[j]<<endl;
    //         }
            
    //     }
    //     return 0;
    //  }
    // p5
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = 0; j<=i; j++)      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[i] << "," << arr[j]<<endl;
    //         }
            
    //     }
    //     return 0;
    //  }
    // p6
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = 0; j < i; j++)      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[i] << "," << arr[j]<<endl;
    //         }
            
    //     }
    //     return 0;
    //  }
    // p7
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = n-1; j < i; j--)      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[i] << "," << arr[j]<<endl;
    //         }
            
    //     }
    //     return 0;
    //  }
    // p8
    //  int sort(int arr[],int size){
    //     for (int  i = 0; i < size; i++)
    //     {
    //         for (int  j = i+1; j < n; j++    )      // insisted from the staring it from the front root it get exted after one cycle each at time 
    //         {
    //             cout<<arr[i] << "," << arr[j]<<endl;
    //         }
            
    //     }
    //     return 0;
    //  }
