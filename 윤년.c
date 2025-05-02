//윤년은 4의 배수이면서 100의 배수가 아닌것. 단, 400의 배수는 윤년

#include <stdio.h>
int main() {
  	int input;
  	int output;
  	    
  	scanf("%d", &input);
  	if (input % 400 == 0) {
  		output = 1;
  	}
  	else if (input % 100 == 0) {
  		output = 0;
  	}
  	else if (input % 4 == 0) {
  		output = 1;
  	}
  	else output = 0;
  	printf("%d\n", output);
  	
  	return 0;
}
