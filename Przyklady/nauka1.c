#include <stdio.h>
int main()

{
int liczba;
printf("Podczaj liczbe wieszka od 0\n");
scanf("%d",&liczba);
switch(liczba)
{
case 5:
    printf("Podano liczbe 1\n");
    break;
    case 2:
    printf("Podano liczbe 2\n");
    break;
    break;
    default:
        printf("Inna liczba nie 1 i nie 2\n");
        break;
}
system("pause");
return 0;
}
