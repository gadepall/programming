#include <stdio.h>

int main(void)
{
FILE *fp;
float a = -1.0, l = 1.0, d;
int n = 100, i;

//Common difference
d = (l-a)/(n-1);

//Open file for writing
fp = fopen("test.dat", "w");

for(i = 0; i < 100; i++)
{
fprintf(fp, "%f\n", a+i*d);
}
fclose(fp);
return 0;
}
