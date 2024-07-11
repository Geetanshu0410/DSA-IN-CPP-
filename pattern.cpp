#include<iostream>
using namespace std;

int main(){
    //basic fundamental pattern
// for (int i = 1; i <= 3; i++)
// {
//     cout<<i<<"->";
//     for (int j = 1; j <= 2; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
    
// }
//SQUARE PATTERN VALA HAI YE 
// for (int i = 1; i <=4; i++)
// {
//      cout<<"*";
//     for (int i = 1; i < 4; i++)
//     {
//         cout<<"*";  
//     }
//     cout<<endl;

// }
//RECTANGLE PATEERREN VALA 
// for (int i = 0; i < 3; i++)//outerloop rows ko bata hai i rows ko dentote kar raha hai//imp
// {
//     for (int j = 0; j < 5; j++)//inner vala colum ko bata tha hai j colums ko denote kar raha hia //imp
//     {
//         cout<<"*";
//     }
//     cout<<endl;
    
// }

// hollow rectangle
// for (int  rows = 0; rows <=4; rows++)
// {
//     for (int colum = 0; colum <=5; colum++)
//     {
//         if (rows==0 || rows==4)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             if (colum==0||colum==5)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
        
        
//     }
//     cout<<endl;
// }
//hollow square
// for (int  rows = 0; rows <=4; rows++)
// {
//     for (int colum = 0; colum <=4; colum++)
//     {
//         if (rows==0 || rows==4)
//         {
//             cout<<"*";
//         }
//         else
//         {
//             if (colum==0||colum==4)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
        
        
//     }
//     cout<<endl;
// }


//trick for the hollow rectangle or square
// for (int i = 1; i <=4; i++)
// {
//   for (int j = 1; j <=4; j++)
//   {
//     if (i==1||i==4||j==1||j==4)
//     {
//         cout<<"*";
//     }
//     else{
//         cout<<" ";
//     }
//   } 
//   cout<<endl;
// }
// }

//half pyramid
// for (int i = 0; i <=4; i++)
// {
//     cout<<"* ";
//     for (int j = 0; j < =4; j++)
//     {
        
//     }
    
// }
//input rectangle
// int h;
// int w ;
// cout<<"enter the height and width of the shape ";
// cout<<endl;
// cin>>h;
// cout<<endl;
// cin>>w;
// for (int i= 0; i<w;i++)
// {
//     for (int j =0; j <h ; j++)
//     {
//         if (i==0||i==w-1 || j==0 || j ==h-1)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
        
//     }
//     cout<<endl;
// }




// left handed  half pyramid 
// for (int i = 0; i < 5; i++)//5 is no of rows you want 
// {
//     for (int j = 0; j < i+1 ; j++)//i+1 is the {where i rows no. }
//     {
//        cout<<"*";
//     }
//     cout<<endl;
// }


// inverted half pyramid
// for (int rows = 0; rows < 5; rows++)//this is no of rows (n)=>5
// {
//     for (int j = 0; j < 5-rows; j++)//(n-rows)=>5-i//rows is 0->1->2->3->4
//     {
//         cout<<"*";
//     }
//     cout<<endl;
    
// }

// for the inverted pyramid input
// int rows;
// cout<<"enter the number of rows ";
// cin>>rows;
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j< rows-i; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }




// for the right pyrimad 
// int rows;
// cout<<"enter the number of rows ";
// cin>>rows;
// for (int i = 0; i < rows; i++)
// {
//     for (int j = 0; j< i+1; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for the hollow right pyramid  
// int n;
// cout<<"enter the value of the n";
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < row+1 ; col++)
//     {
//         if (row==0||row==1||row==n-1||col==0||row==col)
//         {
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
       
//     }
//      cout<<endl;
    
// }

