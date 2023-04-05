#include<stdio.h>
#include<time.h>

int main() {
clock_t start, end;
double execution_time;
float b;
start = clock();

for (int i=0; i<1000000; i++)
    b= 5.191763 * (i*1.12);

end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("%lf", execution_time);

return 0;
}