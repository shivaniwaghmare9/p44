// //================================ARRAY=============================

// // Online C++ compiler to run C++ program online
// //========================find maximum element===============
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={1,2,9,10,11,4,19};
//    int max=arr[0];
//    for(int i=1; i<7; ++i){
//        if(arr[i]>max){
//            max=arr[i];
//        }
       
//    }
//    cout<<max;
// }
// // Online C++ compiler to run C++ program online
// //========================find MINIMUM element===============
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={1,2,9,10,11,4,19};
//    int mini=arr[0];
//    for(int i=1; i<7; ++i){
//        if(arr[i]<mini){
//            mini=arr[i];
//        }
       
//    }
//    cout<<mini;
// }

// // Online C++ compiler to run C++ program online
// //=======================================revers array=================== 
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={1,2,3,7,8};
//    int revers=0;
//    for(int i=0; i<5; i++){
//        cout<<arr[i]<<"\t";
//    }
//   int i=0;
//    int j=4;
   
//    while(i!=j){
//        int temp;
//     temp=arr[i];
//    arr[i]=arr[j];
//    arr[j]=temp;
//    i++;
//    j--;
//    }
//    cout<<"\nafter applying"<<endl;
//    for(int i=0; i<5; i++){
//        cout<<arr[i]<<"\t";
//    }
  
// }
// //================================desending array=============================

// #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={6,5,7,4,8,9};
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<size; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[j]>arr[i]){
//             int tmp;
//             tmp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=tmp;
//         }
//     }
// }

// cout<<"\nafter applying"<<endl;
// for(int i=0; i<6; i++){
//     cout<<arr[i]<<"\t";
// }
  
// }

// //==========================asending array==========================

// #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={6,5,7,4,8,9};
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<size; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[j]<arr[i]){
//             int tmp;
//             tmp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=tmp;
//         }
//     }
// }

// cout<<"\nafter applying"<<endl;
// for(int i=0; i<6; i++){
//     cout<<arr[i]<<"\t";
// }
  
// }
// //=================================2nd largest number==============================
// #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={6,5,7,4,8,9};
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<2; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[j]>arr[i]){
//             int tmp;
//             tmp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=tmp;
//         }
//     }
// }


//     cout<<arr[1]<<"\t";
// }

// //=================================2nd smallest number==============================
// #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={6,5,7,4,8,9};
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<2; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[j]<arr[i]){
//             int tmp;
//             tmp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=tmp;
//         }
//     }
// }


//     cout<<arr[1]<<"\t";
// }

//   //=========================================kth indexing====================
// #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={6,5,7,4,8,9};
// int k;
// cout<<"enter the kth";
// cin>>k;
// int size=sizeof(arr)/sizeof(arr[0]);
// for(int i=0; i<k; i++){
//     for(int j=i+1; j<size; j++){
//         if(arr[j]>arr[i]){
//             int tmp;
//             tmp=arr[j];
//             arr[j]=arr[i];
//             arr[i]=tmp;
//         }
//     }
// }


//     cout<<arr[k-1]<<"\t";
// }
// //==========================================missing number============================
  

//   #include <iostream>
// using namespace std;
// int main(){
    
// int arr[]={1,3,4,6,8};
// for(int i=0; i<4; i++){
//     if(arr[i+1]-arr[i]>1)
//     {
//         cout<<(arr[i+1]-1);
//         //cout<<arr[i]+1<<endl;
//         //cout<<++arr[i]<<endl;
//     }
// }
// }


// /******************************************************************************

//                               Online C++ Compiler.
//                Code, Compile, Run and Debug C++ program online.
// Write your code in this editor and press "Run" button to compile and execute it.

// *******************************************************************************/
// //========================multiple missing number===================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int j=0;
//     int arr[]={1,6,16,21,30};
//     for(int i=0; i<4; i++){
//         if(arr[i+1]-arr[i]>1)
//         {
//             for(int j=arr[i]+1; j<arr[i+1]; j++){
//                 cout<<j<<endl;
//             }
            
//         }
//     }

    
// }
// /******************************************************************************

// *******************************************************************************/
// //========================frequency number===================
// #include <iostream>
// using namespace std;
// int main()
// {
   
//     int arr[]={1,4,1,4,2,2};
     
//     for(int i=0; i<6; i++)
//     {
//         int count=1;
//         for(int j=i+1; j<6; j++)
//         {
//             if(arr[i]==arr[j] && arr[i]!=-1)
//             {
//                 arr[j]=-1;
//                 count++;
//             }
//         }
//         if(arr[i]!=-1)
//         {
//         cout<<"the freu of"<<arr[i]<<"is"<<count<<endl;
//         }
//     }
        
       
    
// }
// /******************************************************************************

//                              .
               
// *******************************************************************************/
// //========================frequency number second method===================
// #include <iostream>
// using namespace std;
// int main()
// {
//    int arr[]={1,4,3,4,3,2,1};
//    {
//        for(int i=0; i<7; i++){
//            int count=1;
//            if(arr[i]!=-1){
//                for(int j=i+1; j<7; j++){
//                    if(arr[j]==arr[i])
                  
//                 {
//                    count++;
//                    arr[j]=-1;
//                }
//            }
//            cout<<"the frequency of"<<arr[i]<<"is"<<count<<endl;
//            }
       
       
//    }
//    }
// }


//      // Online C++ compiler to run C++ program online
// ///=================================DUPLICTAE NUMBER=======================
// #include <iostream>
// using namespace std;
// int main() {
//   int arr[]={4,2,1,2,1};
//   for(int i=0; i<5; i++) {
//       bool duplicate=false;
//       if(arr[i]!=-1){
//        for (int j=i+1; j<5; j++){
//           if(arr[i]==arr[j]){
//               arr[j]=-1;
//               duplicate=true;
              
              
//           }
//       }
//       if(duplicate)
//       {
      
//       cout<<arr[i]<<endl;
//       }
//   }
//   }
// }
// // Online C++ compiler to run C++ program online
// ///=================================unique NUMBER=======================
// #include <iostream>
// using namespace std;
// int main() {
//   int arr[]={4,2,1,2,1};
//   for(int i=0; i<5; i++) {
//       bool duplicate=false;
//       if(arr[i]!=-1){
//        for (int j=i+1; j<5; j++){
//           if(arr[i]==arr[j]){
//               arr[j]=-1;
//               duplicate=true;
              
              
//           }
//       }
//       if(!duplicate&&arr[i]!=-1)
//       {
      
//       cout<<arr[i]<<endl;
//       }
//   }
//   }
// }
// // Online C++ compiler to run C++ program online
// //================================PALINDROM=================
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,2,2,1};
//    int i=0;
//    int j=3;
//    while(i<j){
//        if(arr[i]!=arr[j]){
//            cout<<"Not a palindrom";
//            return 0;
//        }
   
