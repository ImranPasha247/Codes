#include<stdio.h>
int main(){
	for(int i=1; i<=10; i++){
	printf("The table of %d\U0001F600\u2B07\n",i);
	for(int j = 1; j<=10; j++){
	printf("%d * %d = %d\n",i,j,i*j);
}	
}
return 0;
}