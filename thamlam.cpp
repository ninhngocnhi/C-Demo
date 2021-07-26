#include <stdio.h>
#include <math.h>
struct DoVat {
char Ten [20];
float TrongLuong, GiaTri, DonGia;
      int PhuongAn;
};
void TinhDonGia(DoVat sp[], int n)
{
   for(int i = 1; i <= n; i++)
      sp[i].DonGia = sp[i].GiaTri / sp[i].TrongLuong;
}
 void Greedy(DoVat sp[], int n, float W)
 {
      for (int i = 0; i < n; i++) {
            sp[i].PhuongAn = W / sp[i].TrongLuong;
            W -= sp[i].PhuongAn * sp[i].TrongLuong;
      }
 }
int main (){

	return 0;
}