//    i++;
//    j--;
// }
// cout<<"palindrom";
// }

    
//   // Online C++ compiler to run C++ program online
// //============================MOVES ZERO'S IN THE END OF ARRAY=================
// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={1,0,2,0,3,0};
//     int j=0;
//     for(int i=0; i<6; i++){
//         if(arr[i]!=0){
//             int tmp; 
//             tmp=arr[i];
//             arr[i]=arr[j];
//             arr[j]=tmp;
//             j++;
//         }
//     }
//     for(int i=0; i<6; i++){
//         cout<<arr[i]<<"\t";
//     }
    
  
  
// }
// // Online C++ compiler to run C++ program online
// ///==========================target indexing print=================================
// #include <iostream>
// using namespace std;
// int main() {
//   int arr[]={1,2,3,4,6};
//   int target=10;
//   for(int i=0; i<5; i++)
//   {
//         for(int j=i+1; j<5; j++)
//         {
//             if(arr[i]+arr[j]==target)
            
//             {
//                 cout<<i<<"\t"<<j;
//                 //cout<<arr[i]<<arr[j];
//                 //cout<<i<<"and"<<j<<":"<<arr[i]<<arr[j];
//                 return 0;
//             }                              //output  indexnumber=3,4
//         }                                   //output  element=4,6
//   }
//   cout<<"no";
//   return 0;
       
// }
// // Online C++ compiler to run C++ program online
// //============================zero counting in array=============================================
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={0,2,0,0,0,0,3};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    int count=0;
  
//    for(int i=0; i<size-1; i++){
//        if(arr[i]==0){
//            count++;
//        }
//    }
//      cout<<"zero in array"<<"\t"<<count;    
//      return 0;
// }
// // Online C++ compiler to run C++ program online
// //============================asending array is sort============================================
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={2,6,8,9,11};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    bool sort=true;
//    for(int i=0; i<size-1; i++){
//        if(arr[i]>arr[i+1]){
//            sort=false;
//            break;
//        }
//    }
//    if(sort==true){
//        cout<<"array is sort"<<endl;
//        return 0;
//    }
//    else{
//        cout<<"array is not a sort";
//        return 0;
//    }
// }
// // Online C++ compiler to run C++ program online
// //============================desending array is sort======================================
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={19,18,16,14,13};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    bool sort=true;
//    for(int i=0; i<size-1; i++){
//        if(arr[i]<arr[i+1]){
//            sort=false;
//            break;
//        }
//    }
//    if(sort==true){
//        cout<<"array is sort"<<endl;
//        return 0;
//    }
//    else{
//        cout<<"array is not a sort";
//        return 0;
//    }
// }
// // Online C++ compiler to run C++ program online
// //============find the majority element in array=====================================
// #include <iostream>
// using namespace std;
// int main() {
//    int arr[]={1,2,2,2,2,3,3,3,4,4};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    int majority=0;
//    int maxcount=0;
 
