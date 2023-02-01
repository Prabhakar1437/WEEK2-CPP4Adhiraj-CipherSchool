#include <bits/stdc++.h>

using namespace std;

int main(){
	//v[i] == v.at();
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_front(30);
	
	list<int>::iterator it = l.begin();
	
	for(;it!= l.end();it++){
		cout<<*it<<" ";
	}
	
	return 0;
}

