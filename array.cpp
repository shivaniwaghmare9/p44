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
//========================find maximm element===============
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