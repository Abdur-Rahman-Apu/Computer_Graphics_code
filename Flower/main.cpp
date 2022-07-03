
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

/*
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
*/

float tx=10,ty=0,l=0;
int flag=0,i=0;
void move_full(int value)
{

    if(i<2 && flag==0)
    {
        tx+=2;
        l+=2;
        i++;
        _sleep(1000);
        if(i==2)
        {
            flag=1;
        }
    }else if(i>0 && flag==1){
        tx-=2;
        l-=2;
        i--;
        _sleep(1000);
        if(i==0)
        {
            flag=0;
        }
    }
    glutTimerFunc(60000,move_full,1);
    glutPostRedisplay();



}
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glColor3f(0,1,0);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(0,-60);
    glVertex2f(l,0);
    glEnd();
    glPopMatrix();



    glPushMatrix();

    glColor3f(1,1,0);
    circle(18,10,tx,ty);
    circle(9,18,tx-10,ty+20);
    circle(18,9,tx-20,ty);
    circle(9,18,tx-10,ty-18);
    glColor3f(1,0,0);
    circle(10,10,tx-10,ty);
    move_full(60000);
    glPopMatrix();



	glFlush();
}




void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-100.0, 100.0, -100.0, 100.0,-1.0, 1.0);
}
void resize(int w, int h)
{
   glViewport(0, 0, (GLsizei)w, (GLsizei)h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glFrustum(-5.0, 5.0, -5.0, 5.0, 5.0, 100.0);

   glMatrixMode(GL_MODELVIEW);
}
int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 700);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Flower");
	init();
	//glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutTimerFunc(60000,move_full,1);
	//glutKeyboardFunc(my_keyboard);
	glutMainLoop();
	return 0;
}
