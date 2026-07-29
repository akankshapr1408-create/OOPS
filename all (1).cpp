#include <bits/stdc++.h>
using namespace std;
class studentdetails{
    public:
    string name;
    int rollno;
    float marks;
    void input(){
        cout<<"enter name of the student"<<endl;
        
        cin>>name;
        cout<<"enter the roll no of the student"<<endl;
        
        cin>>rollno;
        cout<<"enter the marks of the student"<<endl;
        cin>>marks;
    }
    void display(){
          cout<<"name="<<name<<endl<<"rollno="<<rollno<<endl<<"marks="<<marks<<endl;  
    }
};

int main() {
    studentdetails s1,s2;
    s1.input();
    s1.display();
    s2.input();
    s2.display();
  

}
