#include<iostream>
using namespace std;
#include<algorithm>
#include<limits>
#include<numeric>
#include<vector>
int main(){
// // Write a C++ program to check if a given number is positive, negative, or zero.
// int a ;
// cout<<"enter the number"<<endl;
// cin>>a;
// if (a>0)
// {
//     cout<<"it is positive ";
// }
// else if (a==0)
// {
//     cout<<"it is zero";
// }
// else if (a<0)
// {
//     cout<<"it is neg";
// }

// Write a C++ program to check if a given number is even or odd using the modulo operator.
// int a ;
// cout<<"enter the number"<<endl;
// cin>>a;
// if (a%2==0)
// {
//     cout<<"it is even";
// }
// else{
//     cout<<"it is odd";
// }

// Write a C++ program to implement the Binary Search algorithm on a sorted array
// Array = [2, 3, 4, 10, 40], Target = 10

// vector<int>arr={2,3,4,10,40};
int arr[5]={2,3,4,10,40};
int target=10;
int s=0;
int n=5;
int e=n-1;
bool found=false;
while (s<=e)
{
    int mid=s+(e-s)/2;
   if (arr[mid]==target)
   {
        cout<<"found";
        break;
   }
   else if (arr[mid]>target)
   {
        e=mid-1;
   }
   else if (arr[mid]<target)
   {
      s=mid+1;
   }

return 0 ;
}
}