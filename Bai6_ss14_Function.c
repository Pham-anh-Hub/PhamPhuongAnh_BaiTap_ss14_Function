#include <stdio.h>
#include <stdbool.h>

bool checkNum( int num ){
	if ( num < 6 ){
		return false;
	}   
	int sum = 1;
	for ( int i = 2; i< num; i++){
		if ( num%i == 0){
			sum += i;
		}
	}
	if ( sum != num ){
		return false;
	}
	return true;
}

int main(){
	int num ,m;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &num);
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &m);
	
	if ( checkNum(num) == false ){
		printf("\nSo %d khong phai so hoan hao!", num);
	}else{
		printf("\nSo %d la so hoan hao!", num);
	}
	if ( checkNum(m) == false ){
		printf("\nSo %d khong phai so hoan hao!", m);
	}else{
		printf("\nSo %d la so hoan hao!", m);
	}
	
	return 0;
}
