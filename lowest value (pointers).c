#include <stdio.h>

int main(){
	
	int values[5] = {20, 60, 15, 10, 5};
	int min = values[0];
	int i;
	
	for(i=1; i<5; i++){
		if(*(values + i) < min){
			min = *(values + i);
		}
	}
	
	printf("Lowest Value is: %d", min);
	
}
