// #include<bits/stdc++.h>
// #include<string>
//#include<algorithm>
//#include<climit>
//#include<math.h>
//#include<cmath>
// using namespace std;
// int main(){
	
	//string str;
	//string str1(5,'n');
	//string str2="apnikaksha";   //without space
	//getline(cin,str);	//with space	
	//cout<<str;           //to write a complete sentence.
	
	//string s1="fam" ;  
	//string s2="ily";
	//s1.append(s2);
	//cout<<s1+s2;
	//cout<<s1;
	//cout<<s1[1]; //to acess the element of string.
	//string abc="asdfgghjk";
	//abc.clear();
	//cout<<abc;
	// string s1="abc";
	// string s2="xyz";
	// cout<<s1.compare(s2);
	//string s1="nincompoop";
	//cout<<s1.erase(3,3);
	//cout<<s1.find("poo")<<endl;
	//s1.insert(2,"lol");
	//cout<<s1.length();   cout<<s1.size();    
	// for(int i=0; i<s1.length(); i++){
		// cout<<s1[i]<<endl;
	// }
	
	//string s= s1.substr(6,4);
	//cout<<s<<endl;
	
	// string s1="15326";        //converting string to int.
	// int x=stoi(s1);
	// cout<<x;
	//int a=1425636;				//converting int to string.
	//cout<<to_string(a)<<endl;
	
	//sorting of string.
	// string s1="zxdfvbwthkshtj";
	// sort(s1.begin(),s1.end());
	// cout<<s1;
	//reverse in built function.
	//reverse(s1.begin(),s1.end());
	
	
	//return 0;
//}

//questions.
//lowercase to uppercase and vice-versa.
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
	//string s1="bcdfe";
	//ASCII values:
	//for(int i=0; i<s1.size(); i++){
		//if(s1[i]>='a' && s1[i]<='z'){
			//s1[i]-=32;
		//}
	//}sort(s1.begin(),s1.end());
	//cout<<s1<<endl;
	
	// string s1="BCDFE";
	// for(int i=0; i<s1.size(); i++){
		// if(s1[i]>='A' && s1[i]<='Z'){
			// s1[i]+=32;
		// }
	// }
	// sort(s1.begin(),s1.end());
	// cout<<s1<<endl;
	
//inbuilt function .

		//string str="anJFNGKjfg";
		//transform(str.begin(),str.end(),str.begin(),::toupper);
		//transform(str.begin(),str.end(),str.begin(),::tolower);
		//sort(str.begin(),str.end());
		//cout<<str;
		// for(int i=0; i<str.length(); i++){
			 // if(str[i]>='a' && str[i]<='z'){
				 // transform(str.begin(),str.end(),str.begin(),::toupper);
			 // }
			 
		// }sort(str.begin(),str.end());
		// cout<<str<<endl;
		
	//return 0;
//}
//making greatest or smallest number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
	// string s="14862398465";
	// sort(s.begin(),s.end(),smaller<int>());
	// cout<<s<<endl;
	// return 0;
// }

//maximum ocuurrence of alphabet
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
	// string s="abcaaabejfbabcrjabbab";
	// int freq[26];
	// for(int i=0; i<26; i++)
		// freq[i]=0;
	// for(int i=0; i<s.size(); i++)
		// freq[s[i]-'a']++;
	
	// char ans='a';
	// int maxf=0;
	// for(int i=0; i<26; i++){
		// if(freq[i]>maxf){
			// maxf=freq[i];ans=i+'a';
		// }
	// }
// cout<<maxf<<" "<<ans<<endl;	
	// return 0;
// } 


#include<iostream>
#include<string>
using namespace std;
int main(){
	string name="harry";
	cout<<"The name is "<<name<<endl;
	cout<<"Length of string is "<<name.length()<<endl;
	cout<<"for substrings printing "<<name.substr(0,4)<<endl;
	cout<<"for substring printing "<<name.substr(2,2)<<endl;
	
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
	// int n;
	// cin>>n;
	// cin.ignore();
	// char arr[n+1];
	// cin.getline(arr,n);
	// cin.ignore();
	
	// //largest word in a sentence
	
	// return 0;
	
// }



