

// // Online C++ compiler to run C++ program online
// //============================POINTER=============================================
// #include <iostream>
// using namespace std;
// struct student{
//     private:
//     int roll;
//     string name;
//     public:
//     void display(int x, string y){
//         roll=x;
//         name=y;
//     }
//     void show(){
        
//         cout<<"name of student:"<<name<<endl;
//         cout<<"roll of student:"<<roll<<endl;
//     }
// };
// int main() {
//    student *var1;
//    student var2;
//    var2.display(102,"shivani");
//    var1=&var2;
//    var1->show();
   
// }



// Online C++ compiler to run C++ program online
//============================POINTER=============================================
#include <iostream>
using namespace std;
struct student{
    private:
    int roll;
    string name;
    public:
    void display(int x, string y){
        roll=x;
        name=y;
    }
    void show(){
        
        cout<<"name of student:"<<name<<endl;
        cout<<"roll of student:"<<roll<<endl;
    }
};
int main() {
   student *var1;
   student var2;
   var2.display(102,"shivani");
   var1=&var2;
   var1->show();
   
}

