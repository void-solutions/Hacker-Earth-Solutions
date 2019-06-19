// Sample code to perform I/O:

#include <iostream>

using namespace std;
void PrintPrimeNumbers(int);
int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	// cout << "Input number is " << num << endl;		// Writing output to STDOUT
	PrintPrimeNumbers(num);
}



// Write your code here
void PrintPrimeNumbers(int num){
	for(int i=2;i<=num;i++){
		int ebob=1;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				ebob*=j;
			}
		}
		if(ebob==i){
			cout <<i<<" ";
		}
	}
}