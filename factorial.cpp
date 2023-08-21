#include "functions.h"
#include <iostream>

using namespace std;

int factorial(int n){
// some random comment added to check diff
    if(n<0){
        cout << "please enter a positive number"<<endl;
//this is 3rd comment
        cin >> n;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
//here is another comment
    else return 1;
}
