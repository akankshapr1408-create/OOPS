# include <bitd/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int marks;
    void display() {
        cout << name<<": "<< marks << endl;
    }
};
int main(){
    Student s;
    s.name="John";
    s.marks=90;
    s.display();

    Student * ptr = &s;
    ptr->display();
}