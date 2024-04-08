#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    printf("Enter any words\n");
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i]=='A')
            printf("._ ");
        else if (s[i] == 'b' || s[i]=='B')
            printf("_... ");
        else if (s[i] == 'c' || s[i]=='C')
            printf("_._. ");
        else if (s[i] == 'd' || s[i]=='D')
            printf("_.. ");
        else if (s[i] == 'e' || s[i]=='E')
            printf(". ");
        else if (s[i] == 'f' || s[i]=='F')
            printf(".._. ");
        else if (s[i] == 'g' || s[i]=='G')
            printf("__. ");
        else if (s[i] == 'h' || s[i]=='H')
            printf(".... ");
        else if (s[i] == 'i' || s[i]=='I')
            printf(".. ");
        else if (s[i] == 'j' || s[i]=='J')
            printf(".___ ");
        else if (s[i] == 'k' || s[i]=='K')
            printf("_._ ");
        else if (s[i] == 'l' || s[i]=='L')
            printf("._.. ");
        else if (s[i] == 'm' || s[i]=='M')
            printf("__ ");
        else if (s[i] == 'n' || s[i]=='N')
            printf("_. ");
        else if (s[i] == 'o' || s[i]=='O')
            printf("___ ");
        else if (s[i] == 'p' || s[i]=='P')
            printf(".__. ");
        else if (s[i] == 'q' || s[i]=='Q')
            printf("__._ ");
        else if (s[i] == 'r' || s[i]=='R')
            printf("._. ");
        else if (s[i] == 's' || s[i]=='S')
            printf("... ");
        else if (s[i] == 't' || s[i]=='T')
            printf("_ ");
        else if (s[i] == 'u' || s[i]=='U')
            printf(".._ ");
        else if (s[i] == 'v' || s[i]=='V')
            printf("..._ ");
        else if (s[i] == 'w' || s[i]=='W')
            printf(".__ ");
        else if (s[i] == 'x' || s[i]=='X')
            printf("_.._ ");
        else if (s[i] == 'y' || s[i]=='Y')
            printf("_.__ ");
        else if(s[i]=='z' || s[i]=='Z')    
            printf("__.. ");
        else if(s[i]==' ')
            printf(" ");
        else    
            continue;    

    }
    return 0;
}