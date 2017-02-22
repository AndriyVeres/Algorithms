#include <cmath>
#include "functions.h"
#include <iostream>
#include "stdlib.h"

namespace functions

{
	//print integer to binary

	void print_int_to_bin(int number)
	{
	//loop-loop-loop
	int n=1;
	short int *X = (short int *)malloc(n*sizeof(short int));
	while(number!=0)
		{
		if(number%2!=0) X[n-1]=1;//std::cout<<1;
		else            X[n-1]=0;//std::cout<<0;
		number=number/2;
		n++;
		X = (short int*)realloc(X,n*sizeof(short int));
		}
	n--;
	X = (short int*)realloc(X,n*sizeof(short int));

	for(int i=n-1;i>=0;i--)
		{
		std::cout<<X[i];
		}
	std::cout<<"(2)";
	free(X);
	}

}