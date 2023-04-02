//BASED ON BST 
//AUTOMATICALLY SORTING ALGO
#include <iostream>
#include <set>
using namespace std;
int main(){
set<int> s;
s.insert(110);
s.insert(90);
s.insert(100);
s.insert(100);
s.insert(70);
s.insert(40);
s.insert(20);
cout<<"INCREASING ORDER: "<<endl;
for(int x:s){
    cout<<x<<" ";
}cout<<endl;
set<int,greater<int> > s1;
s1.insert(110);
s1.insert(90);
s1.insert(100);
s1.insert(100);
s1.insert(70);
s1.insert(40);
s1.insert(20);
cout<<"DECREASING ORDER: "<<endl;
for (auto it=s1.begin();
it!=s1.end();it++) {
	    cout<<(*it)<<" ";
	}cout<<endl;
auto it=s.find(20);
	if(it==s.end())
	    cout<<"Not found"<<endl;
	else
	    cout<<"Found"<<endl;
	cout<<"Size: "<<s.size()<<endl;
	    s.clear();
	cout<<"Size: "<<s.size()<<endl;
return 0;
}