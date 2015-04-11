//============================================================================
// Name        : gcd.cpp
// Author      : Hersh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int gcd (int x, int y) {

		int t;
		while (x>0) {
			if(x>y) {
				t = y;
				y = x;
				x = t;
			}
			x = x-y;
		}

	return y;
}


int main() {
	int x,y;

	printf("x=");
	scanf("%d",&x);

	printf("y=");
	scanf("%d",&y);

	printf("gcd for %d,%d = %d\n",x,y, gcd(x,y));

}
