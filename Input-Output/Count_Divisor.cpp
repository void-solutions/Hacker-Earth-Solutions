#include <iostream>
using namespace std;

int divCounter(int,int,int);

int main(){
	int l,r,k;
	cin >>l>>r>>k;
	cout <<divCounter(l,r,k);
}

int divCounter(int l,int r,int k){
	int counter=0;
	if(l<=r)
		for(l;l<=r;l++)
			if(l%k==0)
				counter++;
	return counter;
}