// for the numerical pattern right pyramid 
// int n;
// cout<<"enter the number of rows u want the pattern";
// cin>>n;
// for (int i = 0; i < n; i++)// ye number of rows ki block bana raha hai
// {
//     for (int j = 0; j < i+1; j++)//ye colum ka block bana raha hai 
//     {
//         cout<<j+1;// ye pattern ke andar ki value deide kar raha hai or block ke andar ki value bata raha hai 
//     }
//     cout<<endl;
// }

//for the inverted hollow pyramid 
// int n;
// cout<<"enter the value of the n";
// cin>>n;
// for (int row = 0; row < n; row++)
// {
//     for (int col = 0; col < n-row ; col++)
//     {
//         if (row==0||row==n-1||col==0||row==col)
//         {
//             cout<<"* ";
//         }
//         else{
//             cout<<" ";
//         }
       
//     }
//      cout<<endl;
    
// }

//holoow inverted pyramid  and numricall
// int n;
// cout<<"enter the number of rows u want the pattern";
// cin>>n;
// for (int i = 0; i < n; i++)// ye number of rows ki block bana raha hai
// {
//     for (int j = 0; j < n-i; j++)//ye colum ka block bana raha hai 
//     {
//         cout<<j+1;// ye pattern ke andar ki value deide kar raha hai or block ke andar ki value bata raha hai 
//     }
//     cout<<endl;
// }

//fullpyramid 
// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int r = 0; r< n; r++)
// {
//     for (int c = 0; c < n-r-1; c++)
//     {
//         //space
//         cout<<" ";
//     }
//     for (int star = 0; star < r+1; star ++)
//     {
//         //star
//         cout<<"* ";
//     }
//         // these for loop will run together to give the result    
//     cout<<endl;
// }

// for the inverted pyramid
// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for (int r = 0; r < n; r++)
// {
//     for (int s = 0; s < r; s++)//just observ and see the inp and the target you want 
//     {
//         cout<<" ";              // hamm chahate he ki ye loop na chale in first trial soo we do it in this way 
//         //space
//     }
//     for (int star = 0; star < n-r; star++)//just observ and see the inp and the target you want 
//     {
//         cout<<"* ";                     //star with the space bcz make a space in between the next star 
//         //star 
//     }
//     cout<<endl;
    
// }

//for the diamonde 

// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int r = 0; r< n; r++)
// {
//     for (int c = 0; c < n-r-1; c++)
//     {
//         //space
//         cout<<" ";
//     }
//     for (int star = 0; star < r+1; star ++)
//     {
//         //star
//         cout<<"* ";
//     }
//         // these for loop will run together to give the result    
//     cout<<endl;
// }
// for (int r = 0; r < n; r++)
// {
//     for (int s = 0; s < r; s++)//just observ and see the inp and the target you want 
//     {
//         cout<<" ";
//         //space
//     }
//     for (int star = 0; star < n-r; star++)//just observ and see the inp and the target you want 
//     {
//         cout<<"* ";
//         //star 
//     }
//     cout<<endl;
    
// }
// holow uppward pyramid
// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int r = 0; r< n; r++)
// {
//     for (int c = 0; c < n-r-1; c++)
//     {
//         //space
//         cout<<" ";
//     }
//     for (int star = 0; star < r+1; star ++)
//     {
//         //star
//         if (r==0||r==n-1||star==0||star==r)//logic hai row==0;r==n-1 give zero at the last row
//                                                         //star==0 this is basical the star at staring of the row 
//                                                         //each row has star==0 
//                                                         // star ==r this will take care of the diagonal line 
//         {
//              cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
        
       
//     }
//         // these for loop will run together to give the result    
//     cout<<endl;
// }



// .inverted ḥollow pyramid 

