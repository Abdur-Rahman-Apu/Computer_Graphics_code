#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void)
{
  glClearColor(0,0,0,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0, 100, 0, 100, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
     //1st star

   //1
   glColor3f( 0 ,0, 1);
   glBegin(GL_POLYGON);

   glVertex2f(53,42);
   glVertex2f(56,34);
   glVertex2f(59,42);
   glVertex2f(67,45);
   glVertex2f(59,48);
   glVertex2f(56,56);
   glVertex2f(53,48);
   glVertex2f(45,45);
   glEnd();


   //2
   glColor3f( 1 ,1, 1);
   glBegin(GL_POLYGON);

   glVertex2f(64,53);
   glVertex2f(67,45);
   glVertex2f(70,53);
   glVertex2f(78,56);
   glVertex2f(70,59);
   glVertex2f(67,67);
   glVertex2f(64,59);
   glVertex2f(56,56);
   glEnd();

   //3
   glColor3f( 0 ,1, 0);
   glBegin(GL_POLYGON);

   glVertex2f(53,64);
   glVertex2f(56,56);
   glVertex2f(59,64);
   glVertex2f(67,67);
   glVertex2f(59,70);
   glVertex2f(56,78);
   glVertex2f(53,70);
   glVertex2f(45,67);
   glEnd();

   //4
   glColor3f( 1 ,0, 0);
   glBegin(GL_POLYGON);

   glVertex2f(42,53);
   glVertex2f(45,45);
   glVertex2f(48,53);
   glVertex2f(56,56);
   glVertex2f(48,59);
   glVertex2f(45,67);
   glVertex2f(42,59);
   glVertex2f(34,56);
   glEnd();



// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("STAR");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
