/* Author: shawsk04 */

//Including BigInt library
#include "include/BigInt.h"

int main(){
	BigInt b1("123");
	int exp = 100;
	cout << pow(b1,exp) << "\n";

	BigInt a("23");
	cout << a + pow(b1, exp) << "\n";
}

