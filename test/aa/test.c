#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* int main(){
    int i;
    while (scanf("%d", &i) != 1) {
    while(getchar() != '\n')
    printf("输入无效请重新输入\n");
    i = (int)i;
    }
    printf("%d", i);
    return 0;
}
 */

int main(){

    char a = getchar();
    char b = getchar();
    char c = getchar();

    a = tolower(a);
    b = tolower(b);
    c = tolower(c);

    // putchar(a);
    // putchar(b);
    // putchar(c);

    printf("%c\r\n%c\r\n%c\r\n", a, b, c);

    return 0;
}
