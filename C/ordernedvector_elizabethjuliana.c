/*Program: The code gets 10 random numbers and using vectors and the command for,
we will make these 10 numbers get totally ordened in crescenting form by testing one by one
seeing if v[1] is bigger than v[2], and v[2] is bigger than v[3].
At the end, the vector with the bigest value will be the v[10] but it will be (probably) need
to remake these steps again, so let's see how do it!*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int i, v[11], aux1, aux2, n;

int main() {
    srand(time(NULL)); 

        v[1] = 1 + rand() % 100; 
       	v[2] = 1 + rand() % 100; 
       	v[3] = 1 + rand() % 100;
       	v[4] = 1 + rand() % 100;
       	v[5] = 1 + rand() % 100;
       	v[6] = 1 + rand() % 100;
       	v[7] = 1 + rand() % 100;
       	v[8] = 1 + rand() % 100;
       	v[9] = 1 + rand() % 100;
		v[10] = 1 + rand() % 100;
       	v[11] = 101; 
    
    for (i=1; i<=10; i++)
    	printf("Vector V[%d] = %d\n", i, v[i]); //Showing the vector values, using for will count from 1 to 10
	
	printf("Press any key to continue...\n"); 
	getchar();
 for (n=1; n>-1; n++){
		for (i=1; i<=10; i++){
			aux1 = v[i];
    		aux2 = v[i+1]; 
				if (v[i] > v[i+1]){
					v[i] = aux2;
					v[i+1] = aux1;
				}
	
			printf("-> Vector V[%d]=%d\n", i, v[i]);
		}
		printf("The command FOR was executed %d time(s)!\n", n);
				
		if ((v[1]<v[2]) && (v[2]<v[3]) && (v[3]<v[4]) && (v[4]<v[5]) && (v[5]<v[6]) && (v[6]< v[7]) && (v[7]<v[8]) && (v[8]<v[9])){ 
			n = -2;
		}
		
	}
   return 0;
}
