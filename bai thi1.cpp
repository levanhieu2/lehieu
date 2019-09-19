
#include <stdio.h>
int main (){
	int n;
	printf (" nhap so nguyen tu ban phim:\n");
	scanf ("%d",&n);
	int tong = 0;
	while (n){
		tong+=n%10;
		n/=10;
	}
	printf (" tong cua cac chu so la:%d",tong);
	return 0;
	
}

