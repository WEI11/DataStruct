#include "SysLib.h"


void PrintOut(int n)
{
	if (n >= 10)
		PrintOut(n/10);
	printf("%d",n%10);

}


int main()
{

	PrintOut(325);
	system("pause");
	return 0;
}