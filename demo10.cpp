#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("nhap so a = ");
	scanf("%d",&a);
	int b;
	printf("nhap so b = ");
	scanf("%d",&b);
	int c;
	printf("nhap so c = ");
	scanf("%d",&c);
	float y; 	 	 	
	float x1;
	float x2;
	if(a == 0){
		printf("khong phai phuong trinh bac 2");
	}
	else{
		y = b*b-4*a*c;
		printf("y = %f\n ",y);
		if (y > 0){
		 x1 = (-b + sqrt(y)) / (2 * a);
         x2 = (-b - sqrt(y)) / (2 * a);
         printf("phuong trinh co 2 nghiem phan biet\n");
         printf("x1 = %f\n",x1);
         printf("x2 = %f\n",x2);
		}
		else{
			if(y==0){
				x1 = -b/(2*a);
				printf("phuong trinh co nghiem kep\n ");
				printf("x1=%f",x1);
			}
			else{
				printf("phuong trinh vo nghiem");
			}
		}
		
	}
}
