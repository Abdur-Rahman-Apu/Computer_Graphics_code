
#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static GLfloat spin = 0.0;

void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}

void spinDisplay_left(void)
{
   spin = spin + 1;
   if (spin > 360.0)
      spin = spin - 360.0;

    printf("%f\n",spin);
   glutPostRedisplay();
}

void spinDisplay_right(void)
{
   spin = spin - 1;
   if (spin > 360.0)
      spin = spin - 360.0;

    printf("%f\n",spin);
   glutPostRedisplay();
}
void my_keyboard(unsigned char key, int x, int y)
{

	switch (key) {

		case 'l':
			glutIdleFunc(spinDisplay_left);
			break;

		case 'r':
			glutIdleFunc(spinDisplay_right);
			break;


		case 's':
			 glutIdleFunc(NULL);
			 break;

	  default:
			break;
	}
}
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);


     glColor3f(1,0,0);
    glRectf(-10,-80,10,-5);

    glColor3f(1,1,0);
    circle(30,30,0,0);

    glPushMatrix();
    glRotatef(spin,0,0,1);
    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-20,10);
    glVertex2f(-20,-10);
    glVertex2f(-90,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-10,20);
    glVertex2f(10,-20);
    glVertex2f(0,90);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(20,10);
    glVertex2f(20,-10);
    glVertex2f(90,0);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(-10,-20);
    glVertex2f(10,-20);
    glVertex2f(0,-90);
    glEnd();

    glPopMatrix();





	glFlush();
}




void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0,-1.0, 1.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 700);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Chorki");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;
}
