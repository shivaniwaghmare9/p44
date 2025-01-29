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
    }
}
}

  




