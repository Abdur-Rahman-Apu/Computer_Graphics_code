#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void)
{
  glClearColor(0,0,0,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   //body
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0);
   glVertex2f(0.9,0);
   glVertex2f(0.9,0.5);
   glVertex2f(0.1,0.5);
   glEnd();

   //top
   glColor3f(0,1,0);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.5);
   glVertex2f(0.9,0.5);
   glVertex2f(0.5,0.8);
   glEnd();

   //window

   //left
   glColor3f(1,0,0);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.2);
   glVertex2f(0.3,0.2);
   glVertex2f(0.3,0.3);
   glVertex2f(0.2,0.3);
   glEnd();

   //right
   glColor3f(1,0,0);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.2);
   glVertex2f(0.8,0.2);
   glVertex2f(0.8,0.3);
   glVertex2f(0.7,0.3);
   glEnd();

   //door
   glColor3f(0,0,1);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0);
   glVertex2f(0.6,0);
   glVertex2f(0.6,0.4);
   glVertex2f(0.4,0.4);
   glEnd();


glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("House");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
