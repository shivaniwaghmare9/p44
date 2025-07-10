// //=======================================FUNCTION==============================================
// //*USE OF REASUABILITY OF CODE KE LIYE(multiple(bde) code ko chhote-chhote part me divide karne ke liye )
// //TYPES OF FUNCTION
// //#return==*with-parameter//*without-parameter
// //#Non-return==*with-parameter//*without-parameter


// // Online C++ compiler to run C++ program online
// ///non-return type  --withoutparameter=================
// #include <iostream>
// using namespace std;
// void show(){
//     cout<<"hello";
// }
// int main() {
//    show();
//    show();
//    show();
   
   
 
// }
// // Online C++ compiler to run C++ program online
// ///non-return type  --withparameter=================
// #include <iostream>
// using namespace std;
// void show(string a){
//     cout<<a;
// }
// int main() {
//    show("shivani");
  
   
   
 
// }
// // Online C++ compiler to run C++ program online
//                                       ///return type  --withoutparameter=================
// #include <iostream>
// using namespace std;
// int see(){
//     int a=40;
//     int b=30;
//     int c=a+b;
//     cout<<c;
//     return c;
    
// }
// int main() {
//    see();
  
   
   
 
// }
// // Online C++ compiler to run C++ program online
//                      //non-return type  --withparameter(factorial) =================
// #include <iostream>
// using namespace std;
// void factorial(int num){
//     int ans=1;
//     for(int i=1; i<=num; i++)
//     {
//         ans=ans*i;
//     }
//     cout<<ans;
// }
// int main() {
//    int a;
//    cout<<"enter a number";
//    cin>>a;
//    factorial(a);
//    return 0;
   
  
// } 

// // Online C++ compiler to run C++ program online
// //=============================FUNCTION(FIBONAACHI)================================
// #include <iostream>
// using namespace std;
// int fibo(int number){
//     int ft=0;
//     int st=1;
//     int next;
//     for(int i=1; i<=number; i++){
//         if(i==1){
//             cout<<ft<<endl;
//             continue;
//         }
//         if(i==2){
//             cout<<st<<endl;
//             continue;
//         }
//         next=ft+st;
//         ft=st;
//         st=next;
//         if(i!=number){
//         cout<<next<<endl;
//         }
//     }
//     return next;
    
// }
// int main() {
//    int n;
//    cout<<"enter number\n";                    //OUTPUT=ENTER 5 TO---01123
//    cin>>n;
//    cout<<fibo(n);
   
// }



// // Online C++ compiler to run C++ program online
// //=============================FUNCTION([factorial]I)================================
// #include <iostream>
// using namespace std;
// int sum(int n){
//     int sum=1;
//     for(int i=1; i<=n; i++){
//         sum=sum*i;
//     }
//     return sum;
// }
// int main(){
//    // int n;
//     //cout<<"enter number:";
//   //  cin>>n;                       //output=120
//     cout<<sum(5);//cout<<sum(n);
// }

// // Online C++ compiler to run C++ program online
// //=============================FUNCTION([sum]I)================================
// #include <iostream>
// using namespace std;
// int sum(int n){
//     int sum=1;
//     for(int i=1; i<=n; i++){
//         sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//    // int n;
//     //cout<<"enter number:";
//   //  cin>>n;
//     cout<<sum(5);//cout<<sum(n);
// }


// // Online C++ compiler to run C++ program online
// //==================call by value================================
// #include <iostream>
// using namespace std;
// int plusone(int num){
//  num=num+1;  //formal argument
//  return num;
//  }

// int main() {
//     int a=10;
//     cout<<plusone(a)<<endl;//actual argument
//     cout<<a;                 //output=11,10
// }
// // Online C++ compiler to run C++ program online
// //==================call by refrence=================================
// #include <iostream>
// using namespace std;
// int ref(int &num){
//  num=num+1;  //formal argument
//  return num;
//  }

// int main() {
//     int a=10;
//     cout<<ref(a)<<endl;//actual argument
//     cout<<a;                   //output=11,11

// }
// // Online C++ compiler to run C++ program online
// //==================call by address=================================
// #include <iostream>
// using namespace std;
// int plusone(int *num){
//  *num=*num+1;  //formal argument
//  return *num;
//  }

// int main() {
//     int a=10;
//     cout<<plusone(&a)<<endl;//actual argument
//     cout<<a;                  //output=11,11
// }

// //POINTER==int *a;
// //REFRENCE=int &a;

// ////////////////=================================FUNCTION OVERLOADING==========================================
// //FUNCTION SAME NAME ,BUT DEFFRENT PARAMETER
// // Online C++ compiler to run C++ program online
// //==================FUNCTION OVERLOADING=================================
// #include <iostream>
// using namespace std;
// int sum(int a){
//     return a;
// }
// int sum(int a,int b){
//     return a+b;
// }
// int sum(int a,int b,int c){
//     c+=a+b;
//     return c;
// }
// int main(){                   //output=4,11,12
//     int n;
//     cout<<sum(4)<<"\n";
//     cout<<sum(5,6)<<"\n";
//     cout<<sum(3,4,5);
// }


// // Online C++ compiler to run C++ program online
// //==================DEFAULT ARGUMENT(OR PARAMETER=================================
// #include <iostream>
// using namespace std;
// int sum(int a=0,int b=0){
//     return  a+b;
// }

