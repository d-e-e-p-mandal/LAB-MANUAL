// wave form
#include<stdio.h>
int main(){
	int a[10],s,i;
	printf("enter no  : \n");
	for(int i =0  ; i<10 ; i++)	{
		scanf("%d",&a[i]);
	}
	for(int i =1   ; i<8 ; i+=2){
		if (a[i-1]>a[i]){
			s=a[i-1];
			a[i-1]=a[i];
			a[i] =s;
		}
		if (a[i]<a[i+1]){
		    s=a[i];
		    a[i]=a[i+1];
		    a[i+1] =s;
		}	
	}
    	if(a[i]<a[i-1]){
		s=a[i];
		a[i]=a[i-1];
		a[i-1] =s;
    	}
	printf("Wave form : \n");
	for(int i =0  ; i< 10 ; i++){
		printf("%d\t",a[i]);				
	}

    return 0 ;
}
