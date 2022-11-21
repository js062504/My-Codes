#include<bits/stdc++.h>
using namespace std;
class stck{
	int size;
	int* arr;
	int index;
	public:
	stck(int siz){
		index=-1;
		arr = new int[siz];
		size = siz;
	}
	void push(int element){
		index++;
		if(index!=size){
			arr[index]=element;
		}else{
			cout<<"Not enough space."<<endl;
		}
	}
	void pop(){
		if(!empty()){
			index--;
		}else{
			cout<<"No element on top"<<endl;
		}
	}
	int top(){
		if(!empty()){
			return arr[index];
		}else{
			cout<<"No elemnt on top"<<endl;
		}
	}
	bool empty(){
		if(index==-1){
			return true;
		}
		return false;
	}
	bool full(){
		if(index==(size-1)){
			return true;
		}
		return false;
	}
};  
int main(){
	stck s(5);
	s.push(1);
	cout<<s.top();
	
	stack<int> stck;
	stck.push(1);
	cout<<stck.top()<<endl;
	stck.pop();
	cout<<stck.empty()<<endl;
	
	
	return 0;
}