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
//=============================FUNCTION(recursion[factorial]I)================================
#include <iostream>
using namespace std;
int sum(int n){
    if(n<=1){
        return n;
    }
    return n*sum(n-1);
}
int main(){
   
    
                                    //output=6
    cout<<sum(3);                          
}

// Online C++ compiler to run C++ program online
//=============================FUNCTION(recursion[sum)]================================
#include <iostream>
using namespace std;
int sum(int n){
    if(n<=1){
        return n;
    }
    return n+sum(n-1);
}
int main(){
   // int n(5);
    
   
    cout<<sum(5);          //output=15
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