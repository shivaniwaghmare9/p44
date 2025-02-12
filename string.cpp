

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

// Online C++ compiler to run C++ program online
//=================================ANAGRAM==============================
#include <iostream>
using namespace std;
int main() {
    string str1="anagram";
    string str2="aaangrm";
    if(str1.length()!=str2.length())
    {
        cout<<"not a anagram";
        return 0;
    }
    
    
    for(int i=0; i<str1.length(); i++)
    {
        bool found=false;
        for(int j=0; j<str2.length();j++)
        {
           
          if( str1[i]==str2[j])
          {
            str2[j]='#';
            found=true;
            break;
          }
            
            }
    
    if(!found==false){
        cout<<"anagram";
        return 0;
    }
    }
    cout<<"anagram";
}