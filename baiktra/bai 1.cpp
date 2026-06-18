#include<stdio.h>
int main(){
	int n;
	printf("nhap so = ");
	scanf("%d",&n);
	float S=0;
	if (n <= 0) {
        printf("khong thoa man!");
	}else{
		for (int i=1;i<= n;i++){
            S += 1.0/i;
		}
	printf("sum=%f",S);
	}
}
