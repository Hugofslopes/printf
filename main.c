/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:01:25 by hfilipe-          #+#    #+#             */
/*   Updated: 2024/11/24 12:10:09 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "colors.h"
#include <string.h>

char *ola = "asd";
int X = 0xff;
unsigned int u = -10;
unsigned int u2 = 2147483649;
const char	c = '5';
int		a = c - 48;
char *b;

int getTerminalWidth() {
    int width = 80; 
    FILE *fp = popen("tput cols", "r");
    if (fp) 
	{
        fscanf(fp, "%d", &width);
        pclose(fp);
    }
    return width;
}

void centerText(const char *text) {
    int terminalWidth = getTerminalWidth();
    int textLength = strlen(text);
    int spaces = (terminalWidth - textLength) / 2;
    for (int i = 0; i < spaces; i++) 
	{
        putchar(' ');
    }
    printf(BG_BLUE BOLD"%s", text);
	putchar('\n'); 
	fflush(stdout);
	puts(RESET" ");
}

void decimal(void)
{
	char text[] = "DECIMAL";
	centerText(text);

	puts(BG_WHITE BLUE"TEST NUMBER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%d", 345));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%d", 345));
	puts("\n");
	
	puts(BG_WHITE BLUE"BIG NUMBER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%d", 2147483647));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%d", 2147483647));
	puts("\n");

	puts(BG_WHITE BLUE"TEST DECIMAL"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%d", a));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%d", a));
	puts("\n");

	puts(BG_WHITE BLUE"TEST DASH"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%-5d", a));
	puts (" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%-5d", a));
	puts ("\n");

	puts(BG_WHITE BLUE"TEST SPACE WITH NUMBER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%05d", a));
	puts (" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%05d", a));
	puts ("\n");

	puts(BG_WHITE BLUE"TEST PLUS SIGN WITH POSITIVE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%+d", 1));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%+d", 1));
	puts ("\n");

	puts(BG_WHITE BLUE"TEST PLUS SIGN WITH NEGATIVE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%+d", -1));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%+d", -1));
	puts ("\n");
}
void unsigneds(void)
{
	char text[] = "UNSIGNED";
	centerText(text);

	puts(BG_WHITE BLUE"TEST NEGATIVE UNSIGNED"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%u",u));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%u",u));
	puts("\n");

	puts(BG_WHITE BLUE"TEST UNSIGNED"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%u",u2));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%u",u2));
	puts("\n");

	puts(BG_WHITE BLUE"FIELD WITH UNSIGNED"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%12u", u));		
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%12u", u));
	puts("\n");
}
void l_hexa(void)
{
	char text[] = "LOWERCASE HEXA";
	centerText(text);

	puts(BG_WHITE BLUE"TEST HEXA L_CASE WITH #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%#x",X));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%#x",X));
	puts("\n");

	puts(BG_WHITE BLUE"TEST HEXA L_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%x",X));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%x",X));
	puts("\n");

	puts(BG_WHITE BLUE"FIELD WITH HEXA"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%10x", 0x123));
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%10x", 0x123));				
	puts("\n");
}
void u_hexa(void)
{
	char text[] = "UPPERCASE HEXA";
	centerText(text);

	puts(BG_WHITE BLUE"TEST HEXA U_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%#X",X));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%#X",X));
	puts("\n");

	puts(BG_WHITE BLUE"TEST HEXA U_CASE WITHOUT #"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%X",X));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%X",X));
	puts("\n");
}

void percentage(void)
{
	char text[] = "PERCENTAGE";
	centerText(text);
	
	puts(BG_WHITE BLUE"TEST %%"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%%"));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%%"));
	puts("\n");
}
void chars(void)
{
	char text[] = "CHARACTERS";
	centerText(text);
	
	puts(BG_WHITE BLUE"CHAR"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%c", 'a'));
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%c", 'a'));
	puts ("\n");

	puts(BG_WHITE BLUE"FIELD SIZE 7 WITH CHAR"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%7c", 'a'));
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%7c", 'a'));
	puts ("\n");
}
void strs(void)
{
	b = NULL;

	char text[] = "STRINGS";
	centerText(text);

	puts(BG_WHITE BLUE"TEST STRING"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%s",ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%s",ola));
	puts("\n");

	puts(BG_WHITE BLUE"TEST STRING WITH TEXT AFTER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%sola",ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d",printf("\t%sola",ola));
	puts("\n");

	puts(BG_WHITE BLUE"TEST STRING WITH TEXT BEFORE"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\tola%s",ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\tola%s",ola));
	puts("\n");

	puts(BG_WHITE BLUE"TEST DOT WITH STR (5 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%.5s", ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%.5s", ola));
	puts ("\n");

	puts(BG_WHITE BLUE"TEST DOT WITH STR (2 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%.2s", ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%.2s", ola));
	puts ("\n");

	puts(BG_WHITE BLUE"TEST DOT WITH STR (0 CHAR)"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%.0s", ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%.0s", ola));
	puts ("\n");

	puts(BG_WHITE BLUE"FIELD SIZE 7 WITH STR"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%7s", "ola"));
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%7s", "ola"));			
	puts("\n");

	puts(BG_WHITE BLUE"FIELD SIZE 7 WITH STR"RESET);
	ft_printf(MAGENTA"FT_PRINTF- \t"RESET);
	ft_printf("\t%d", ft_printf("%7.2s", "ola"));
	puts(" ");
	printf(CYAN"PRINTF- \t"RESET);
	printf("\t%d", printf("%7.2s", "ola"));			
	puts("\n");

	puts(BG_WHITE BLUE"TEST NULL STR"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%s",b));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%s",b));
	puts("\n");

}
void pointer(void)
{
	b = NULL;
	
	char text[] = "POINTER";
	centerText(text);

	puts(BG_WHITE BLUE"TEST POINTER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%p",ola));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%p",ola));
	puts("\n");

	puts(BG_WHITE BLUE"TEST NULL POINTER"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%p",b));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%p",b));
	puts("\n");
}

int	main(void)
{
	decimal();
	unsigneds();
	l_hexa();
	u_hexa();
	percentage();
	chars();
	strs();
	pointer();

	puts(BG_WHITE BLUE"TEST ONE STRING, ONE INTEGER, ONE HEXA, ONE POINTER, ONE UNSIGNED INT"RESET);
	ft_printf(MAGENTA"FT_PRINTF- "RESET);
	ft_printf("\t%d", ft_printf("\t%s %d %x %X %p %u",ola, -1, 0xab, 0xab, ola, u));
	puts(" ");
	printf(CYAN"PRINTF- "RESET);
	printf("\t%d", printf("\t%s %d %x %X %p %u",ola, -1, 0xab, 0xab, ola, u));
	puts ("\n");
}