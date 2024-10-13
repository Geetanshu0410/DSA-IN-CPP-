#include<iostream>
#include<limits.h>  
using namespace std;

//                               creating the function for the linear search// 
//(1)   
    //  int findingtarget(int arr[],int size  ,int targert){ // creating a fucntion wi  th its requirement 
    //     for (int i = 0; i < size; i++) // tellling it    size to so that loop can be run for that time      
    //     {
    //         if (arr[i]==targert)              // this statement will rectify this 
    //         {
    //             return 1;
    //         }
            
    //     }
    //     return 0;
        



    //  }
//(2) figuring out the max number in the array 

    // int maxvalue(int arr[],int size){       //fucntion creation
    //    int maxvalueANS=INT_MIN;             // int_min is in 2power-31 so it is the smaalest number you havee  
    //    for (int i = 0; i < size; i++)
    //    {
    //         if (arr[i]>maxvalueANS)            // in this the first element of the aaray is getting compared with the int_min value 
    //         {
    //             maxvalueANS=arr[i];             //the value is getting  stored in the maxvalueans from a[i] and later on  
    //         }                                      // maxvalueans is getting compared w=from the rest of the eleemnt from the array
            
    //    }
    //    return maxvalueANS;                          // returing the maxvalue bak to function


    // }

//(3) figuring out the min number in the array 

    // int minvalue(int arr[],int size){
    //     int minvalueans=INT_MAX;
    //     for (int  i = 0; i < size; i++)
    //     {
    //         if (minvalueans>arr[i])
    //         {
    //             minvalueans=arr[i];
    //         }
            
    //     }
    //     return minvalueans;
        

    // }

    //(4) figuring out the number of 1 and number of 0  in the array 
    // int number(int arr[],int size){
    //     int zerocount=0;        //instaizting the mwith the zero
    //     int onecount=0;
                
    //     for (int  i = 0; i < size; i++)
    //     {
    //         if (arr[i]==0)
    //         {
    //             zerocount++;            // increment if so
                 
    //         }
    //         else{
    //            onecount++;      
    //         }

    //     }
    //     cout<<"numberofzeros:"<<zerocount<<endl;
    //     cout<<"numberofones:"<<onecount;            // print them up inside the function 
        
        
    // }


//(5) printing the array in the back and front direction  in the array or two state pointer

int twostatepointer(int arr[] , int size ){
    int i =0;
    int j =size-1;
    
    while (j>=i)
    {
        if (i==j)
        {
            cout<<arr[i]<<" ";
            break;
        }
        else{
            cout<<arr[i]<<" ";
            i++;
            cout<<arr[i]<<" ";
            j--;
        }
        
    }
    

}
//(5) printing the array in the back and front direction  in the array or two state pointer

    // (M1) this is using two state pointer while loop a short cut is created using reversal function

// int twostatepointer(int arr[] , int size ){
//     int i =0;
//     int j =size-1;
    
//     while (j>=i)                   // ess mee haam swap function ka use kar ke bass swap kar raha he hai 
//     {
//        swap(arr[i],arr[j]); //  ye bhi kar sakthe hai arr[i++],arr[j--] phele use hoga fer decriment or icrement hoga 
//        i++;
//        j--;

//     }
//     for (int i = 0; i < size; i++)   // swap hojane ke baad print bhi tho karna padega uska kaam ye kar raha hai 
//    {
//     cout<<arr[i]<<" ";
//    }

// }

















int main(){
//1//creating a array with the fill operator to fill all the value in it through same data value 
// int arr[5];
// fill the key operatore
// fill (arr,arr+5,23); 
// // cout<<arr[0];
// for (int i:arr)
// {
//     cout<<i<<endl;   
// }
//2//array input from the loop and same as output 
// int a[5];
// for (int i = 0; i < 5; i++)
// {
//     cin>>a[i];
// }
// for (int i = 0; i < 5; i++)
// {
//     cout<<a[i]<<" ";
// }


    // linear search 
//(1)//  
    // int arr[]={10,23,45,56,78,87};// creating an array and keeping it value in it 
    // int size=6;                  //teeling its size 
    // int target=87;              //the value to be search for 
    // int ans=findingtarget(arr,size,target); //calling a function 
    // cout<<ans<<endl;


// taking  it as a user input 
// int arr[100];  // it is been set bcz to make a rough idia about the space you have 
// int size;      // taking the precise space 
// int target;     // just letting the search value identify 
// cout<< "enter the size you ";
// cin>>size;
// cout<<"enter the number of element you want in the array ";
// for (int  i = 0; i < size; i++)
// {
//     cin>>arr[i];
//     cout<<endl;
// }

// cout<< "enter the target value  ";
// cin>>target;
//    int ans=findingtarget(arr,size,target);  // calling a function  
//    cout<<ans;

// //2// figuring out the biggest  number in the array


//     int arr[]={10,20,3,4,5,66,33,22}; // decration of the array
//     int size=8;                       // declaration its size
//    int ans=maxvalue(arr,size);          // calling a function
//     cout<<"ans is :"<<ans;

//3// figuring out the smallest  number in the array


//     int arr[]={10,20,3,4,5,66,33,22}; // decration of the array
//     int size=8;                       // declaration its size
//    int ans=minvalue(arr,size);          // calling a function
//     cout<<"ans is :"<<ans;


//4// figuring out the number of zero and number of 1  in the array
    // int arr[]={1,0,0,1,0,1,1,};
    // int size=7;
    // number(arr,size);
   

   //(5) printing the array in the back and front direction  in the array 
   int arr[]={10,20,30,40,50,60};
   int size=6;
   twostatepointer(arr,size);


       
//Method 2 // using reversal pre define function
reverse(arr,arr+7);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" "; 
}

  

   
































return 0;}
