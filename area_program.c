#include <stdio.h>
#include <math.h>
#include <string.h>

void shape_msg() {
	char str_1;
	printf("What is your shape? The only shapes that work are Triangles,\
 	Rectangles, and Circles\n");
		scanf("%c", str_1);
}

int main(void){

	char str_1;

	printf("Hello! This program will find the area of selceted figrues!\n");
	shape_msg();
		do {
  			printf("That is an invalid input the only shapes that work are Triangl\
        es, Rectangles, and Circles\n");
				shape_msg();
		}
		while(str_1 != "circle", "rectangle", "triangle");

		if (str_1 == "circle") {
				float r;
  			printf("What is the radius?\n");
  			scanf("%f", &r);
				printf("Your radius is:\n%f", (3.14159* (r**2)))
		}
	}
