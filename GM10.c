/*
*	Exercise Geometry 10 : Intersection with the axes
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
		int n,i,X,Y,x,y;
		scanf("%d", &n);
		for(i = 0;i < n;i++)
		{
				scanf("%d %d %d %d",&X,&Y,&x,&y);
				if(X > 0 && Y > 0 && x > 0 && y < 0)
						printf("X\n");
				else if(X > 0 && Y > 0 && x < 0 && y > 0)
						printf("Y\n");
				else if(X > 0 && Y > 0 && x < 0 && y < 0)
						printf("Both\n");
				else if(X < 0 && Y > 0 && x > 0 && y < 0)
						printf("Both\n");
				else if(X > 0 && Y < 0 && x < 0 && y < 0)
						printf("Y\n");
				else if(X < 0 && Y > 0 && x < 0 && y < 0)
						printf("X\n");
				else if(X < 0 && Y > 0 && x > 0 && y > 0)
						printf("Y\n");
				else if(X > 0 && Y < 0 && x > 0 && y > 0)
						printf("X\n");
				else if(X > 0 && Y < 0 && x < 0 && y > 0)
						printf("Both\n");
				else if(X < 0 && Y < 0 && x > 0 && y < 0)
						printf("Y\n");
				else if(X < 0 && Y < 0 && x > 0 && y > 0)
						printf("Both\n");
				else if(X < 0 && Y < 0 && x < 0 && y > 0)
						printf("X\n");
				else
						printf("None\n");
		}
		return 0;
}
