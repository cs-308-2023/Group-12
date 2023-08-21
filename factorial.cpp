#include "functions.h"
#include <iostream>

using namespace std;

int factorial(int n){
// some random comment added to check diff
    if(n<0){
	return -1;        
    }
    if(n!=1){
	return(n * factorial(n-1));
    }
//here is another comment
    else return 1;
}
