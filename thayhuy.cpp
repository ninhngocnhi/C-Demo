#include <iostream>	
#include <cmath>
#include <windows.h>
using namespace std;
const int MN = 500;
bool p[MN];
bool Prime(int n){
  if (n == 1) return false;
  int can = int(sqrt(n));
	for (int i = 2; i <= can; ++i)
	    if (n % i == 0) return false;
	return true;    
}	
void Test(int nn) {
	for (int n = 1 ; n <= nn; ++n) {
	   if (Prime(n)) 
		    cout << " " << n;	
	}	
}
void Sieve(int n) {
  const bool DEL = 1;
  int can = int(sqrt(n));
  memset(p, 0, sizeof(p));
  p[1] = 1;
  for (int i = 2; i <= can; ++i) 
     if (!(p[i] == DEL)) 
        for(int j = i*i; j <= n; j = j+i)
            p[j] = DEL;

}
void Sieve(int n, const char * fn) {
}
int SumPrimes(int n) {
}

main() {
   Sieve(MN-1,"PRIMES.DAT"); 
  return 0;
}


