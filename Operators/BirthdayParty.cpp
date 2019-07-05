#include <iostream>
using namespace std;

int main(){
	int TestCase;
	cin>> TestCase;
	while (TestCase--){
		int num,people;
		cin >>num>>people;
		if(people%num==0)
			cout <<"Yes"<<endl;
		else
			cout <<"No"<<endl;
	}
}

