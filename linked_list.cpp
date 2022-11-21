#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;
		
	}
	Node(int val,Node* gfg){
		data=val;
		next=gfg;
	}
	Node(Node* gfg){
		data=0;
		next=gfg;
	}
		
};


Node* insert_node_at_head(Node* arr,int val){
	Node* array= new Node(val,arr);
	return array;
}

Node* insert_node_at_tail(Node* arr,int val){
	Node* arry = new Node(val,NULL);
	if(arr==NULL){
		return arry;
	}
	if(arr->next==NULL){
		arr->next=arry;
		return arr;
	}
	
	Node* copy_arr = new Node(arr->data,arr->next);
	//Node* copy_arr=arr;
	
	
	while(copy_arr->next!=NULL){
		copy_arr=copy_arr->next;
	}

	copy_arr ->next=arry;	
	
	
	return arr;
}

Node* delete_node_at_head(Node* arr){
	return arr->next;
}

Node* delete_node_at_tail(Node* arr){
	if(arr==NULL || arr->next==NULL){
		return NULL;
	}
	Node* duplicate_arr = new Node(arr->data,arr->next);
	
	while(duplicate_arr->next->next!=NULL){
		duplicate_arr=duplicate_arr->next;
	}
	duplicate_arr->next=NULL;
	return arr;
}

int main(){
	// Node* arr = new Node(1);
	// arr->next = new Node(2);
	// arr->next->next = new Node(3);
	// arr->next->next->next = new Node(4);
	// arr->next->next->next->next = new Node(5);
	// Node* arr1 = insert_node_at_head(arr,0);
	// cout<<"After inertion\n";
	// while(arr1!=NULL){
		// cout<<arr1->data<<" ";
		// arr1 = arr1->next;
	// }
	// cout<<"\n";
	// arr1 = insert_node_at_tail(arr,6);
	
	// cout<<"After inertion\n";
	// while(arr1!=NULL){
		// cout<<arr1->data<<" ";
		// arr1 = arr1->next;
	// }
	// cout<<"\n";
	// arr1 = delete_node_at_head(arr);
	// cout<<"After deletion\n";
	// while(arr1!=NULL){
		// cout<<arr1->data<<" ";
		// arr1 = arr1->next;
	// }
	// cout<<"\n";
	// arr1 = delete_node_at_tail(arr);
	// cout<<"After deletion\n";
	// while(arr1!=NULL){
		// cout<<arr1->data<<" ";
		// arr1 = arr1->next;
	// }
	// cout<<"\n";
	return 0;
}

	