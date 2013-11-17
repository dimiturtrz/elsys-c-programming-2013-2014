#include<stdio.h>
int main () {
	int matrix [4] [4];
	int counter_1,counter_2,trans_value; 
	for(counter_1=0;counter_1<4;counter_1++){
		for(counter_2=0;counter_2<4;counter_2++){
			scanf("%d",&matrix[counter_1][counter_2]);
		}
	}
	for(counter_1=0;counter_1<4;counter_1++){
		//printf("%d",counter_1);
		counter_2=counter_1;
		for(counter_2;counter_2>0;counter_2--){
			trans_value=matrix [counter_1] [counter_1-counter_2];
			matrix [counter_1] [counter_1-counter_2]=matrix [counter_1-counter_2] [counter_1];
			matrix [counter_1-counter_2] [counter_1]=trans_value;
		}
	}
	for(counter_1=0;counter_1<4;counter_1++){
		for(counter_2=0;counter_2<4;counter_2++){
			if(counter_2>0){
				printf(" ");
			}
			printf("%d",matrix[counter_1][counter_2]);
		}
		printf("\n");
	}
return 0;
}
