#include <bits/stdc++.h>
using namespace std;
void increment(int x){
    x=x+1;
    cout<<x<<endl;
}
void inc(int &x){
    x=x+1;
    cout<<x<<endl;
}
void in(int *x){
    //(*X)value at x
    *x=*x+1;
    cout<<&x<<endl;
    cout<<x<<endl;
    
}
int main() {
	int marks=90;
	int &ref=marks;
	cout<<marks<<" "<<ref<<endl;
	ref=54;
	cout<<marks<<" "<<ref<<endl;

int a=5;
increment(a);
cout<<a<<endl;

int b=8;
inc(b);
cout<<b<<endl;

int c=6;
in(&c);
cout<<c<<endl;
cout<<&c<<endl;
}
