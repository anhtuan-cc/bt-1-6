#include <stdio.h>
#include <stdlib.h>
int main(){
	int max;
	int *arr;
	int n;
	printf("kich thuoc mang la : ");
	scanf("%d",&n);
	arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap phan thu thu %d: ",i);
		scanf("%d",arr+i);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		}
		printf("\nSo lon nhat la: %d\n", arr[n-1]);
		printf("Mang sau khi sap xep: \n");
		for(int i=0;i<n;i++){
			printf("%5d",arr[i]);
       }
       // thay doi kich thuoc
       int m;//m la kich thuoc can them;
       printf("\nNhap kich thuoc can them: ");
       scanf("%d",&m);
       arr=(int*)realloc(arr,(n+m)*sizeof(int));
       for(int i=n;i<n+m;i++){
       	printf("Nhap phan thu thu %d: \n", i);
       	scanf("%d", arr+i);
	   }
	   for(int i=0;i<n+m-1;i++){
	   	for(int j=0;j<n+m-i-1;j++){
	   		if(arr[j]>arr[j+1]){
	   			int a=arr[j];
	   			arr[j]=arr[j+1];
	   			arr[j+1]=a;
			   }
		   }
	   }
	   printf("\nso lon nhat la: %d\n", arr[n+m-1]);
	   printf("\nMang sau khi sap xep la: \n");
	   for(int i=0;i<n+m;i++){
	   	printf("%5d", arr[i]);
	   }

	   
}
