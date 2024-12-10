#include<stdio.h>
int tinhGiaiThua(int num, int giaiThua){
	for(int i=1; i<=num; i++){
		giaiThua*=i;
	}
	printf("Giai thua cua %d la: %d", num, giaiThua); 
	return 1;
}
int main(){
	tinhGiaiThua(10,1);
	return 0;
}
