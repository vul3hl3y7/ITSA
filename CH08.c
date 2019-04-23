/*
*	Exercise CH08 : Decryption
*/

#include<stdio.h>
#include<stdlib.h>

#define m 1024

int main()
{
		int total, i, j;
		char buf[m];

		while(fgets(buf,m,stdin) != NULL)
		{
				total = (buf[0]-'0')+2*(buf[2]-'0')+3*(buf[3]-'0')+4*(buf[4]-'0')+5*(buf[6]-'0')+6*(buf[7]-'0')+7*(buf[8]-'0')+8*(buf[9]-'0')+9*(buf[10]-'0'); // char to int
				i = buf[12]-'0';
				j = total % 11;

				if(i == j) printf("Pass\n");
				else printf("Fail\n");
		}
		return 0;
}
