#include<stdio.h>
int main () {
	int m1,counter_1,m2,counter_2,m5,counter_3,m;
	scanf("%d %d %d %d",&m1,&m2,&m5,&m);
	counter_1=0;
	counter_2=0;
	counter_3=0;
	while(m>0){
		if (m>=5&&m5>0){
			m-=5;
			m5-=1;
			counter_1++;
		}else{
			if(m>=2&&m2>0){
				m-=2;
				m2-=1;
				counter_2++;
			}else{
				if(m>=1&&m1>0){
					m-=1;
					m1-=1;
					counter_3++;
				}else{
					break;		
				}
			}
		}
	}
	if(m!=0){
		printf("No");
	}else{
		printf("Yes: %d, %d, %d",counter_3,counter_2,counter_1);
	}

return 0;
}
