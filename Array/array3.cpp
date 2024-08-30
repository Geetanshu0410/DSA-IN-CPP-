// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>v){
//     int size=v.size();
//     for (int i = 0; i < size; i++)
//     {
//         cout<<v[i]<<endl;
//     }
    
// }

// int main(){       // vector is basicaly the array 
//     vector<int>v; // in vector you can insert as many element you want to insert in the aaray no need to breaf it size earlyer 
//     v.push_back(1); // this is basicaly inserting the values into the array 
//     v.push_back(2);
//     v.push_back(3);
//     print(v); // calliung the function 
// }
#include<iostream>
#include<vector>
using namespace std;

    void print(vector<int>v){   // we use to put array into the fucntion this is what it is 
            int size =v.size();  // this is dyanimic array size insertion  
            for (int  i = 0; i < size ; i++)
            {
                cout<<v[i]<<endl;                // printing all the value in the array  v is short for of the aray 
            }
            
    }
int main(){
    vector<int>v;//  its a array 
    // v.push_back(10); putting element in the array
    // v.push_back(20);
    // v.push_back(30);
    // v.pop_back();


    // now it time to take element from the user 
    int size ;
    cin>> size ;
    for (int  i = 0; i < size; i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);
}