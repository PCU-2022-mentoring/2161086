//05 ¼ıÀÚ Âï±â

#include<stdio.h>

int main() {
	
	for (int i = 1; i <= 5; i++) {

		for (int j = 0; j <= 5-i; j++) 
			printf(" ");
		
		for(int j=0;j<2*i-1;j++)

			printf("%d",i-1);
			printf("\n");
			
	}
	return 0;


}