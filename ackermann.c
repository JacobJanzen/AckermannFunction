#include <stdio.h>
int ack(int m, int n);

int main(){
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			printf("ack(%d,%d) is %d\n", i, j, ack(i,j));
		}
	}
	return 0;
}

int ack(int m, int n){
	if(m == 0)
		return n + 1;
	if(n == 0)
		return ack(m-1, 1);
	return ack(m-1, ack(m, n-1));
}
