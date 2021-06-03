#include <stdio.h>
#include <math.h>
int main(){
	int n;
		printf("nhap so phan tu trong mang ");
		scanf("%d",&n);
	int f[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i);
		scanf("%d", &f[i]);}
	int x;
	printf("nhap so kiem tra: ");
	scanf("%d",&x);
	for(int i=0;i<n;i++){	
		if(x==f[i]){
			printf("\nX co trong mang!!\n");
		}else{
			("\n X ko co trong mang!!\n");
		}
	}
}
