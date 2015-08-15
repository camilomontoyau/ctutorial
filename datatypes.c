#include <stdio.h>

int main(int argc, char const *argv[])
{
	int k, zznum, sumnum;
	char mychar;

	printf("hello world\n");

	k=24;

	printf("Value of k =  %d\n",k);

	zznum = 10;

	printf("Value of zznum =  %d\n",zznum);

	printf("values of the vars are: %d and %d\n", k, zznum );

	sumnum = k + zznum;

	printf("The sum is =  %d\n", sumnum);

	mychar = 'c';

	printf("mychar is %c\n", mychar);


	return 0;
}