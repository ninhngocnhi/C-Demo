#include <stdio.h>
int main() {
	int d1,d2,d3,s1,s2,s3,s4;
	scanf("%d %d %d", &d1, &d2, &d3);
	s1= 2*(d1+d2);
	s2=d1+d2+d3;
	s3=2*(d1+d3);
	s4=2*(d2+d3);
	if (s1<s2 && s1<s3 && s1<s4){
		printf ("%d", s1);
	}
	else if (s2<s1 && s2<s3 && s2<s4){
		printf ("%d", s2);
	}
		else if (s3<s1 && s3<s2 && s3<s4){
		printf ("%d", s3);
	}
			else if (s4<s1 && s4<s2 && s4<s3){
		printf ("%d", s4);
	}
	return 0;
}

