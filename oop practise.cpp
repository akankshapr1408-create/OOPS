#include <bits/stdc++.h>
using namespace std;
class circle {
    float r;
    public:
    void getdata();
    void area();
    
};
void circle:: getdata(){
    cin>>r;
}
void circle::area(){
    cout<<3.14*r*r;
}

int main() {
	// your code goes here
	circle c;
	c.getdata();
	c.area();

}
