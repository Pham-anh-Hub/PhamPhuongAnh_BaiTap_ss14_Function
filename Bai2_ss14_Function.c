#include<stdio.h>
int inMang(int num[], int size){
	printf("Phan tu co trong mang la: \n");
	for(int i=0; i<size; i++){
		printf("%d\t",num[i]);
	}
	return 2;
}
int main(){
	int num[8]={7,12,22,50,88,64,42,2};
	int size=sizeof(num)/sizeof(num[0]);
	inMang(num, size);
	
}

