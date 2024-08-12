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
int main(){
int arr[]={10,9,8,7,6,5,4,3,2,1};
int s=0;
int e=9;
int target=2;
while (e>=s)
{
    int mid=(s+e)/2;

    if (target==arr[mid])
    {
        cout<<"value found ";
        return mid;
    }
    else if (target>arr[mid])
    {
        e=mid-1;
        //left  me jana hai 
    }
    else if (target<arr[mid])
    {
        s=mid+1;
        // right me jana hai
    }
 
}
cout<<"not found ";
return 0;
bool ans=binary_search(arr,arr+10,target);
cout<<ans<<endl;
}
