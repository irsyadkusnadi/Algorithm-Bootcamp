//Irsyad#8405
#include <iostream>
using namespace std;

int main() {
    
   int L;
   int B;
   int Area;
   int Peri;
   int Eq;
   scanf("%d\n%d", &L, &B);
   Area=L*B;
   Peri=2*(L+B);
   Eq=Area;
   if (Area>Peri) {
   	printf("Area\n%d", Area);
   }else if (Peri>Area){
   	printf("Peri\n%d", Peri);
   }else if (Area=Peri) {
   	printf("Eq\n%d", Eq);
   }
   
	return 0;
}
