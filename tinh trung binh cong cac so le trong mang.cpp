#include <stdio.h>
#include <math.h>
int main(){
	int n;
		printf("nhap so phan tu trong mang ");
		scanf("%d",&n);
	int f[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i);
		scanf("%d", &f[i]);		
	}
	int sole=0;
	int tong=0;
	int x=0;//bien dem
	for(int i=0;i<n;i++){
	 if(f[i]%2==1){
	 	sole=f[i];
	 	tong+=sole;
	 	x++;
	 	printf("\ncac so le la: %d     ", sole);
	 }	
	 }
	if(x!=0){
	float tbc=tong/x;
	printf("\ntrung binh cong cac so le trong mang bang: %f \n",tbc);
	}else{
		printf("ko co so le trong mang \n");
	}

}
