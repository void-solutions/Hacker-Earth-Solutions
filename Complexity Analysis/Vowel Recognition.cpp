#include <iostream>
#include <string>
using namespace std;

int checkvowel(string input){
	int total=0;
	for(int i=0;i<input.size();i++){
		if(input[i]=='a'||input[i]=='e'||input[i]=='o'||input[i]=='i'||input[i]=='u'||
		input[i]=='A'||input[i]=='E'||input[i]=='O'||input[i]=='I'||input[i]=='U')
			total++;
	}
	return total;
}
int getVersions(string input){
	int sum=0;
	for(int i=0;i<input.size();i++){
		string vers;
		for(int j=input.size()-1;j>=i;j--){
			vers+=input[j-i];	
			// cout <<"Version is: "<<vers<<endl;
			sum+=checkvowel(vers);
		}
		// cout <<"vers oluştu!\n";
		// cout <<"kontorl edildi.\n";
	}
	return sum;
}

int main(){
	int num;
	cin >>num;
	for(int i=0;i<num;i++){
		string usr;
		cin >>usr;
		cout <<getVersions(usr)<<endl;
	}
}