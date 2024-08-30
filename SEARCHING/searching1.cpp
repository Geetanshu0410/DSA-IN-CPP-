#include<iostream>
#include<algorithm>
using namespace std ;

//binary searching 
//searching is done on behalf of increasing or in sorted array and from the first and last index we will cal the mid element then we will apply the terms and re do the procces 
// in increasing array 
// int  main(){
// int array[]={1,2,3,4,5,6,7,8,9,10};
// int s=0;
// int e=9;
// int target=22;
// bool found =false;
// while(e>=s)
// {
//     int mid=(s+e)/2;
//     if (array[mid]==target)
//     { 
//         cout<<"milgaya";
//         return true;
//         //mil gaya 
//     }
//     else if (target>array[mid])
//     {
//         s=mid+1;
//         // right jana hai
//     }
//     else if (target<array[mid])
//     {
//         e=mid-1;
//         // left jana hai 
//     }
// }
// cout<<"nahi mila ";
// return 0;
// }

// for decreasing array 
// int main(){
// int arr[]={10,9,8,7,6,5,4,3,2,1};
// int s=0;
// int e=9;
// int target=2;
// while (e>=s)
// {
//     int mid=(s+e)/2;
//     if (target==arr[mid])
//     {
//         cout<<"value found ";
//         return mid;
//     }
//     else if (target>arr[mid])
//     {
//         e=mid-1;
//         //left  me jana hai 
//     }
//     else if (target<arr[mid])
//     {
//         s=mid+1;
//         // right me jana hai
//     }
// }
// cout<<"not found ";
// return 0;
// bool ans=binary_search(arr,arr+10,target);
// cout<<ans<<endl;
// }

// for the first occurence of the element 
//     void firstoccurence(int arr[],int&ansindex,int target){
//          int s=0;
//          int e=9; 
//         while(s<=e)
//         {
//         int mid=s+(e-s)/2;
//         if (target==arr[mid])
//         {
//             ansindex=mid;// jo ansindex hai us me mid ki value daal do or uske baad usko store kar loo 
//             e=mid-1;// fer jo end hai usko operations laaga ke peeche laao left me for fig out karo the first exxpresseions 
//         }
//         else if (target>arr[mid])
//         {
//             s=mid+1; //right 
//         }
//         else if (target<arr[mid])
//         {
//             e=mid-1; // left
//         }
//     }
//     }
// int main(){
//     int arr[]={10,20,20,20,50,60,70,80,90,100};
//     int ansindex=-1;
//     int s=0;
//     int e=9; 
//     int target=20;
//     firstoccurence(arr,ansindex,target);
//     cout<<ansindex<<endl;
// }

//for the last occurence of the element 
    // void lastoccurence(int arr[],int&ansindex,int target){
    //      int s=0;
    //      int e=9; 
    //     while(s<=e)
    //     {
    //     int mid=s+(e-s)/2;
    //     if (target==arr[mid])
    //     {
    //         ansindex=mid;// jo ansindex hai us me mid ki value daal do or uske baad usko store kar loo 
    //         s=mid+1;// fer jo end hai usko operations laaga ke peeche laao left me for fig out karo the first exxpresseions 
    //     }
    //     else if (target>arr[mid])
    //     {
    //         s=mid+1; //right 
    //     }
    //     else if (target<arr[mid])
    //     {
    //         e=mid-1; // left
    //     }
    // }
    // }
// int main(){
//     int arr[]={10,20,20,20,50,60,70,80,90,100};
//     int ansindex=-1;
//     int s=0;
//     int e=9; 
//     int target=20;
//     lastoccurence(arr,ansindex,target);
//     cout<<ansindex<<endl;
// }

//working for the first and last index both for the same element 
//     void firstoccurence(int arr[],int&ansindex,int target){
//          int s=0;
//          int e=9; 
//         while(s<=e)
//         {
//         int mid=s+(e-s)/2;
//         if (target==arr[mid])
//         {
//             ansindex=mid;// jo ansindex hai us me mid ki value daal do or uske baad usko store kar loo 
//             e=mid-1;// fer jo end hai usko operations laaga ke peeche laao left me for fig out karo the first exxpresseions 
//         }
//         else if (target>arr[mid])
//         {
//             s=mid+1; //right 
//         }
//         else if (target<arr[mid])
//         {
//             e=mid-1; // left
//         }
//     }
//     }
// // for the last occurence of the element 
//     void lastoccurence(int arr[],int&ansindex,int target){
//          int s=0;
//          int e=9; 
//         while(s<=e)
//         {
//         int mid=s+(e-s)/2;
//         if (target==arr[mid])
//         {
//             ansindex=mid;// jo ansindex hai us me mid ki value daal do or uske baad usko store kar loo 
//             s=mid+1;// fer jo end hai usko operations laaga ke peeche laao left me for fig out karo the first exxpresseions 
//         }
//         else if (target>arr[mid])
//         {
//             s=mid+1; //right 
//         }
//         else if (target<arr[mid])
//         {
//             e=mid-1; // left
//         }
//     }
//     }
// int main(){
//     int arr[]={10,20,20,20,50,60,70,80,90,100};
//     int ansindex=-1;
//     int s=0;
//     int e=9; 
//     int target=20;
//     firstoccurence(arr,ansindex,target);
//     cout<<"fansindex"<<ansindex<<endl;
//     lastoccurence(arr,ansindex,target);
//     cout<<"lansindex"<<ansindex<<endl;
// }

//find the total occurence of the the element 

void totaloccurence(int arr[],int target,int&totalocc,int&ansfindex,int&ansindex){
    int s=0;
    int e=8;
     while(s<=e)
        {
        int mid=s+(e-s)/2;
        if (target==arr[mid])
        {
            ansfindex=mid;//for the first index
            e=mid-1;
        }
        else if (target>arr[mid])
        {
            s=mid+1; //right 
        }
        else if (target<arr[mid])
        {
            e=mid-1; // left
        }
        }
    
        s=0;
        e=8;
     while(s<=e)
        {
        int mid=s+(e-s)/2;
        if (target==arr[mid])
        {
            ansindex=mid;// jo ansindex hai us me mid ki value daal do or uske baad usko store kar loo 
            s=mid+1;// fer jo end hai usko operations laaga ke peeche laao left me for fig out karo the first exxpresseions
        }
        else if (target>arr[mid])
        {
            s=mid+1; //right 
        }
        else if (target<arr[mid])
        {
            e=mid-1; // left
        }
}
        totalocc=(ansindex-ansfindex)+1;
}
int main(){
    int arr[]={10,20,30,30,30,30,30,30,40};
    int target=30;
    int totalocc=0;
    int ansindex=-1;
    int ansfindex=-1;
    totaloccurence(arr,target,totalocc,ansfindex,ansindex);
    cout<<"the first index is "<<ansfindex<<endl;
    cout<<"the last index is "<<ansindex<<endl;
    cout<< "totalocc is : "<<totalocc<<endl;

}
