#include <stdio.h>
#include <math.h>

int main () {
	
	int answer1;
	int answer2;
	int answer3;
	int answer4;
	int answer5;
	int answer6;
	int answer7;

	printf ("Please select the shape \n 1-Square\n 2-Circle\n 3-Triangle (30-60-90)\n 4-Regular Hexagon\n 5-Cylnder\n");
	scanf ("%d", &answer1);
	answer1++;
	switch (answer1){

		case 1 :
				printf ("Please write one edge of square\n");
				scanf ("%d", &answer2);
				
				double area;
				double around;

				area = answer2 * answer2;
				around = answer2 * 4;

				printf ("Around of the square is %.0f, area of the square is %.0f.\n ", around, area);

				break;
		case 2 :
				printf ("Please write radius of circle.\n");
				scanf ("%d", &answer3);
			
				double area2;
				double around2;

				area2 = answer3 * answer3 * 3.14;
				around2 = answer3 * 2 * 3.14;

				printf ("Around of the circle is %.1f, area of the circle is %.1f.\n", around2, area2);

				break;
		case 3 :
				printf ("Please write hypotenuse of triangle.\n");
				scanf ("%d", &answer4);
				
				double area3;
				double around3;

				double x = sqrt (3);

				area3 = (answer4 * answer4 * x)/4;
				around3 = answer4 + (answer4 * x)/2 + (answer4 /2);

				printf ("Around of the triangle is %lf, area of the triangle is %lf.\n", around3, area3);

				break;
		case 4 :


				
				printf ("Please write an edge of regular hexagon.\n");
				scanf ("%d", &answer5);
				
				
				double area4;
				double around4;

				double y;
				y = sqrt(3);

				around4 = 6 * answer5;
				area4 = (3 * answer5 * answer5 * x)/2;

				printf ("Around of the regular hexagon is %.0lf, area of the regular hexagon is %lf.\n", around4, area4);

				break;


		case 5 :


				
				printf("Please write radius and height of cylnder respectively.\n");
				scanf ("%d", &answer6);
				scanf ("%d", &answer7);
				
				
				double area5;
				double volume;

				area5 = (2 * 3.14 * answer6 * answer6) + (2 * 3.14 * answer6 * answer7);
				volume = 3.14 * answer6 * answer6 * answer7;

				printf ("Area of the cylnder is %.1lf, volume of the cylnder is %.2lf.\n", area5, volume);
				break;
		default:
			printf ("You must choose a number between 1-5.\n");


	}

	if ((answer1 >= 6) || (answer1 <= 0)) { 
			printf ("You must choose a number between 1-5.\n");
	}


	return 0;
}

