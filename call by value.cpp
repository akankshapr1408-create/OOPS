#include <bits/stdc++.h>
using namespace std;
void swapvalue(int a,int b){
    int c=a;
    a=b;
    b=c; 
 cout<<a<<" "<<b<<endl;  
}

int main() {
	// swapping using call by value
	int x,y;
	cin>>x>>y;
	cout<<x<<" "<<y<<endl;
	swapvalue(x,y);
}
