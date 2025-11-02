#include <stdio.h>

int main() {
	int i,j;
	for (i=0;i<3;i++){
		for (j=0;j<12;j++)
		{
			
			if (i == 1){
				if(j == 0 || j== 11)
				printf("+");
				else
				printf(" ");
			}
			else
			{
				printf("+");
			}
			if(j==11)
				{
					printf("\n");
				}
		}
		
	}
	
}
 
