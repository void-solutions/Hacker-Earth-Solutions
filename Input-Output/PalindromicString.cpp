#include <iostream>
#include <string>
using namespace std;
void checkPalindrom(string);
int main(){
	string usr;
	cin >>usr;
	checkPalindrom(usr);
}
void checkPalindrom(string ex){
	for(int i=0;i<ex.size();i++)
		if(ex[i]!=ex[ex.size()-1-i]){
			cout <<"NO";
			return;
		}

	cout <<"YES";
}