#include<stdio.h>
int main () {
	long long counter,input_number;
	int repetition_checker[10] = {0,0,0,0,0,0,0,0,0,0};
	scanf("%lld",&input_number);
	for(counter=0;counter<10;counter++){
		repetition_checker[input_number%10]++;
		input_number/=10;
	}
	for(counter=0;counter<10;counter++){
		if(repetition_checker[counter]>1){
			printf("%lld : %d\n",counter,repetition_checker[counter]);
		}
	}
return 0;
}
