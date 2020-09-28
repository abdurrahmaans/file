#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buffer[50];
int main(void) {
FILE *f = fopen("abd.txt", "w");
if (f == NULL) {
    printf("error in fopen\n");
    return -1;
}
while (fgets(buffer, 50, stdin) != NULL){
    if (!strcmp(buffer, "end\n")) 
            break;
    fputs(buffer, f);
}
fclose(f);
return 0;
}
