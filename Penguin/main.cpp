#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
void init(void)
{

    //rgb(186, 220, 88)
  glClearColor(0.73,0.86,0.35,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-20.0, 20.0, -20.0, 20.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

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

void head_circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,0);
    glColor3f(0,0,0);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glColor3f(1,1,1);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();



}

void Draw()
{
     glClear(GL_COLOR_BUFFER_BIT);

     glColor3f(0,0,0);
     glBegin(GL_LINES);
     glVertex2f(-20,0);
     glVertex2f(20,0);

     glVertex2f(0,-20);
     glVertex2f(0,20);
     glEnd();


     //head
     glColor3f(0,0,0);
     circle(9,8.9,0,2);

     //body_inner
     glColor3ub(241, 242, 246);
     circle(8,6.4,0,-1);




     //eye_upper
     glColor3ub(245, 246, 250);
     head_circle(6.9,4.5,0,6);


     //body_upper
     glColor3ub(220, 221, 225);
     circle(8,5.3,0,0);

     //eye_left
     glColor3ub(209, 216, 224);
     circle(2.7,2.5,-2.9,6.8);

     //eye_left_inner
     glColor3f(0,0,0);
     circle(0.8,0.8,-1.2,6.9);

     //eye_left_inner_in
     glColor3f(1,1,1);
     circle(0.3,0.3,-1.4,7);

     //eye_right
     glColor3ub(209, 216, 224);
     circle(3,2.1,2.8,6.8);

     //eye_right_inner
     glColor3f(0,0,0);
     circle(0.6,0.6,0.7,6.9);

     //eye_right_inner_in
     glColor3f(1,1,1);
     circle(0.3,0.3,0.5,6.9);

     //nose
     glColor3ub(254, 211, 48);
     glBegin(GL_TRIANGLES);
     glVertex2f(-3,5.5);
     glVertex2f(3,5.5);
     glVertex2f(0,2.5);
     glEnd();

     //ear_left
     glColor3f(0,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(-12.8,0);
     glVertex2f(-8,0);
     glVertex2f(-8,4);
     glEnd();

     //ear_right
     glColor3f(0,0,0);
     glBegin(GL_TRIANGLES);
     glVertex2f(12.8,0);
     glVertex2f(8,0);
     glVertex2f(8,4);
     glEnd();

     //leg_left
     glColor3ub(119, 140, 163);
     circle(3.8,1.4,-3.8,-6.8);
     glColor3ub(254, 211, 48);
     circle(4.7,1.5,-5,-7.1);

     //leg_right
     glColor3ub(119, 140, 163);
     circle(3.8,1.4,4.7,-6.8);
     glColor3ub(254, 211, 48);
     circle(4.7,1.5,6,-6.9);






     glFlush();


glutSwapBuffers();
}

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(350,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Lab Final");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
