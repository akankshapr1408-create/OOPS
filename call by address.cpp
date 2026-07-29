#include <bits/stdc++.h>
using namespace std;
void swapadd(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<endl;
    cout<<a<<" "<<b<<endl;
}
int main() {
	// swap by address
	int x,y;
	cin>>x>>y;
	cout<<x<<" "<<y<<endl;
	swapadd(&x,&y);
}
