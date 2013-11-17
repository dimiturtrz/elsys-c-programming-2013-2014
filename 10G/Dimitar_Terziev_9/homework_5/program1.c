#include<stdio.h>
#include<string.h>
int main () {
	char used_cards [14];
	int value_counter [16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	char cards_value_checker [16]= {'0','1','2','3','4','5','6','7','8','9','T','J','Q','K','A'};
	int counter_1,counter_2;
	for(counter_1=0;counter_1<13;counter_1++){
		scanf("%c", &used_cards[counter_1]);	
	}
	for(counter_1=0;counter_1<13;counter_1++){
		for(counter_2=2;counter_2<15;counter_2++){
			if(cards_value_checker[counter_2]==used_cards[counter_1]){
				value_counter[counter_2]++;
				break;
			}
		}
	}
	for(counter_1=2;counter_1<15;counter_1++){
		for(;value_counter[counter_1]>0;value_counter[counter_1]--){
			printf("%c",cards_value_checker[counter_1]);
		}
	}
return 0;
}



/*for(counter_1=0;counter_1<13;counter_1++){
		switch used_cards[counter_1]{
			case 'T'{
				T='9'+1;
			}
			case 'J'{
				T='9'+2;
			}
			case 'Q'{
				T='9'+3;
			}
			case 'K'{
				T='9'+4;
			}
			case 'A'{
				T='9'+5;
			}
		}
	}*/
/*#define A 14
#define K 13
#define Q 12
#define J 11
#define T 10*/
