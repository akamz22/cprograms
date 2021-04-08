#include <stdio.h>
int main() {
    char *str="Developer Insider";
    for(puts("  |\n /_\\");*str;printf(" |%c|\n",*str++));
    puts(" |_|\n/___\\\n VvV");
	return 0;
}