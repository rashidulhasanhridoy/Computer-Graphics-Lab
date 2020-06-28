#include <GL/glut.h>


void init(void)
{
	
	// Set display window colour to white
	glClearColor(0.0, 0.0, 0.0, 0.0);
	// Set projection parameters
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}

void drawShapes(void)
{
	
	// Clear display window
	glClear(GL_COLOR_BUFFER_BIT);

	
	//chal
	//Set colour to red
	glColor3f(0.0, 1.0, 0.0);
	// Draw a line
	glBegin(GL_TRIANGLES);
		glVertex2i(100, 200);
		glVertex2i(162.5, 260);
		glVertex2i(225, 200);

	glEnd();



	//main_box
	//Set colour to red
	glColor3f(1.0, 1.0, 1.0);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(100, 200);
		glVertex2i(225, 200);

		glVertex2i(100, 200);
		glVertex2i(100, 50);

		glVertex2i(100, 50);
		glVertex2i(225, 50);

		glVertex2i(225, 50);
		glVertex2i(225, 200);

	glEnd();

	
	//dorja
	//Set colour to red
	glColor3f(0.0, 1.0, 0.0);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(135, 160);
		glVertex2i(190, 160);

		glVertex2i(135, 160);
		glVertex2i(135, 50);

		glVertex2i(135, 50);
		glVertex2i(190, 50);

		glVertex2i(190, 50);
		glVertex2i(190, 160);

	glEnd();

	
	//janala1
	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(105, 105);
		glVertex2i(130, 105);

		glVertex2i(105, 105);
		glVertex2i(105, 75);

		glVertex2i(105, 75);
		glVertex2i(130, 75);

		glVertex2i(130, 75);
		glVertex2i(130, 105);

	glEnd();

	//janala2
	//Set colour to red
	glColor3f(1.0, 0.0, 0.0);
	// Draw a line
	glBegin(GL_POLYGON);
		glVertex2i(195, 105);
		glVertex2i(220, 105);

		glVertex2i(195, 105);
		glVertex2i(195, 75);

		glVertex2i(195, 75);
		glVertex2i(220, 75);

		glVertex2i(220, 75);
		glVertex2i(220, 105);

	glEnd();


	

		
	glFlush();
	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(350, 350);					// Set window size
	glutCreateWindow("An Example OpenGL Program");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);		// Send graphics to display window
	glutMainLoop();					// Display everything and wait

	return 0;
}


