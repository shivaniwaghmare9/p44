

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

// Online C++ compiler to run C++ program online
//==================balance paranthese====================================
#include <iostream>
using namespace std;
int main() {
    string str="{([])}";                      //ek koi bhi closing bracket htaa diyaa to not balanced output 
    int cur=0,squ=0,par=0;
    int size=str.length();
    for(int i=0; i<size; i++)
    {
        if(str[i]=='('){par++;}
       else if(str[i]=='['){squ++;}
       else  if(str[i]=='{'){cur++;}
       else if(str[i]==')'){par--;}
       else if(str[i]==']'){squ--;}
       else if(str[i]=='}'){cur--;}
    }
    if(cur==0 && squ==0 && par==0)
    {
        cout<<"balanced";
    
    }
    else
    {
        cout<<"not balanced";
                                   //output==balanced
    }
}

// Online C++ compiler to run C++ program online
//==================balance paranthese(agar phale hi closing mil jaaye to )====================================
#include <iostream>
using namespace std;
int main() {
    string str="}([]){";
    int cur=0,squ=0,par=0;
    int size=str.length();
    for(int i=0; i<size; i++)
    {
        if(str[i]=='('){par++;}
       else if(str[i]=='['){squ++;}
       else  if(str[i]=='{'){cur++;}
       else if(str[i]==')')
       {     par--;
           if(par<0){cout<<"not balanced"; return 0;}
       }
       else if(str[i]==']')
       {    squ--;
           if(squ<0){cout<<"not balanced"; return 0;}
       }
       else if(str[i]=='}')
       {    cur--;
           if(cur<0){cout<<"not balanced"; return 0;}
       }
    }
    if(cur==0 && squ==0 && par==0)
    {
        cout<<"balanced";
    
    }
    else
    {
        cout<<"not balanced";
     
    }
}                                   //output==not balanced

// Online C++ compiler to run C++ program online
//=================================from sort anagram==============================
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str1="anagram";
    string str2="aangarm";
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    
    if(str1==str2){
        cout<<"anagram";
        
    }
    else{
        cout<<"not an anagram";
    }
    
}




