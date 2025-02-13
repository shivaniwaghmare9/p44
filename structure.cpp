

// Online C++ compiler to run C++ program online
//============================STRUCTURE=============================================
#include <iostream>
using namespace std;
struct student{
    int roll;
    string name;
    void display(){
        cout<<"name of student:"<<name<<endl;
        cout<<"roll of student:"<<roll<<endl;
    }
    
};
int main() {
 student a;
 a.roll=10;
 a.name="shivani";               //(.) is a member operator
 a.display();
   
}

// Online C++ compiler to run C++ program online
//============================STRUCTURE=============================================
#include <iostream>
using namespace std;
struct student{
    int roll;
    string name;
    void display(){
        cout<<"name of student:"<<name<<endl;
        cout<<"roll of student:"<<roll<<endl;
    }
    
};
int main() {
 student a;
 a.roll=10;
 a.name="shivani";               //(.) is a member operator
 a.display();
 
 student b;
  b.name="ram";                       //two name,roll print
  b.roll=20;
 b.display();
   
}

// Online C++ compiler to run C++ program online
//============================STRUCTURE=============================================
#include <iostream>
using namespace std;
struct student{
    int roll;
    string name;
    void display(){
        cout<<"name of student:"<<name<<endl;
        cout<<"roll of student:"<<roll<<endl;
    }
    void show(int x, string y){
        roll=x;
        name=y;
        cout<<"name of student:"<<name<<endl;
        cout<<"roll of student:"<<roll<<endl;
    }
    
    
}obj;
int main() {
 student a;
 a.roll=10;
 a.name="shivani";               //(.) is a member operator
 a.display();
 
 student b;
  b.name="ram";
  b.roll=20;
 b.display();
 
 obj.show(30,"shiv");
   
}

