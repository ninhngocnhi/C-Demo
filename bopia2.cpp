#include <stdio.h>
#include <math.h>
int main() {
	int k,demo=0,demu=0;
	scanf ("%d",&k);
	for (int i=0; i<k; i++){
		long long xo,yo,xu,yu,So,Su;
		scanf ("%lld %lld %lld %lld",&xo,&yo,&xu,&yu);
		So= sqrt(xo*xo + yo*yo);
		Su= sqrt(xu*xu + yu*yu);
		if (So>Su){
			demu++;
		}
		if (So<Su){
			demo++;
		}
	}
	if (demo>demu) printf ("Oppa");
	if (demo<demu) printf ("Unnie");
	return 0;
}
