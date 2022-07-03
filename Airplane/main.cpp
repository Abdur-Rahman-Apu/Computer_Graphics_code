
#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
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

void sky()
{
    glColor3ub(189, 195, 199);
    glBegin(GL_POLYGON);
    glVertex2f(-100,40);
    glVertex2f(100,40);
    glVertex2f(100,100);
    glVertex2f(-100,100);
    glEnd();

}
float ma=-55;
void move_plane()
{
    ma+=0.05;
    if(ma>250)
    {
        ma=-55;
    }
    glutPostRedisplay();
}


void window(float x1)
{
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-70+x1+ma,87);
    glVertex2f(-69+x1+ma,87);
    glVertex2f(-69+x1+ma,88);
    glVertex2f(-70+x1+ma,88);
    glEnd();
}
void airplane()
{
    //last_fly
    //1

    glBegin(GL_POLYGON);
    glColor3ub(252, 92, 101);
    glVertex2f(-77+ma,82);
    glVertex2f(-76+ma,82);
    glVertex2f(-72+ma,86);
    glVertex2f(-73+ma,86);
    glEnd();

    //2

    glBegin(GL_POLYGON);
    glColor3ub(252, 92, 101);
    glVertex2f(-73+ma,90);
    glVertex2f(-71+ma,90);
    glVertex2f(-70+ma,93);
    glVertex2f(-71+ma,93);
    glEnd();

    //last_top
    glBegin(GL_POLYGON);
    glColor3ub(254, 211, 48);
    glVertex2f(-73+ma,88);
    glVertex2f(-68+ma,88);
    glVertex2f(-75+ma,95);
    glVertex2f(-77+ma,95);
    glEnd();

    //body
    glBegin(GL_POLYGON);
    glColor3ub(254, 211, 48);
    glVertex2f(-70+ma,83);
    glVertex2f(-55+ma,83);
    glVertex2f(-55+ma,90);
    glVertex2f(-70+ma,90);
    glEnd();

    //window
    for(int i=0;i<=12;i+=2){
            window(i);
    }

    //body_fly
    //top
    glBegin(GL_POLYGON);
    glColor3ub(38, 222, 129);
    glVertex2f(-65+ma,90);
    glVertex2f(-62+ma,90);
    glVertex2f(-66+ma,95);
    glVertex2f(-67+ma,95);
    glEnd();

    //bottom
    glBegin(GL_POLYGON);
    glColor3ub(38, 222, 129);
    glVertex2f(-65+ma,83);
    glVertex2f(-62+ma,83);
    glVertex2f(-66+ma,80);
    glVertex2f(-67+ma,80);
    glEnd();

    //last
    glBegin(GL_POLYGON);
    glColor3ub(254, 211, 48);
    glVertex2f(-75+ma,85.5);
    glVertex2f(-70+ma,83);
    glVertex2f(-70+ma,88);
    glVertex2f(-75+ma,88);
    glEnd();






    //front
    glBegin(GL_TRIANGLES);
    glColor3ub(253, 150, 68);
    glVertex2f(-55+ma,90);
    glVertex2f(-55+ma,83);
    glVertex2f(-50+ma,85);
    glEnd();

    //front_window
    glBegin(GL_POLYGON);
    glColor3f(0,0,0);
    glVertex2f(-56+ma,88);
    glVertex2f(-53+ma,88);
    glVertex2f(-54+ma,89);
    glVertex2f(-56+ma,89);
    glEnd();
}




void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT);

    sky();

    glPushMatrix();
    airplane();
    move_plane();
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
	glutCreateWindow ("Airplane");
	init();
	//glutReshapeFunc(resize);
	glutDisplayFunc(display);


	glutMainLoop();
	return 0;
}
