#include <stdio.h>
#include <string.h>
void upperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97&&s[i]<=122){
			s[i]-=32;
		}
	}
    printf("Chuoi sau khi chuyen sang in hoa: %s",s);
}
// Mo ta chuc nang
int main(){
	char s[50];
	printf("Nhap chuoi s ");
	scanf("%s",s);
	upperCase(s);
}
