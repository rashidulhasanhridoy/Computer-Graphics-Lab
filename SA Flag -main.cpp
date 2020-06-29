#include <GL/glut.h>
void init(void)
{
	
	// Set display window colour to white
	glClearColor(0.0, 0.0, 0.0, 0.0);
	// Set projection parameters
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 35.0, 0.0, 20.0);
}

void drawShapes(void)
{
	
	// Clear display window
	glClear(GL_COLOR_BUFFER_BIT);


	//main_box
	
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(0, 20);
		glVertex2i(35, 20);

		glVertex2i(0, 20);
		glVertex2i(0, 0);
		
		glVertex2i(0, 0);
		glVertex2i(35, 0);

		glVertex2i(35, 0);
		glVertex2i(35, 20);

	glEnd();

	//1
	
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex2i(15,6);
		glVertex2i(34,6);

		glVertex2i(15,6);
		glVertex2i(7,1);
		
		glVertex2i(7,1);
		glVertex2i(34,1);

		glVertex2i(34,1);
		glVertex2i(34,6);

	glEnd();

	//2
	
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(7,19);
		glVertex2i(34,19);

		glVertex2i(7,19);
		glVertex2i(15,14);
		
		glVertex2i(15,14);
		glVertex2i(34,14);

		glVertex2i(34,14);
		glVertex2i(34,19);

	glEnd();

	//3
	
	glColor3f(255.0, 215.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(1,17);
		glVertex2i(13,10);

		glVertex2i(13,10);
		glVertex2i(1,3);
		
		glVertex2i(1,3);
		glVertex2i(1,17);


	glEnd();

	//4
	
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(1,15);
		glVertex2i(10,10);

		glVertex2i(10,10);
		glVertex2i(1,5);
		
		glVertex2i(1,5);
		glVertex2i(1,15);


	glEnd();

	//5
	
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(15,13);
		glVertex2i(34,13);

		glVertex2i(34,13);
		glVertex2i(34,7);

		glVertex2i(34,7);
		glVertex2i(15,7);
		
		glVertex2i(15,7);
		glVertex2i(15,13);

	glEnd();

	//6
	
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);
		glVertex2i(13, 10);
		glVertex2i(15, 10);

		glVertex2i(15,10);
		glVertex2i(15,8);

		glVertex2i(15,7);
		glVertex2i(5,1);
		
		glVertex2i(5,1);
		glVertex2i(1,1);

		glVertex2i(1,1);
		glVertex2i(1,3);

		glVertex2i(1,3);
		glVertex2i(13,10);

	glEnd();

	//7
	
	glColor3f(0,0.5,0);
	glBegin(GL_POLYGON);
		glVertex2i(1,19);
		glVertex2i(5,19);

		glVertex2i(5,19);
		glVertex2i(15,13);

		glVertex2i(15,13);
		glVertex2i(15,10);
		
		glVertex2i(15,10);
		glVertex2i(13,10);

		glVertex2i(13,10);
		glVertex2i(1,17);

		glVertex2i(1,17);
		glVertex2i(1,19);

	glEnd();	
	glFlush();
	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(700, 600);					// Set window size
	glutCreateWindow("171-15-8596");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}

