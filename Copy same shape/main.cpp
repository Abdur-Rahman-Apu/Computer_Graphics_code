#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);

   //x_axis line
   glColor3ub( 0 ,0, 0);
   glBegin(GL_LINES);
   glVertex2f(-1,0);
   glVertex2f(1,0);
   glEnd();

   //y_axis line
   glColor3f( 0 ,0, 0);
   glBegin(GL_LINES);
   glVertex2f(0,-1);
   glVertex2f(0,1);
   glEnd();

   //draw an object
   glColor3ub(46, 204, 113);
   glBegin(GL_TRIANGLES);
   glVertex2f(0.2f,0.2f);
   glVertex2f(0.4f,0.0f);
   glVertex2f(0.0f,0.0f);
   glEnd();



   glTranslatef(.1,.2,0); //it will increase x and y value

   //draw another triangle
   glColor3ub(52, 152, 219);
   glBegin(GL_TRIANGLES);
   glVertex2f(0.2f,0.2f);
   glVertex2f(0.4f,0.0f);
   glVertex2f(0.0f,0.0f);
   glEnd();

   glLoadIdentity();



glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Copy same shape");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
