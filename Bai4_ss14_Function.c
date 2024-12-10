#include<stdio.h>
int findMax(int num[], int size){
	int max=num[0]; 
	for(int i=0; i<size; i++){
		if(num[i]> max){
			max=num[i];
		} 
	}
	printf("So lon nhat trong mang la: %d", max);
	return 2; 
}
int main(){
	int num[20]={3,34,56,32,76,12,43,};
	int size=sizeof(num)/sizeof(num[0]);
	findMax(num, size);
	return 0; 
	 
	
}

