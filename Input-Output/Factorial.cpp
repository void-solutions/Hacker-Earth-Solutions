#include <iostream>
using namespace std;

int getFactorial(int);

int main(){
	int usr;
	cin >>usr;
	cout <<getFactorial(usr);
}
int getFactorial(int num){
	int j=1;
	for(int i=1;i<=num;i++)
		j*=i;
	return j;
}