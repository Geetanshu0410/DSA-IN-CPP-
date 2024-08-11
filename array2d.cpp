#include<iostream>
#include<limits.h>
using namespace std;
//  bool find(int array[][3],int target,int row, int col  ){
//  for (int i = 0; i < row; i++)
//  {
//     for (int j = 0; j <col; j++)
//     {
//         if (array[i][j]==target)
//         {
//             return true ;
//         }  
//     }
//  }
//  return false;
//  };

// int maxvalue(int array[][3],int row,int col ,int target ){//min name to be for min
//     for (int  i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             // target=min(array[i][j],target);            
//             target=max(array[i][j],target);            
//         }
//     }
//     return target ;
// }

// int sum(int array[][3],int row ,int col){  // sum in the 2d array row wiser nad col wise 
//        int sum=0;
//     for (int  i = 0; i < row; i++)
//     {
//         int sum=0; // for colum wise sum we have to addd it additionals 
//         for (int j = 0; j < col ; j++)     
//         {
//             sum=sum+array[j][i];   // when it comes to row wise we go fir the [i][j] and when it comes to colum wise we go by [j][i] 
//         }
//         cout<<"sum is:"<<sum<<endl;
//     }
//     return sum ;
// }

int sum(int array[3][3],int row,int col){
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
                if (i==j)
                {
                    sum=sum+array[j][j]; // j,j or i,i both act as same bcz at the end the diagonal value comes out tho be of the same value 
                }
        }
    }
    cout<<"sum is "<<sum <<endl;
    
}
int main(){
    //declartion of the array 
    // int arr[2][3];
    // initalization of the array
    // int arr[2][3]={
    //                 {10,20,30},
    //                 {1,2,3}
    //               };
    //printing of the array 
    // cout<<arr[1][0]<<endl;
    // cout<<arr[1][2]<<endl;
    //traverse the entire array // means printing of the array 
    //     int i =2;
    //     int j=3;
    // for (int  i = 0; i < 2; i++)
    // {
    //     for (int  j = 0; j < 3; j++)
    //     {
    //         cout<<arr[i][j]<<" " ;
    //     }
    //     cout<<endl;
    // }
    // initalization of the array
//     int arr[3][3]={
//                     {10,20,30},
//                     {110,120,130},
//                     {210,220,230}
//                     };
//     //traverse of the array
//     int i=3;
//     int j=3;
//     for (int  i = 0; i <3 ; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         { 
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int array[2][3]={
//                     {10,20,30},
//                     {40,50,60}             
//                 };
// int target=70;
// int row =2;
// int col=3;
// bool ans = find(array,target,row,col);
// cout<<ans ;


// int array[3][3]={
//                     {1,2,3},    
//                     {4,5,6},    
//                     {7,8,9}  
//                 };
// // int target=INT_MAX;
// int target=INT_MIN;
// int row=3;
// int col=3;
// // int ans =minvalue(array,row,col,target);
// int ans =maxvalue(array,row,col,target);
// cout<<"ans is" <<ans;
// };

// int array[3][3]={ // sum of the 2d array in col and row wise
//                     {10,20,30},
//                     {40,50,60},
//                     {70,80,90}       
//                 }; 
// int row=3;
// int col=3;
// sum(array,row,col);


int array[3][3]={
                    {10,20,30},
                    {40,50,60},
                    {70,80,90}
                    
                };
int row=3;
int col=3;
sum(array,row,col);
}
