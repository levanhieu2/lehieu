#include <stdio.h>

   int main (){
	int n;
	int i=1,j=0,temp=1;
	printf ("Hay nhap mot so nguyen n bat ky :\n");
	scanf ("%d",&n);	
	
	while (1){
	for(j=0;j<i;j++){
	temp *= 10;		
	}	
	if(n<temp){
	printf ("so vua nhap co %d chu so.",i ); 
	break;	
	}	
	else i++;
	
	}
	
	return 0;
	
}
