#include<iostream>
using namespace std;

// mountain peak vale 





int main(){
    int arr[]={10,20,30,80,70,60,50,40,30,20,10};
    int s=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    int e=n-1;
    int mid=s+(e-s)/2;
    int indexans=-1;
    while (e>=s)
    {
        int mid=s+(e-s)/2;
        if (arr[mid] < arr[mid+1])
        {
            s=mid+1; // yaah hoha tho right me move karna 
        }
        else{   
            // nahi hua tho do chezz ho sakthi hai ki mid exact same point pe ho ya phir right me ho dono me se ek hi option hai 
            indexans=mid; //store and compute 
            e=mid-1; // store karne ke baad haam try kar rahe hai ki more exacat value aajae tho acha hai 
        }
    }
    cout<<indexans<<endl; // printing that indix value for it 
    cout<< arr[indexans];
    





}








