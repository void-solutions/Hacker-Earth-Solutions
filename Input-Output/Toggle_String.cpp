#include <iostream>
#include <string>
using namespace std;
string getUp(string);
int main(){
	string usr;
	cin >>usr;
	cout <<getUp(usr);
}

string getUp(string in){
	string functreturnstring=in;
	for(int i=0;i<in.size();i++){
		if(in[i]<='a'&&in[i]>='z')
			functreturnstring[i]+='A'-'a';
		else if(in[i]<='A'&&in[i]>='Z')
			functreturnstring[i]+='a'-'A';
	}
	return functreturnstring;
}