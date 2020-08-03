#include <GL/glut.h>
#include <math.h>
void init(void)
{
	
	// Set display window colour to white
	glClearColor(0.0, 0.0, 0.0, 0.0);
	// Set projection parameters
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 25.0, 0.0, 21.0);
}

void rashidul(void)
{
	
	
// Clear display window
	glClear(GL_COLOR_BUFFER_BIT);
	
	float theta;
    	int i;

	//main_box
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(0, 0);
		glVertex2i(0, 21);
		glVertex2i(25, 21);
		glVertex2i(25, 0);
	glEnd();

	//second_box
	glColor3f(1, 1, 1);
	glBegin(GL_QUADS);
		glVertex2i(1, 1);
		glVertex2i(1, 20);
		glVertex2i(23, 20);
		glVertex2i(23, 1);
	glEnd();

	//apple
	//main
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/50;
	  glVertex2f(12.5+6.25*cos(theta),8.5+7.25*sin(theta));
	}
	glEnd();
	//1
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(19.0+3.5*cos(theta),10+3.5*sin(theta));
	}
	glEnd();
	//2
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(12.5+2*cos(theta),16.0+1*sin(theta));
	}
	glEnd();

	//3
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
	for(i=45;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(12+0.55*cos(theta),18.0+1.7*sin(theta));
	}
	glEnd();

	//4
	glColor3f(1,1,1);
	glBegin(GL_POLYGON);
	for(i=45;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(12.5+3*cos(theta),1.3+0.9*sin(theta));
	}
	glEnd();

	//down
	glColor3f(0, 0, 0);
	glBegin(GL_QUADS);
		glVertex2i(0, 0);
		glVertex2i(0, 1);
		glVertex2i(25, 1);
		glVertex2i(25, 0);
	glEnd();

	
	glFlush();
	// Process all OpenGL routines
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);				
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(100, 100);	
	glutInitWindowSize(600, 600);		
	glutCreateWindow("171-15-8596");
	init();
	glutDisplayFunc(rashidul);
	glutMainLoop();
	return 0;
}