//    for(int i=0; i<size; i++)
//    {
//         int count=0;
//        for(int j=0; j<size; j++)
//        {
//            if(arr[i]==arr[j])
//            {
//                count++;
//            }
           
//        }
//        if(count>maxcount)
//        {
//            maxcount=count;
//            majority=arr[i];
//        }
//    }
//    cout<<"majority element:"<<majority;
//    return 0;
// }

    
  //================================ARRAY=============================

// Online C++ compiler to run C++ program online
//========================find maximum element===============
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,9,10,11,4,19};
   int max=arr[0];
   for(int i=1; i<7; ++i){
       if(arr[i]>max){
           max=arr[i];
       }
       
   }
   cout<<max;
}
// Online C++ compiler to run C++ program online
//========================find MINIMUM element===============
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,9,10,11,4,19};
   int mini=arr[0];
   for(int i=1; i<7; ++i){
       if(arr[i]<mini){
           mini=arr[i];
       }
       
   }
   cout<<mini;
}

// Online C++ compiler to run C++ program online
//=======================================revers array=================== 
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,3,7,8};
   int revers=0;
   for(int i=0; i<5; i++){
       cout<<arr[i]<<"\t";
   }
  int i=0;
   int j=4;
   
   while(i!=j){
       int temp;
    temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   i++;
   j--;
   }
   cout<<"\nafter applying"<<endl;
   for(int i=0; i<5; i++){
       cout<<arr[i]<<"\t";
   }
  
}
//================================desending array=============================

#include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        if(arr[j]>arr[i]){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}

cout<<"\nafter applying"<<endl;
for(int i=0; i<6; i++){
    cout<<arr[i]<<"\t";
}
  
}

//==========================asending array==========================

#include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        if(arr[j]<arr[i]){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}

cout<<"\nafter applying"<<endl;
for(int i=0; i<6; i++){
    cout<<arr[i]<<"\t";
}
  
}
//=================================2nd largest number==============================
#include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<2; i++){
    for(int j=i+1; j<size; j++){
        if(arr[j]>arr[i]){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}


    cout<<arr[1]<<"\t";
}

//=================================2nd smallest number==============================
#include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<2; i++){
    for(int j=i+1; j<size; j++){
        if(arr[j]<arr[i]){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}


    cout<<arr[1]<<"\t";
}

  //=========================================kth indexing====================
#include <iostream>
using namespace std;
int main(){
    
int arr[]={6,5,7,4,8,9};
int k;
cout<<"enter the kth";
cin>>k;
int size=sizeof(arr)/sizeof(arr[0]);
for(int i=0; i<k; i++){
    for(int j=i+1; j<size; j++){
        if(arr[j]>arr[i]){
            int tmp;
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
}


    cout<<arr[k-1]<<"\t";
}
//==========================================missing number============================
  

  #include <iostream>
using namespace std;
int main(){
    
int arr[]={1,3,4,6,8};
for(int i=0; i<4; i++){
    if(arr[i+1]-arr[i]>1)
    {
        cout<<(arr[i+1]-1);
        //cout<<arr[i]+1<<endl;
        //cout<<++arr[i]<<endl;
    }
}
}


/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//========================multiple missing number===================
#include <iostream>
using namespace std;
int main()
{
    int j=0;
    int arr[]={1,6,16,21,30};
    for(int i=0; i<4; i++){
        if(arr[i+1]-arr[i]>1)
        {
            for(int j=arr[i]+1; j<arr[i+1]; j++){
                cout<<j<<endl;
            }
            
        }
    }

    
}
/******************************************************************************

*******************************************************************************/
//========================frequency number===================
#include <iostream>
using namespace std;
int main()
{
   
    int arr[]={1,4,1,4,2,2};
     
    for(int i=0; i<6; i++)
    {
        int count=1;
        for(int j=i+1; j<6; j++)
        {
            if(arr[i]==arr[j] && arr[i]!=-1)
            {
                arr[j]=-1;
                count++;
            }
        }
        if(arr[i]!=-1)
        {
        cout<<"the freu of"<<arr[i]<<"is"<<count<<endl;
        }
    }
        
       
    
}
/******************************************************************************

                             .
               
*******************************************************************************/
//========================frequency number second method===================
#include <iostream>
using namespace std;
int main()
{
   int arr[]={1,4,3,4,3,2,1};
   {
       for(int i=0; i<7; i++){
           int count=1;
           if(arr[i]!=-1){
               for(int j=i+1; j<7; j++){
                   if(arr[j]==arr[i])
                  
                {
                   count++;
                   arr[j]=-1;
               }
           }
           cout<<"the frequency of"<<arr[i]<<"is"<<count<<endl;
           }
       
       
   }
   }
}


     // Online C++ compiler to run C++ program online
///=================================DUPLICTAE NUMBER=======================
#include <iostream>
using namespace std;
int main() {
  int arr[]={4,2,1,2,1};
  for(int i=0; i<5; i++) {
      bool duplicate=false;
      if(arr[i]!=-1){
       for (int j=i+1; j<5; j++){
          if(arr[i]==arr[j]){
              arr[j]=-1;
              duplicate=true;
              
              
          }
      }
      if(duplicate)
      {
      
      cout<<arr[i]<<endl;
      }
  }
  }
}
// Online C++ compiler to run C++ program online
///=================================unique NUMBER=======================
#include <iostream>
using namespace std;
int main() {
  int arr[]={4,2,1,2,1};
  for(int i=0; i<5; i++) {
      bool duplicate=false;
      if(arr[i]!=-1){
       for (int j=i+1; j<5; j++){
          if(arr[i]==arr[j]){
              arr[j]=-1;
              duplicate=true;
              
              
          }
      }
      if(!duplicate&&arr[i]!=-1)
      {
      
      cout<<arr[i]<<endl;
      }
  }
  }
}
// Online C++ compiler to run C++ program online
//================================PALINDROM=================
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,2,1};
   int i=0;
   int j=3;
   while(i<j){
       if(arr[i]!=arr[j]){
           cout<<"Not a palindrom";
           return 0;
       }
   
   i++;
   j--;
}
cout<<"palindrom";
}

    
  // Online C++ compiler to run C++ program online
