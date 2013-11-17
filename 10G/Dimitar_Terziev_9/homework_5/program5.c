#include<stdio.h>
int main () {
	int i,n;
	float result,rising_value;
	result=0.0;
	rising_value=1.0;
	scanf("%d",&n);
	while(n<0 && n>20){
		scanf("%d",&n);
	}
	for(i=1;i<=n;i++){
		rising_value=rising_value*i;
		//printf("%f\n",1/rising_value);
		result=result+(1/rising_value);
	}
	printf("%f\n",result);
return 0;
}
