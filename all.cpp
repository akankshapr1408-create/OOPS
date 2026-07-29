#include <bits/stdc++.h>
using namespace std;
void studentdetails(string n, int rn, float m){
    string name=n;
    int rollno=rn;
    float marks=m;
    cout<<"Name "<<name<<" "<<"Roll no. "<<rollno<<" "<<"Marks "<<marks;
}

int main() {
    string name;
    int rollno;
    float marks;
    cin>>name>>rollno>>marks;
    studentdetails(name,rollno,marks);
	

}
