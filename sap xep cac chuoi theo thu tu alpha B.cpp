#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("Nhap so mang ");
	scanf("%d",&n);
	char arrs[n][50];//khai bao 1 mang n string
	for(int i=0;i<n;i++){
		printf("nhap chuoi thu %d: ",i);
		scanf("%s",arrs[i]);
	}
	int temp=0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)// kiem tra 2 pahn tru arrs[j} va arrs[j+1]
		if(strcmp(arrs[j],arrs[j+1])>0){
			char tmp[50];
			strcpy(tmp,arrs[j]);
			strcpy(arrs[j],arrs[j+1]);
			strcpy(arrs[j+1],tmp);
		}
	}
	printf("Sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("so thu %d: %s \n",i,arrs[i]);
	}
	
	
}