// int n;
// cout<<"enter the value of n"<<endl;
// cin>>n;
// for (int r = 0; r < n; r++)
// {
//     for (int s = 0; s < r; s++)//just observ and see the inp and the target you want 
//     {
//         cout<<" ";              // hamm chahate he ki ye loop na chale in first trial soo we do it in this way 
//         //space
//     }
//     for (int star = 0; star < n-r; star++)//just observ and see the inp and the target you want 
//     {
//         if (r==0||star==0||star==n-r-1)//r==o for the starting star==o is for each star star==r-n-1 if for the diagonal 
//         {
//              cout<<"* ";   
//         }
//         else{
//             cout<<"  ";
//         }
        
//                          //star with the space bcz make a space in between the next star 
//         //star 
//     }
//     cout<<endl;
    
// }

// diamonde 
// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int r = 0; r< n; r++)
// {
//     for (int c = 0; c < n-r-1; c++)
//     {
//         //space
//         cout<<" ";
//     }
//     for (int star = 0; star < r+1; star ++)
//     {
//         //star
//         if (r==0||star==0||star==r)//logic hai row==0;r==n-1 give zero at the last row
//                                                         //star==0 this is basical the star at staring of the row 
//                                                         //each row has star==0 
//                                                         // star ==r this will take care of the diagonal line 
//                                                         //r==n-1 hata denge 
//         {
//              cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
        
       
//     }
//         // these for loop will run together to give the result    
//     cout<<endl;
// }
// for (int r = 0; r < n; r++)
// {
//     for (int s = 0; s < r; s++)//just observ and see the inp and the target you want 
//     {
//         cout<<" ";              // hamm chahate he ki ye loop na chale in first trial soo we do it in this way 
//         //space
//     }
//     for (int star = 0; star < n-r; star++)//just observ and see the inp and the target you want 
//     {
//         if (star==0||star==n-r-1)//r==o for the starting star==o is for each star star==r-n-1 if for the diagonal 
//         {                           //r==0 hata denge 
//              cout<<"* ";   
//         }
//         else{
//             cout<<"  ";
//         }
        
//                          //star with the space bcz make a space in between the next star 
//         //star 
//     }
//     cout<<endl;
    
// }


// // hollow diamonde 
// int n;
// cout<<"enter the number ";
// cin>>n;
// for (int r = 0; r< n; r++)
// {
//     for (int c = 0; c < n-r-1; c++)
//     {
//         //space
//         cout<<" ";
//     }
//     for (int star = 0; star < r+1; star ++)
//     {
//         //star
//         if (r==0||star==0||star==r)//logic hai row==0;r==n-1 give zero at the last row
//                                                         //star==0 this is basical the star at staring of the row 
//                                                         //each row has star==0 
//                                                         // star ==r this will take care of the diagonal line 
//         {
//              cout<<"* ";
//         }
//         else{
//             cout<<"  ";
//         }
        
       
//     }
//         // these for loop will run together to give the result    
//     cout<<endl;
// }
// for (int r = 0; r < n; r++)
// {
//     for (int s = 0; s < r; s++)//just observ and see the inp and the target you want 
//     {
//         cout<<" ";              // hamm chahate he ki ye loop na chale in first trial soo we do it in this way 
//         //space
//     }
//     for (int star = 0; star < n-r; star++)//just observ and see the inp and the target you want 
//     {
//         if (star==0||star==n-r-1)//r==o for the starting star==o is for each star star==r-n-1 if for the diagonal 
//         {                           //r==0 hata denge 
//              cout<<"* ";   
//         }
//         else{
//             cout<<"  ";
//         }
        
//                          //star with the space bcz make a space in between the next star 
//         //star 
//     }
//     cout<<endl;
    
// }


//numerical and star pattern both//FANCY PATTERN
int n ;
cout<<"enter the number "<<endl;
cin>>n;
for (int r = 0; r < n; r++)//will disign the block 
{
   for (int  c = 0; c < 2*r+1 ; c++)//will design the row space 
   {
    if (c%2==0)    {
        cout<<r+1;
    }
    else{
        cout<<"* ";
    }
    
   }
   cout<<endl;
   

    
}















































return 0;
}








