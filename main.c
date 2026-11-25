#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, s = 0;
i = 1;

while (i <= 5)
{
    s = s + i;
    i++;
}

printf("tong s = %d\n", s);
printf("tong i = %d\n", i);
	return 0;
}
