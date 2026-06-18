#include<stdio.h>
#include"thuvien.h"
int main(){
	int ary[]={1,2,3,4,5};
	int n=5;
	reverseArray(ary, n);
    printf("Mang sau khi dao nguoc:\n");
    for (int i = 0;i<n;i++) {
        printf("%d ", ary[i]);
    }
}
