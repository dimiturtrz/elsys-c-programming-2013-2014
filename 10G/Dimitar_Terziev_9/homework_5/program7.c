#include<stdio.h>
int main () {
	int n;
	scanf("%d",&n);
	if(n<10){
		switch (n){
			case 1:{
				printf("edno");
				break;
			}
			case 2:{
				printf("dve");
				break;
			}
			case 3:{
				printf("tri");
				break;
			}
			case 4:{
				printf("chetiri");
				break;
			}
			case 5:{
				printf("pet");
				break;
			}
			case 6:{
				printf("shest");
				break;
			}
			case 7:{
				printf("sedem");
				break;		
			}
			case 8:{
				printf("osem");
				break;
			}
			case 9:{
				printf("devet");
				break;
			}
		}
	}
	if(n>10&&n<13){
		switch (n){
			case 11:{
				printf("edinadeset");			
			}
			case 12:{
				printf("dvanadeset");
			}
		} 
	}
	if(n>12&&n<20){
		n-=10;
		switch (n){
			case 3:{
				printf("tri");
				break;
			}
			case 4:{
				printf("chetiri");
				break;
			}
			case 5:{
				printf("pet");
				break;
			}
			case 6:{
				printf("shest");
				break;
			}
			case 7:{
				printf("sedem");
				break;		
			}
			case 8:{
				printf("osem");
				break;
			}
			case 9:{
				printf("devet");
				break;
			}
		}
		printf("nadeset");
	}
	if(n>19||n==10){
		switch (n/10){
			case 2:{
				printf("dva");
				break;
			}
			case 3:{
				printf("tri");
				break;
			}
			case 4:{
				printf("chetiri");
				break;
			}
			case 5:{
				printf("pet");
				break;
			}
			case 6:{
				printf("shest");
				break;
			}
			case 7:{
				printf("sedem");
				break;		
			}
			case 8:{
				printf("osem");
				break;
			}
			case 9:{
				printf("devet");
				break;
			}
			default:{
				break;
			}
		}
		printf("deset");
		if(n%10!=0){
			printf(" i ");
			switch (n%10){
				case 1:{
					printf("edno");
					break;
				}
				case 2:{
					printf("dve");
					break;
				}
				case 3:{
					printf("tri");
					break;
				}
				case 4:{
					printf("chetiri");
					break;
				}
				case 5:{
					printf("pet");
					break;
				}
				case 6:{
					printf("shest");
					break;
				}
				case 7:{
					printf("sedem");
					break;		
				}
				case 8:{
					printf("osem");
					break;
				}
				case 9:{
					printf("devet");
					break;
				}
			}
		}
	}
	return 0;
}






	/*switch (n){
		case 1:{
			printf("edno");
			break;
		}
		case 2:{
			printf("dve");
			break;
		}
		case 3:{
			printf("tri");
			break;
		}
		case 4:{
			printf("chetiri");
			break;
		}
		case 5:{
			printf("pet");
			break;
		}
		case 6:{
			printf("shest");
			break;
		}
		case 7:{
			printf("sedem");
			break;		
		}
		case 8:{
			printf("osem");
			break;
		}
		case 9:{
			printf("devet");
			break;
		}
	}*/

