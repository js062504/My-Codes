#include<bits/stdc++.h>
//#include<map>
//#inlcude<string>
using namespace std;
int main(){
	map<string,int> marksmap;
	marksmap["harry"]=45;
	marksmap["jack"]=75;
	marksmap["kjlm"]=87;
	marksmap.insert({{"name1",162},{"name2",54}});
	//marksmap[key]=value;
	map<string,int> :: iterator itr;
	for(itr=marksmap.begin(); itr!=marksmap.end(); itr++){
		cout<<itr->first<<" "<<itr->second<<endl;
	}
	cout<<"The size is:"<<marksmap.size()<<endl;
	cout<<"The max size is:"<<marksmap.max_size()<<endl;
	cout<<marksmap.empty()<<endl;
	return 0;
	
}

