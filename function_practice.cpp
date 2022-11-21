// 1.To print the sum of natural numbers.
// #include<bits/stdc++.h>
// using namespace std;
// int sum(int a){
	// int x;
	// x=(a*(a+1))/2;
	// return x;
// }

// int main(){
	// int n;
	// cin>>n;
	// cout<<"The sum of first "<<n<<" natural numbers is "<<sum(n);
	// return 0;
// }

// 2.To convert binary into decimal.
// #include<bits/stdc++.h>
// #include<math.h>
// using namespace std;

// int main(){
	// int a;
	// cout<<"Enter the binary number :";
	// cin>>a;
	// int count=-1;
	// int y=0;
	// //int l = 1;
	// while(a>0){
		// int x;
		// x=a%10;
		// a=a/10;
		// count=count+1;
		// //y = y + l*x;
		// //l*=2;
		// y=y+((pow(2,count))*x);	
	// }cout<<y;	
	
	
	// return 0;
// }

// 3.To convert octal to decimal.
// #include<bits/stdc++.h>
// using namespace std;
 // int main(){
	// int n;
	// cout<<"Enter the number in octal form :";
	// cin>>n;
	// int count=-1;
	// int y=0;
	// while(n>0){
		// int a;
		// a=n%10;
		// n=n/10;
		// count=count+1;
		// y=y+((pow(8,count))*a);
	// }cout<<y;
	// return 0;
	
 // }
 
//4. To convert decimal into binary.
#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
	int x=1;
	int ans=0;
	while(x<=n)
		x*=2;
	x/=2;
	while(x>0){
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=2;
		ans=ans*10+lastdigit;
	}
	return ans;
}
int main(){
	int n;
	cout<<"Enter the number in decimal form :";
	cin>>n;
	cout<<decimaltobinary(n);	
	return 0;
}
 
//5.To check pythagorean triplet.
 // #include<bits/stdc++.h>
 // using  namespace std;
 // bool check(int x,int y,int z){
	 // int a=max(x,max(y,z));
	 // int b,c;
	 
	 // if(a==x){
		 // b=y;
		 // c=z;
	 // }else if(a==y){
		 // b=x;
		 // c=z;
	 // }else{
		 // b=x;
		 // c=y;
	 // }
	 // if((a*a)==(b*b)+(c*c)){
		 // return true;
	 // }else{
		 // return false;
	 // }
 // }
 // int main(){
	// int x,y,z;
	// cin>>x>>y>>z;
	// if(check(x,y,z)){
		// cout<<"pythagorean triplet";
	// }else{
		// cout<<"not a pythagorean";
	// } 
	 // return 0;
 // }
 
//6.To convert hexadecimal to decimal.
// #include<bits/stdc++.h>
// using namespace std;
// int hexadecimaltodecimal(string n){
	// int ans=0;
	// int x=1;
	
	// int s=n.size();
	// for(int i=s-1; i>=0; i--){
		// if(n[i] >='0' && n[i]<='9'){
			// ans+=x*(n[i]-'0');
			
		// }else if(n[i] >='A' && n[i] <='F'){
			// ans+=x*(n[i]-'A'+10);
		// }
		// x*=16;
	// }
	// return ans;
// }
// int main(){
	// string n;
	// cin>>n;
	// cout<<hexadecimaltodecimal(n);
	// return 0;
	
// }

//7.To convert decimal into octal.
// #include<bits/stdc++.h>
// using namespace std;
// int decimaltooctal(int n){
	// int x=1;
	// int ans=0;
	// while(x<=n)
		// x*=8;
	// x/=8;
	// while(x>0){
		// int lastdigit=n/x;
		// n-=lastdigit*x;
		// x/=8;
		// ans=ans*10+lastdigit;
	// }
	// return ans;
// }
// int main(){
	// int n;
	// cout<<"Enter the number in octal form :";
	// cin>>n;
	// cout<<decimaltooctal(n);	
	// return 0;
// }

//8.Convert decimal to hexadecimal.
// #include<bits/stdc++.h>
// using namespace std;
// string decimaltohexadecimal(int n){
	// int x=1;
	// string ans="";
	// while(x<=n)
		// x*=16;
	// x/=16;
	
	// while(x>0){
		// int lastdigit=n/x;
		// n-=lastdigit*x;
		// x/=16;
		
		// if(lastdigit<=9)
			// ans=ans+ to_string(lastdigit);
		// else{
			// char c='A' + lastdigit -10;
			// ans.push_back(c);
		// }
	// }
	// return ans;	
// }
// int main(){
	// int n;
	// cout<<"Enter the no in decimal form :";
	// cin>>n;
	// cout<<decimaltohexadecimal(n);
	// return 0;
// }
