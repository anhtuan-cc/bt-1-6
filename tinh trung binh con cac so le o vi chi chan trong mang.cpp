#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("so phan tu trong mang la: \n");
	scanf("%d", &n);
	int f[n];
	for(int i=0;i<n;i++){
		printf("nhap phan tu thu %d: \n",i);
		scanf("%d",&f[i]);
	}
	int sole=0;
	int tong=0;
	int j=0;//bien dem
	for(int i=0;i<n;i++){
			if(f[i]%2==1&&i%2==0){
				sole=f[i];
				tong+=sole;
				j++;	
			}
		}
			float tbc=tong/j;
	printf(" tbc bang %f \n",tbc);

	
}

