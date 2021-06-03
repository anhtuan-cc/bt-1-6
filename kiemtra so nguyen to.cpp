#include <stdio.h>
#include "thuvien.h"
int main(){
	int x;
	printf("nhap so kiem tra:");
	scanf("%d",&x);
	if(ktsonguyento(x)==true){
		printf("%d la so nguyen to",x);
	}else{
		printf("%d ko phai so nguyen to",x);
	}
}
