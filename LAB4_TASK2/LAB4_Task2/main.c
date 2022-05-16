/*******************************************************************************************
* Programmer: Elijah Lin                                                                  *
* Class: CptS 121, Fall 2021; Lab Section 13                                              *
* Programming Assignment: PA3                                                             *
* Date: September 22, 2021                                                                *
* Description: This program does a lot of random things                                   *
*******************************************************************************************/

#include "equations.h"

int main(void)
{
	char tf1, tf2, tf3, tf4, tf5, tf6, tf7 = 0;
	printf("Did you get an All-Star Game appearance? \n");
	scanf("%c", &tf1);

	printf("Were you the regular season MVP? \n");
	scanf(" %c", &tf2);

	printf("Did you get a World Series MVP? \n");
	scanf(" %c", &tf3);

	printf("Did you get the Gold Glove award? \n");
	scanf(" %c", &tf4);

	printf("Did you get the Silver Slugger award? \n");
	scanf(" %c", &tf5);

	printf("Were you the Home Run champ? \n");
	scanf(" %c", &tf6);

	printf("Were you the Batting average champ? \n");
	scanf(" %c", &tf7);

	double total_bonus = calculate_total_bonus(tf1, tf2, tf3, tf4, tf5, tf6, tf7);
	printf("%lf", total_bonus);


	
	return 0;
}
