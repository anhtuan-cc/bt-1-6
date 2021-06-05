#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,s;
	printf("Nhap canh thu nhat: ");
	scanf("%f",&a);
	printf("Nhap canh thu hai: ");
	scanf("%f",&b);
	printf("Nhap canh thu ba: ");
	scanf("%f",&c);
	if(!(a>=0&&b>=0&&c>=0&&a+b>c&&a+c>b&&b+c>a)){
		printf("Loi. Day ko phai 3 canh tam giac");
	}else{
		printf("\nDay la ba canh cua tam giac\n");
		printf("\nChu vi tam giac bang: %f ",a+b+c);
		float p=(a+b+c)/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nDien tich tam giac bang: %f", s);
	}
}
