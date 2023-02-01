//#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//single
class A{
	public:
//	int c;
    A(){
    	cout<<"A's constant "<<endl;
	}
	~A(){
		cout<<"A's dest."<<endl;
	}
		

};
class B: public A{
	public:
	B(){
		cout<<"B's constant"<<endl;
	}
	~B(){
		cout<<"A's dest."<<endl;
	}
	
};

int main(){
	B obj;
	
	

return 0;	
}
