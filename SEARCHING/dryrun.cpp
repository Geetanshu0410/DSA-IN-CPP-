#include<iostream>
using namespace std ;

// int main(){

// // in this we figure out wheather the value is presnt in it 
   
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int s=0;
//     int e=9;
//     int target=90;
//     while (e>=s)
//     {
//         int mid=(s+e)/2;
//         if (target==arr[mid])
//         {
//             cout<<"value got find ";
//             return mid;
//         }
//         else if (target>arr[mid])
//         {
//             s=mid+1;
//         }
//         else if (target<arr[mid])
//         {
//             e=mid-1;
//         }
//     }
//     cout<<"not found ";


// for the decreasing array
// int arr[]={10,9,8,7,6,5,4,3,2,1};
// int s=0;
// int e=9;
// int target=3;
// while (e>=s)
// {
//     int mid=(s+e)/2;
//     if (target==arr[mid])
//     {
//         cout<<"value got found";
//         break;
//     }
//     else if (target>arr[mid])
//     {
//         e=mid-1;
//     }
//     else if (target<arr[mid])
//     {
//         s=mid+1;
//     }
// }
// cout<<"notfound";
// return 0;
// }




// for more then the first occurence in 
// void findindex(int arr[],int target,int&indexans){
//         int s=0;
//         int e=7;
//     while (s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if (target==arr[mid])
//         {
//           indexans=mid;//store the arr value this will store the mid value in it 
//            e=mid-1;//compute as we know first occurence hamesha left me hi hoga 
//         }
//         else if (target>arr[mid])
//         {
//             s=mid+1;
//         }
//         else if (target<arr[mid])
//         {
//             e=mid-1;
//         }
//     }
//     }
// int main(){
// int arr[]={10,20,30,30,40,50,60,70};
// int target=30;
// int indexans=-1;
// findindex(arr,target,indexans);
// cout << indexans << endl;
// }

//for the last occurence 
void findindex(int arr[],int target,int&indexans){
        int s=0;
        int e=7;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if (target==arr[mid])
        {
          indexans=mid;//store the arr value this will store the mid value in it 
           s=mid+1;//compute as we know first occurence hamesha left me hi hoga 
        }
        else if (target>arr[mid])
        {
            s=mid+1;//right
        }
        else if (target<arr[mid])
        {
            e=mid-1;//left
        }
    }
    }
int main(){
int arr[]={10,20,30,30,40,50,60,70};
int target=30;
int indexans=-1;
findindex(arr,target,indexans);
cout << indexans << endl;
}

