/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	//Your codes here
	
	
	int a,b,c;
	for(a=2; a<=testcase; a++){
		b=1;
		for(c=2;c<a;c++){
			if(a%c == 0){
				b=0;
				break;
			}
		}
    if(b)
	 printf("%d\n",a);
	}
	

	
	return 0;
}
