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
int show(){
    int a=40;
    int b=30;
    int c=a+b;
    cout<<c;
    return c;
    
}
int main() {
   show();
  
   
   
 
}
// Online C++ compiler to run C++ program online
/                     //non-return type  --withparameter(factorial) =================
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