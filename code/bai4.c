#include <stdio.h>

      int main(){
            float pi = 3.14;
            double R;
            scanf("%lf", &R);
      double S, V;
            S = pi * R * R;
            V = 4.0 / 3 * pi * R * R * R;
            printf("%lf %lf", S, V);
            return 0;
      }
