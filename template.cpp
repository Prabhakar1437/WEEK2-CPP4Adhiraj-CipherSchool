#include <bits/stdc++.h>
//#include<vector>

using namespace std;

template <typename T>

T sum(vector<T>&v,T def =0){
	T s = def;
//	for(T ele:v){
//	 s+=ele;
//	}
    T a;
    for(int i =0 ; i<v.size();i++){
//    	a = v[i];
//    	s+=a;
        s+=v[i];
    	
	}
    
	
	return s;
		
}
//double sum(vector<double>&v,int def =0){
//	double s = def;
//	for(double ele:v){
//	 s+=ele;
//	}
//	
//	return s;
//		
//}
int main(){
	vector<int>v = {1,2,3,4,5,6,7,8,9};
	vector<double>v2 = {1.12,2.56,3.64,4.76,5.54,6.32,7.56,8.67,9.56};
	vector<string> vs ={"templates","are"," ,","magical.!!"};
	
	cout<<sum<int>(v)<<endl;
	cout<<sum<double>(v2)<<endl;
	
	cout<<sum<string>(vs,"")<<endl;
	
	return 0;
}
 
