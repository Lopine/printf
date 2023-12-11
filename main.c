#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    //Mod Check
    printf("Test 1\t\t: Mod Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: %%\n");
    printf("Output\t\t: ");
    int mine = printf("%%\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: %%\n");
    ft_printf("Output\t\t: ");
    int his = ft_printf("%%\n\n");

    if (mine != his)
        printf("KO");

    //String Format Check
    printf("Test 2\t\t: String Format Check\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: This is a test string.\n");
    printf("Output\t\t: ");
    printf("This is a test string.\n\n");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: This is a test string.\n");
    ft_printf("Output\t\t: ");
    ft_printf("This is a test string.\n\n");

    //Specifier d check
    printf("Test 3\t\t: d\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", 650);

    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%d\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%d\n\n", -650);

    //Specifier u check
    printf("Test 17\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 650);

    //Specifier u check
    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 4000000000\n");
    printf("Output\t\t: ");
    printf("%u\n\n", 4000000000);
    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 4000000000\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", 4000000000);

    //Specifier u check
    printf("Test 18\t\t: u\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: -650\n");
    printf("Output\t\t: ");
    printf("%u\n\n", -650);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: -650\n");
    ft_printf("Output\t\t: ");
    ft_printf("%u\n\n", -650);

    //Specifier s check
    printf("Test 21\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: N/A\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: N/A\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "");

    //Specifier s check
    printf("Test 22\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: NULL\n");
    printf("Output\t\t: ");
    printf("%s\n\n", NULL);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: NULL\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", NULL);

    //Specifier s check
    printf("Test 24\t\t: s\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: Coconut\n");
    printf("Output\t\t: ");
    printf("%s\n\n", "Coconut");

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: Coconut\n");
    ft_printf("Output\t\t: ");
    ft_printf("%s\n\n", "Coconut");

    //Specifier c check
    printf("Test 30\t\t: c\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: a\n");
    printf("Output\t\t: ");
    printf("%c\n\n", 'a');

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: a\n");
    ft_printf("Output\t\t: ");
    ft_printf("%c\n\n", 'a');

    //Specifier x check
    printf("Test 50\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16);

    //Specifier x check
    printf("Test 51\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 2048\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 2048);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 2048\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 2048);

    //Specifier x check
    printf("Test 52\t\t: x\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 16777215\n");
    printf("Output\t\t: ");
    printf("%x\n\n", 16777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 16777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%x\n\n", 16777215);

    //Specifier X check
    printf("Test 53\t\t: X\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: 6777215\n");
    printf("Output\t\t: ");
    printf("%X\n\n", 6777215);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: 6777215\n");
    ft_printf("Output\t\t: ");
    ft_printf("%X\n\n", 6777215);

    int     tmpInt;

    tmpInt = 25;
    //Specifier p check
    printf("Test 58\t\t: p\n\n");
    printf("Function\t: Printf\n");
    printf("Input\t\t: &tmpInt\n");
    printf("Output\t\t: ");
    printf("%p\n\n", &tmpInt);

    ft_printf("Function\t: ft_printf\n");
    ft_printf("Input\t\t: &tmpInt\n");
    ft_printf("Output\t\t: ");
    ft_printf("%p\n\n", &tmpInt);

    return (0);
    
}