#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void)
{
  glClearColor(0,0,0,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(-80.0, 80.0, -80.0, 80.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void star()
{
     //line
   glColor3f(1,0,0);
   glBegin(GL_LINES);
   glVertex2f(-5,0);
   glVertex2f(5,0);

   glVertex2f(0,5);
   glVertex2f(0,-5);
   glEnd();
   //body
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   glVertex2f(-1,0.2);
   glVertex2f(-2,-2);
   glVertex2f(0,-0.8);

   glVertex2f(2,-2);
    glVertex2f(1.2,0.2);
   glVertex2f(3,1);
   glVertex2f(0.8,1);
   glVertex2f(0,3);
   glVertex2f(-0.6,1);
   glVertex2f(-3,1);

   glEnd();
}
void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   star();
   glTranslatef(5,0,0);
   star();





glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Star");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
