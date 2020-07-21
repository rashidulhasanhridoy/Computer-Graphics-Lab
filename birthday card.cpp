#include <GL/glut.h>
void init(void)
{
	
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 30.0, 0.0, 20.0);
}

void monisha(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0, 0, 0);
        glVertex3f(5, 10, 0);
        glVertex3f(0, 20, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(30, 0, 0);
        glVertex3f(25, 10, 0);
        glVertex3f(30, 20, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(0, 20, 0);
        glVertex3f(15, 15, 0);
        glVertex3f(30, 20, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(0, 20, 0);
        glVertex3f(15, 15, 0);
        glVertex3f(5, 10, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(25, 10, 0);
        glVertex3f(15, 15, 0);
        glVertex3f(30, 20, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(11, 0, 0);
        glVertex3f(15, 0, 0);
        glVertex3f(13, 2, 0);
        glEnd();

	glBegin(GL_TRIANGLES);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(19, 0, 0);
        glVertex3f(15, 0, 0);
        glVertex3f(17, 2, 0);
        glEnd();

	glBegin(GL_QUADS);
        glColor3f(1.0, 0.0, 0.0);
        glVertex3f(15, 0, 0);
        glVertex3f(13, 2, 0);
        glVertex3f(15, 4, 0);
	glVertex3f(17, 2, 0);
        glEnd();

	glBegin(GL_LINES);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(15, 4, 0);
        glVertex3f(15, 7, 0);
        glEnd();

	glBegin(GL_QUADS);
        glColor3f(0.0, 0.5, 0.0);
        glVertex3f(15, 7, 0);
        glVertex3f(14, 9, 0);
        glVertex3f(15, 11, 0);
	glVertex3f(16, 9, 0);
        glEnd();

	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	
	glutInitWindowPosition(100, 100);				
	glutInitWindowSize(700, 600);					
	glutCreateWindow("171-15-8597");	
	init();							
	glutDisplayFunc(monisha);		
	glutMainLoop();					
	return 0;
}

