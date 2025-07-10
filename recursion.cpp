// // Online C++ compiler to run C++ program online
// //=============================FUNCTION(recursion[factorial]I)================================
// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n<=1){
//         return n;
//     }
//     return n*sum(n-1);
// }
// int main(){
   
    
//                                     //output=6
//     cout<<sum(3);                          
// }

// // Online C++ compiler to run C++ program online
// //=============================FUNCTION(recursion[sum)]================================
// #include <iostream>
// using namespace std;
// int sum(int n){
//     if(n<=1){
//         return n;
//     }
//     return n+sum(n-1);
// }
// int main(){
//    // int n(5);
    
   
//     cout<<sum(5);          //output=15
// }

// // Online C++ compiler to run C++ program online
// ///=============================fibonaachi with recursion==============================
// #include <iostream>
// using namespace std;
// int sum(int n)
// {

//     if(n==0){return 0;}
//      if(n==1 ||  n==0){
//     return n;
// }
// return sum(n-1)+sum(n-2);
// }
// int main() {                             //output=01123
//     for(int i=0; i<5; i++){
//     cout<<sum(i);
//     }
// }

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
///=============================fibonaachi with recursion==============================
#include <iostream>
using namespace std;
int sum(int n)
{

    if(n==0){return 0;}
     if(n==1 ||  n==0){
    return n;
}
return sum(n-1)+sum(n-2);
}
int main() {                             //output=01123
    for(int i=0; i<5; i++){
    cout<<sum(i);
    }
}