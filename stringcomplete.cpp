// Complete String
// A string is said to be complete if it contains all the characters from a to z. Given a string, check if it complete or not.
//
// Input
// First line of the input contains the number of strings N. It is followed by N lines each contains a single string.
//
// Output
// For each test case print "YES" if the string is complete, else print "NO"
//
// Constraints
// 1 <= N <= 10
// The length of the string is at max 100 and the string contains only the characters a to z

//  SAMPLE INPUT
// 3
// wyyga
// qwertyuioplkjhgfdsazxcvbnm
// ejuxggfsts

// SAMPLE OUTPUT
// NO
// YES
// NO
// via hackerearth.com
// -----------------------------------------------------------------------------------------------------------
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int uzunlukfonk(string kelime);
int main(){
    int n;
    int counter;
    cin >> n;
    string kelime;
    int index[n];
    for(int i=0;i<n;i++){
        cin >> kelime;
        index[i]=uzunlukfonk(kelime);
    }
    for(int i=0;i<n;i++){
        if( index[i] == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
int uzunlukfonk(string kelime){
   int i='a';
   int k=0;
    if(kelime.length() < 26 ){
        return 0;
}for(i;i<='z';i++)
 {

   for(int counter=0;counter<kelime.length();counter++){
       if ( kelime[counter] == i ) {
           k++;
         break;

       }

 }
        if(!k){
                    return 0;
    }
     k=0;
 }
    return 1;
}
