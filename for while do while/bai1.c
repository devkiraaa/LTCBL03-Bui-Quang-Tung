#include <stdio.h>

      int main(){
            int n = 10;
            long long x;
            long long tong = 0;
      for(int i = 1; i <= 10; i++){
            scanf("%lld", &x);
            tong += x;
      }
      printf("%lld", tong);
      return 0;
      }
