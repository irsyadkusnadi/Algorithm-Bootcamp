//Irsyad#8405
#include <iostream>
using namespace std;

int main() {
    
   int N;
   scanf("%d", &N);
   if (N/1 < 10) {
   	printf("1");
   }else if (N/10 < 10) {
   	printf("2");
   }else if (N/100 < 10) {
   	printf("3");
   }else {
   	printf("More than 3 digits");
   }
   
	return 0;
}
