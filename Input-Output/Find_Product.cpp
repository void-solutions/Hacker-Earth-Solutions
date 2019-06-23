#include <iostream>
using namespace std;

void product(int* arr, int size){
	int ret=1;
	for(int i=0;i<size;i++)
		ret*=arr[i];
	cout <<ret;
}

int main(){
	int size;
	cin >>size;
	int arr[size];
	for(int i=0;i<size;i++)
		cin >>arr[i];
	product(arr,size);
}
