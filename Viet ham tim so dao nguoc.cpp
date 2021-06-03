#include <stdio.h>
int timsodaonguoc(int n){
	int y=0;
	while(n!=0){
		y=y*10+n%10;
		n=n/10;
	}
	return y;
}
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	printf("So dao nguoc cua %d la %d",n,timsodaonguoc(n));
}