// int main(){
//    // cout<<sum(7);    //bye default ek value 0 leli
//     cout<<sum(7,6);
//                                    //OUTPUT=13 OR 7
// }
// // Online C++ compiler to run C++ program online/
// //=========================sky values=================================
// //A=65
// //a=97
// #include <iostream>
// using namespace std;
// int main(){
//    // int a=65;
//     //cout<<char(a)<<"\n";
//     for(int i=0; i<=125; i++){
//         cout<<i<<"="<<char(i)<<endl;
//     }
// }

//=======================================FUNCTION==============================================
//*USE OF REASUABILITY OF CODE KE LIYE(multiple(bde) code ko chhote-chhote part me divide karne ke liye )
//TYPES OF FUNCTION
//#return==*with-parameter//*without-parameter
//#Non-return==*with-parameter//*without-parameter


// Online C++ compiler to run C++ program online
///non-return type  --withoutparameter=================
#include <iostream>
using namespace std;
void show(){
    cout<<"hello";
}
int main() {
   show();
   show();
   show();
   
   
 
}
// Online C++ compiler to run C++ program online
///non-return type  --withparameter=================
#include <iostream>
using namespace std;
void show(string a){
    cout<<a;
}
int main() {
   show("shivani");
  
   
   
 
}
// Online C++ compiler to run C++ program online
                                      ///return type  --withoutparameter=================
#include <iostream>
using namespace std;
int see(){
    int a=40;
    int b=30;
    int c=a+b;
    cout<<c;
    return c;
    
}
int main() {
   see();
  
   
   
 
}
// Online C++ compiler to run C++ program online
                     //non-return type  --withparameter(factorial) =================
#include <iostream>
using namespace std;
void factorial(int num){
    int ans=1;
    for(int i=1; i<=num; i++)
    {
        ans=ans*i;
    }
    cout<<ans;
}
int main() {
   int a;
   cout<<"enter a number";
   cin>>a;
   factorial(a);
   return 0;
   
  
} 

// Online C++ compiler to run C++ program online
//=============================FUNCTION(FIBONAACHI)================================
#include <iostream>
using namespace std;
int fibo(int number){
    int ft=0;
    int st=1;
    int next;
    for(int i=1; i<=number; i++){
        if(i==1){
            cout<<ft<<endl;
            continue;
        }
        if(i==2){
            cout<<st<<endl;
            continue;
        }
        next=ft+st;
        ft=st;
        st=next;
        if(i!=number){
        cout<<next<<endl;
        }
    }
    return next;
    
}
int main() {
   int n;
   cout<<"enter number\n";                    //OUTPUT=ENTER 5 TO---01123
   cin>>n;
   cout<<fibo(n);
   
}



// Online C++ compiler to run C++ program online
//=============================FUNCTION([factorial]I)================================
#include <iostream>
using namespace std;
int sum(int n){
    int sum=1;
    for(int i=1; i<=n; i++){
        sum=sum*i;
    }
    return sum;
}
int main(){
   // int n;
    //cout<<"enter number:";
  //  cin>>n;                       //output=120
    cout<<sum(5);//cout<<sum(n);
}

// Online C++ compiler to run C++ program online
//=============================FUNCTION([sum]I)================================
#include <iostream>
using namespace std;
int sum(int n){
    int sum=1;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
   // int n;
    //cout<<"enter number:";
  //  cin>>n;
    cout<<sum(5);//cout<<sum(n);
}


// Online C++ compiler to run C++ program online
//==================call by value================================
#include <iostream>
using namespace std;
int plusone(int num){
 num=num+1;  //formal argument
 return num;
 }

int main() {
    int a=10;
    cout<<plusone(a)<<endl;//actual argument
    cout<<a;                 //output=11,10
}
// Online C++ compiler to run C++ program online
//==================call by refrence=================================
#include <iostream>
using namespace std;
int ref(int &num){
 num=num+1;  //formal argument
 return num;
 }

int main() {
    int a=10;
    cout<<ref(a)<<endl;//actual argument
    cout<<a;                   //output=11,11

}
// Online C++ compiler to run C++ program online
//==================call by address=================================
#include <iostream>
using namespace std;
int plusone(int *num){
 *num=*num+1;  //formal argument
 return *num;
 }

int main() {
    int a=10;
    cout<<plusone(&a)<<endl;//actual argument
    cout<<a;                  //output=11,11
}

//POINTER==int *a;
//REFRENCE=int &a;

////////////////=================================FUNCTION OVERLOADING==========================================
//FUNCTION SAME NAME ,BUT DEFFRENT PARAMETER
// Online C++ compiler to run C++ program online
//==================FUNCTION OVERLOADING=================================
#include <iostream>
using namespace std;
int sum(int a){
    return a;
}
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    c+=a+b;
    return c;
}
int main(){                   //output=4,11,12
    int n;
    cout<<sum(4)<<"\n";
    cout<<sum(5,6)<<"\n";
    cout<<sum(3,4,5);
}


// Online C++ compiler to run C++ program online
//==================DEFAULT ARGUMENT(OR PARAMETER=================================
#include <iostream>
using namespace std;
int sum(int a=0,int b=0){
    return  a+b;
}

int main(){
   // cout<<sum(7);    //bye default ek value 0 leli
    cout<<sum(7,6);
                                   //OUTPUT=13 OR 7
}
// Online C++ compiler to run C++ program online/
//=========================sky values=================================
//A=65
//a=97
#include <iostream>
using namespace std;
int main(){
   // int a=65;
    //cout<<char(a)<<"\n";
    for(int i=0; i<=125; i++){
        cout<<i<<"="<<char(i)<<endl;
    }
}