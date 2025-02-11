

// Online C++ compiler to run C++ program online
//=============================STRING PALINDROME===================================

#include <iostream>
using namespace std;
int main() {
 string str="KANAK";
 string ans=str;
 int i=0;
 int j=str.length()-1;
 while(i<=j){
     char temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
 }
 if(str==ans){
 cout<<"palindrom";
 }
 else{
     cout<<"not a palindrom";
 }
}

// Online C++ compiler to run C++ program online
//=============================STRING REVERSE===================================

#include <iostream>
using namespace std;
int main() {
 string str="shivani";
 int i=0;
 int j=str.length()-1;
 while(i<=j){
     char temp=str[i];
     str[i]=str[j];
     str[j]=temp;
     i++;
     j--;
 }
 
 cout<<str;
 return 0;
}