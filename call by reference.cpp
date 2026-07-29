#include <bits/stdc++.h>
using namespace std;
void swapref(int &a,int &b){
    int c=a;
    a=b;
    b=c;
    cout<<a<<" "<<b<<endl;
}
int main() {
	// call by reference
	int x,y;
	cin>>x>>y;
	cout<<x<<" "<<y<<endl;
	swapref(x,y);
}
