#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define m 128

int main()
{
		char line[m],A[m];
		int i,j,s,num;
		for(i = 0; i < m; i++)
		line[i]='\0';//清空
	    for(i=0;i<m;i++)
	    A[i]='\0';//清空

		while(fgets(line,m,stdin)!=NULL)
		{
				num = -1;//紀錄是否有數字?
				j = 0;
				s = 0;
				for(i = 0; i < m; i++){
						if(isdigit(line[i])){ //是否為數字?
								A[j] = line[i];
								j++;
								num = 1;
						}
				}

				if(num == -1)
				printf("-1"); //沒有數字印-1
				else{
						for(i = 0; i < j; i++){
								if(A[i]=='0' && s==0)
								continue;
								else{
										s = 1;
										printf("%c", A[i]);
								}
						}
						if(s == 0)
						printf("0");
				}
				printf("\n");
				for(i = 0; i < m; i++)
				line[i] = '\0';//清空
				for(i = 0; i < m; i++)
				A[i] = '\0';//清空
		}
		return 0;
}
