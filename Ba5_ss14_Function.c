#include<stdio.h>
int checkSNT(int num){
	int count=0; 
	 for(int i=2; i<=num; i++){
	 	if(num%i==0){
	 		count++; 
		 }
	 }
	 return count; 
}
int main(){
	int num;
	printf("Nhap vao 1 so nguyen: ");
	scanf("%d",&num);
	if (checkSNT(num)==1){
		printf("So %d la so nguyen to",num); 
	}else{
		printf("So %d khong phai so nguyen to", num);
	}
	return 0; 
} 
