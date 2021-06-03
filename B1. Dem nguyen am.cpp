#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("Nhap vao chuoi: ");
	scanf("%s",s);
	int a,o,e,i,u,k;
	a=o=e=i=u=k=0;
	for(int j=0;j<strlen(s);j++){
		switch(s[j]){
			case 'a':a++;break;
			case 'o':o++;break;
			case 'e':e++;break;
			case 'i':i++;break;
			case 'u':u++;break;
			default:k++;
		}
	}
	printf("a = %d\n",a);
	printf("o = %d\n",o);
	printf("e = %d\n",e);
	printf("i = %d\n",i);
	printf("u = %d\n",u);
	printf("ky tu khac = %d\n",k);
}