//============================MOVES ZERO'S IN THE END OF ARRAY=================
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,0,2,0,3,0};
    int j=0;
    for(int i=0; i<6; i++){
        if(arr[i]!=0){
            int tmp; 
            tmp=arr[i];
            arr[i]=arr[j];
            arr[j]=tmp;
            j++;
        }
    }
    for(int i=0; i<6; i++){
        cout<<arr[i]<<"\t";
    }
    
  
  
}
// Online C++ compiler to run C++ program online
///==========================target indexing print=================================
#include <iostream>
using namespace std;
int main() {
  int arr[]={1,2,3,4,6};
  int target=10;
  for(int i=0; i<5; i++)
  {
        for(int j=i+1; j<5; j++)
        {
            if(arr[i]+arr[j]==target)
            
            {
                cout<<i<<"\t"<<j;
                //cout<<arr[i]<<arr[j];
                //cout<<i<<"and"<<j<<":"<<arr[i]<<arr[j];
                return 0;
            }                              //output  indexnumber=3,4
        }                                   //output  element=4,6
  }
  cout<<"no";
  return 0;
       
}
// Online C++ compiler to run C++ program online
//============================zero counting in array=============================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={0,2,0,0,0,0,3};
   int size=sizeof(arr)/sizeof(arr[0]);
   int count=0;
  
   for(int i=0; i<size-1; i++){
       if(arr[i]==0){
           count++;
       }
   }
     cout<<"zero in array"<<"\t"<<count;    
     return 0;
}
// Online C++ compiler to run C++ program online
//============================asending array is sort============================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={2,6,8,9,11};
   int size=sizeof(arr)/sizeof(arr[0]);
   bool sort=true;
   for(int i=0; i<size-1; i++){
       if(arr[i]>arr[i+1]){
           sort=false;
           break;
       }
   }
   if(sort==true){
       cout<<"array is sort"<<endl;
       return 0;
   }
   else{
       cout<<"array is not a sort";
       return 0;
   }
}
// Online C++ compiler to run C++ program online
//============================desending array is sort======================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={19,18,16,14,13};
   int size=sizeof(arr)/sizeof(arr[0]);
   bool sort=true;
   for(int i=0; i<size-1; i++){
       if(arr[i]<arr[i+1]){
           sort=false;
           break;
       }
   }
   if(sort==true){
       cout<<"array is sort"<<endl;
       return 0;
   }
   else{
       cout<<"array is not a sort";
       return 0;
   }
}
// Online C++ compiler to run C++ program online
//============find the majority element in array=====================================
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,2,2,2,3,3,3,4,4};
   int size=sizeof(arr)/sizeof(arr[0]);
   int majority=0;
   int maxcount=0;
 
   for(int i=0; i<size; i++)
   {
        int count=0;
       for(int j=0; j<size; j++)
       {
           if(arr[i]==arr[j])
           {
               count++;
           }
           
       }
       if(count>maxcount)
       {
           maxcount=count;
           majority=arr[i];
       }
   }
   cout<<"majority element:"<<majority;
   return 0;
}

    
  



   
   


  
  



   
   

   
       
    



  









   
   


  
  



   
   

   
       
    



  





