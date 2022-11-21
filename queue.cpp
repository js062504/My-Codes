#include<bits/stdc++.h>
using namespace std;
class que{
	int index;
	int size;
	int* arr;
	public:
	que(int siz){
		index=-1;
		size=siz;
		arr=new int[siz];
	}
	void push(int element){
		index++;
		if(index!=size){
			arr[index]=element;
			
		}else{
			cout<<"Not enough space "<<endl;
		}
	}
	void pop(){
		if(!empty()){
			for(int i=0; i<index; i++){
				arr[i]=arr[i+1];
				index--;
			}
		}
		else{
			cout<<"Not possible because queue is empty"<<endl;
		}
		
	}
	int top(){
		if(!empty()){
			return arr[0];
		}
		else{
			cout<<"Queue is empty"<<endl;
		}
	}
	bool empty(){
		if(index==-1){
			return true;
		}
		return false;
		
	}
};
int main(){
	que abcd(5);
	abcd.push(1);
	abcd.push(3);
	cout<<abcd.top()<<endl;
	abcd.pop();
	cout<<abcd.top()<<endl;
	
	
	queue<int> quej;
	quej.push(1);
	quej.push(3);
	cout<<quej.front()<<endl;
	quej.pop();
	cout<<quej.front()<<endl;
	return 0;
}