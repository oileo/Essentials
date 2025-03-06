#include <stdio.h>
#include "essentials.h"

void main()
{
	char nome[] = " 11 Leonardo ";
	char sb[100];

	trim(nome, sb);

	printf(":%s:\n", sb);
}
