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
   if (spin < -360.0)
      spin = spin + 360.0;

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

    glPushMatrix();
    glRotatef(spin,0,0,1);
    glColor3f(0,1,0);
    glRectf(-7,-1,7,1);

    glColor3f(0,0,1);
    glRectf(-8,-2,-4,2);

    glColor3f(0,0,1);
    glRectf(4,-2,8,2);


    glPopMatrix();

    glColor3f(1,0,0);
    glRectf(-2,-10,2,2);








	glFlush();
}
static float	tx	=  0.0;
static float	ty	=  0.0;
void spe_key(int key, int x, int y)
{

	switch (key) {

		case GLUT_KEY_LEFT:

			spinDisplay_left();
			break;

		case GLUT_KEY_RIGHT:

			spinDisplay_right();
			break;

		case GLUT_KEY_UP:

			spinDisplay_left();
			break;

		case GLUT_KEY_DOWN:
            spinDisplay_right();
			break;

	  default:
			break;
	}
}


void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
            glutIdleFunc(spinDisplay_left);
         break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutIdleFunc(spinDisplay_right);
         break;
      default:
         break;
   }
}

void init(void)
{
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glOrtho(-10.0, 10.0, -10.0, 10.0,-1.0, 1.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (0,0);
	glutCreateWindow ("Chorki");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(my_keyboard);
	glutSpecialFunc(spe_key);
	glutMouseFunc(my_mouse);
	glutMainLoop();
	return 0;
}
