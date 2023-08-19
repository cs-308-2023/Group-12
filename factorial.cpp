#include "functions.h"
#include <iostream>

using namespace std;

int factorial(int n){
    if(n<0){
        cout <<  "please enter a positive number" <<endl;
        cin >> n;
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
