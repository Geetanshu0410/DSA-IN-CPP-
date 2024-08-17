#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

// void print(vector<int>array){  // creation of the functone 
    
// for (int  i = 0; i < array.size() ; i++)
// {
//       cout<<array[i]<<endl;
// }
// }
// int main(){}
    // vector<int>array(5,1); // creation of the vector eith 1 init only 
    // array.push_back(3);   // pushing the element from the back 
    // // array.pop_back();    // poping the leement out from the back 
    // print(array); // calling hte function just enter the name of the array not more then that 



// STL ALGORITHM 
int main(){

vector <int>arr={10,11,11,11,12,12};

int target=11;
int ans=count(arr.begin(),arr.end(),target);
cout<<ans<<endl;





 









}