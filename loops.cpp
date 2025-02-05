// Online C++ compiler to run C++ program online
//==============================LCM(for loop)=========================
#include <iostream>
using namespace std;
int main() {
    int num1=12;
    int num2=14;
    int lcm;
    for(int i=num2;; i=i+num2){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }                     //output=84
    }
    cout<<lcm;
}
// Online C++ compiler to run C++ program online
//==============================LCM(while loop)whith ternory operator=========================
#include <iostream>
using namespace std;
int main() {
    int num1=16;
    int num2=14;
    int mx;
    mx=(num1>num2)? num1:num2;
    while(1){
        if(mx%num1==0 && mx%num2==0){
            cout<<mx;
            break;
        }
          mx++;
    }                      //output=112
  
}
// Online C++ compiler to run C++ program online
//==============================(LOOPS)highest common factor=========================
#include <iostream>
using namespace std;
int main() 
{
    int num1=8;
    int num2=16;
    int hcf;
    for(int i=1; i<=num1; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    cout<<hcf;                 //output=8
}
// Online C++ compiler to run C++ program online
//==============================(LOOPS)armstrong while========================
#include <iostream>
using namespace std;
int main() 
{
   int num=153;
   int a=num;
   int sum=0;
   while(num!=0){
       int m;
       m=num%10;
       sum+=m*m*m;
       num/=10;
       
   }
   if(a==sum){
       cout<<"amstrong";
   }                                //output=armstrong
   else{
       cout<<"not ";
   }
}
// Online C++ compiler to run C++ program online
//==============================(LOOPS)factorial========================
#include <iostream>
using namespace std;
int main() {
int sum=1;
for(int i=1; i<=5; i++){
    sum=sum*i;
}
cout<<sum;
}                      //output=120


// Online C++ compiler to run C++ program online
//==============================(LOOPS)sum=======================
#include <iostream>
using namespace std;
int main() {
int sum=0;
for(int i=1; i<=5; i++){
    sum=sum+i;
}                          //output=15
cout<<sum;
}
// Online C++ compiler to run C++ program online
//==============================(LOOPS)FIBONAACHI SERIES========================
#include <iostream>
using namespace std;
int main()
{
    int ft=0;
    int st=1;
    int next;
    int n=7;
    for(int i=1; i<=n; i++)
    {
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
        cout<<next<<endl;
    }
}

// Online C++ compiler to run C++ program online
///=========================arthmetic progresss(AP)FORMULA(ap=a+(n-1)*d===================================
//d=distsnce
//a=jis number ke bad niklna ho series
//n=jha tk nikalna ho
#include <iostream>
using namespace std;
int main() {
    int a=1;
    int n=7;
    int d=2;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=a+i*d;
        cout<<sum<<endl;                    //output=135791113
    }
 
}

// Online C++ compiler to run C++ program online

///=========================PRIME NUMBER(first method[i<a]===================================
//prime=number vo hote h jo 1 se yaa fir khud se divide hote hai
//like=1,3,11,5,7,31,47,41 etc.


#include <iostream>
using namespace std;
int main() {
    int a=47;
    for(int i=2; i<a; ++i){
        if(a%i==0){
            cout<<"not a prime";
            return 0;
        }
    }
    cout<<"prime";                   //output=prime
}

// Online C++ compiler to run C++ program online
///=========================PRIME NUMBER(2nd method[i*i<a]===================================
#include <iostream>
using namespace std;
int main() {
    int a=47;
    for(int i=2; i*i<a; ++i){
        if(a%i==0){
            cout<<"not a prime";
            return 0;
        }
    }
    cout<<"prime";
}                   // output=prime

//===========================POWER BASE============================

#include <iostream>
using namespace std;
int main() {
 int base=2;
 int power=3;
 int mx=1;
 for(int i=1; i<=power; ++i){
    // mx=mx*base;
    //or
    mx*=base;//(relational)
 }
                              ///OUTPUT=8
     {
     cout<<mx;
     }
 }

 // Online C++ compiler to run C++ program onlin
///////===================PERFECT NUMBER==================
#include <iostream>
using namespace std;
int main() {
  int num=6;
  int sum=0;
  for(int i=1; i<num; i++){
      if(num%i==0){
          sum=sum+i;
      }
  }
  if(sum=num){
      cout<<"perfect number";
     
  }                  //OUTPUT=PERFECT
  else{
      cout<<"not a perfect number";
  }
}
// Online C++ compiler to run C++ program onlin
///////===================(LOOPS)table of 2==================
#include <iostream>
using namespace std;
int main() {
for(int i=1; i<=10; i++){
   
        cout<<i*2<<endl;
    
}
}
// Online C++ compiler to run C++ program onlin
///////===================(LOOPS)table of 2-10==================
#include <iostream>
using namespace std;
int main() {
for(int i=2; i<=10; i++)
{
    for(int j=1; j<10; j++)
    {
   
        cout<<i*j<<endl;
    }
    
}
}
 
        