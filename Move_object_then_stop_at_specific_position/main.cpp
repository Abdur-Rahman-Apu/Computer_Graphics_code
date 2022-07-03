
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
float mv=0;
void move()
{

    if(mv<100)
    {
        mv+=0.01;
        glutPostRedisplay();
    }else
    {

    }

}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,1);
    glPushMatrix();
    glTranslatef(mv,0,0);
    circle(15,19,-80,0);
    move();
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
	glutInitWindowSize (1500, 750);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Move object");
	init();
	//glutReshapeFunc(resize);
	glutDisplayFunc(display);

	//glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;
}
