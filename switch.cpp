#include<iostream>
using namespace std;

int main(){
	//switch is used to replace large number of if else statements
	char button;
	cin>>button;
	
	switch(button){
		case 'a':
			cout<<"hello"<<endl;
			break;
		case 'b':
			cout<<"namaste"<<endl;
			break;
		case 'c':
			cout<<"salut"<<endl;
			break;
		case 'd':
			cout<<"hola"<<endl;
			break;
		case 'e':
			cout<<"ciao"<<endl;
			break;
		default:
			cout<<"i am still learning more"<<endl;
			break;
	}
	return 0;
	
}


// #include<iostream>
// using namespace std;

// int main(){
// 	float n1,n2;
// 	cout<<"enter two numbers"<<endl;
// 	cin>>n1>>n2;
// 	char op;
// 	cout<<"input the operator"<<endl;
// 	cin>>op;
	
// 	switch(op){
// 		case '+':
// 			cout<<n1+n2<<endl;
// 			break;
// 		case '-':
// 			cout<<n1-n2<<endl;
// 			break;
// 		case '*':
// 			cout<<n1*n2<<endl;
// 			break;
// 		case '/':
// 			cout<<n1/n2<<endl;
// 			break;
// 		default:
// 			cout<<"invalid operation"<<endl;
// 			break;	
// 	}
	
// 	return 0;
// }
