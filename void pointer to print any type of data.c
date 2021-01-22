#include <stdio.h>

void printValues(int x, float y, char z){
	void *ptr;
	
	ptr = &x;
	printf("Integer Value is: %d\n",*(int *)ptr);
	
	ptr = &y;
	printf("Float Value is: %.2f\n",*(float *)ptr);
	
	ptr = &z;
	printf("Char Value is: %c\n",*(char *)ptr);
}

int main(){
	printValues(4, 2.2, 'a');
}
