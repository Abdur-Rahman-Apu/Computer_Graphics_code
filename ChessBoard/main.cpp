#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
void init(void)
{
  glClearColor(0,1,0,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  //gluOrtho2D(0.0,300.0,0.0,300.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}


void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);

   //1st row
   //1
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.1);
   glVertex2f(0.2,0.1);
   glVertex2f(0.2,0.2);
   glVertex2f(0.1,0.2);
   glEnd();


   //2
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.1);
   glVertex2f(0.3,0.1);
   glVertex2f(0.3,0.2);
   glVertex2f(0.2,0.2);
   glEnd();

   //3
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.1);
   glVertex2f(0.4,0.1);
   glVertex2f(0.4,0.2);
   glVertex2f(0.3,0.2);
   glEnd();

   //4
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.1);
   glVertex2f(0.5,0.1);
   glVertex2f(0.5,0.2);
   glVertex2f(0.4,0.2);
   glEnd();

   //5
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.1);
   glVertex2f(0.6,0.1);
   glVertex2f(0.6,0.2);
   glVertex2f(0.5,0.2);
   glEnd();

   //6
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.1);
   glVertex2f(0.7,0.1);
   glVertex2f(0.7,0.2);
   glVertex2f(0.6,0.2);
   glEnd();

   //7
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.1);
   glVertex2f(0.8,0.1);
   glVertex2f(0.8,0.2);
   glVertex2f(0.7,0.2);
   glEnd();

   //8
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.1);
   glVertex2f(0.9,0.1);
   glVertex2f(0.9,0.2);
   glVertex2f(0.8,0.2);
   glEnd();

   //2nd row
   //1
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.2);
   glVertex2f(0.2,0.2);
   glVertex2f(0.2,0.3);
   glVertex2f(0.1,0.3);
   glEnd();


   //2
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.2);
   glVertex2f(0.3,0.2);
   glVertex2f(0.3,0.3);
   glVertex2f(0.2,0.3);
   glEnd();

   //3
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.2);
   glVertex2f(0.4,0.2);
   glVertex2f(0.4,0.3);
   glVertex2f(0.3,0.3);
   glEnd();

   //4
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.2);
   glVertex2f(0.5,0.2);
   glVertex2f(0.5,0.3);
   glVertex2f(0.4,0.3);
   glEnd();

   //5
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.2);
   glVertex2f(0.6,0.2);
   glVertex2f(0.6,0.3);
   glVertex2f(0.5,0.3);
   glEnd();

   //6
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.2);
   glVertex2f(0.7,0.2);
   glVertex2f(0.7,0.3);
   glVertex2f(0.6,0.3);
   glEnd();

   //7
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.2);
   glVertex2f(0.8,0.2);
   glVertex2f(0.8,0.3);
   glVertex2f(0.7,0.3);
   glEnd();

   //8
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.2);
   glVertex2f(0.9,0.2);
   glVertex2f(0.9,0.3);
   glVertex2f(0.8,0.3);
   glEnd();

   //3rd
   //1
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.3);
   glVertex2f(0.2,0.3);
   glVertex2f(0.2,0.4);
   glVertex2f(0.1,0.4);
   glEnd();


   //2
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.3);
   glVertex2f(0.3,0.3);
   glVertex2f(0.3,0.4);
   glVertex2f(0.2,0.4);
   glEnd();

   //3
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.3);
   glVertex2f(0.4,0.3);
   glVertex2f(0.4,0.4);
   glVertex2f(0.3,0.4);
   glEnd();

   //4
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.3);
   glVertex2f(0.5,0.3);
   glVertex2f(0.5,0.4);
   glVertex2f(0.4,0.4);
   glEnd();

   //5
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.3);
   glVertex2f(0.6,0.3);
   glVertex2f(0.6,0.4);
   glVertex2f(0.5,0.4);
   glEnd();

   //6
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.3);
   glVertex2f(0.7,0.3);
   glVertex2f(0.7,0.4);
   glVertex2f(0.6,0.4);
   glEnd();

   //7
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.3);
   glVertex2f(0.8,0.3);
   glVertex2f(0.8,0.4);
   glVertex2f(0.7,0.4);
   glEnd();

   //8
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.3);
   glVertex2f(0.9,0.3);
   glVertex2f(0.9,0.4);
   glVertex2f(0.8,0.4);
   glEnd();

   //4th row

   //1
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.4);
   glVertex2f(0.2,0.4);
   glVertex2f(0.2,0.5);
   glVertex2f(0.1,0.5);
   glEnd();

   //2
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.4);
   glVertex2f(0.3,0.4);
   glVertex2f(0.3,0.5);
   glVertex2f(0.2,0.5);
   glEnd();

   //3
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.4);
   glVertex2f(0.4,0.4);
   glVertex2f(0.4,0.5);
   glVertex2f(0.3,0.5);
   glEnd();

   //4
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.4);
   glVertex2f(0.5,0.4);
   glVertex2f(0.5,0.5);
   glVertex2f(0.4,0.5);
   glEnd();

   //5
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.4);
   glVertex2f(0.6,0.4);
   glVertex2f(0.6,0.5);
   glVertex2f(0.5,0.5);
   glEnd();

   //6
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.4);
   glVertex2f(0.7,0.4);
   glVertex2f(0.7,0.5);
   glVertex2f(0.6,0.5);
   glEnd();

   //7
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.4);
   glVertex2f(0.8,0.4);
   glVertex2f(0.8,0.5);
   glVertex2f(0.7,0.5);
   glEnd();

   //8
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.4);
   glVertex2f(0.9,0.4);
   glVertex2f(0.9,0.5);
   glVertex2f(0.8,0.5);
   glEnd();

   //5th row
   //1
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.5);
   glVertex2f(0.2,0.5);
   glVertex2f(0.2,0.6);
   glVertex2f(0.1,0.6);
   glEnd();


   //2
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.5);
   glVertex2f(0.3,0.5);
   glVertex2f(0.3,0.6);
   glVertex2f(0.2,0.6);
   glEnd();

   //3
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.5);
   glVertex2f(0.4,0.5);
   glVertex2f(0.4,0.6);
   glVertex2f(0.3,0.6);
   glEnd();

   //4
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.5);
   glVertex2f(0.5,0.5);
   glVertex2f(0.5,0.6);
   glVertex2f(0.4,0.6);
   glEnd();

   //5
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.5);
   glVertex2f(0.6,0.5);
   glVertex2f(0.6,0.6);
   glVertex2f(0.5,0.6);
   glEnd();

   //6
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.5);
   glVertex2f(0.7,0.5);
   glVertex2f(0.7,0.6);
   glVertex2f(0.6,0.6);
   glEnd();

   //7
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.5);
   glVertex2f(0.8,0.5);
   glVertex2f(0.8,0.6);
   glVertex2f(0.7,0.6);
   glEnd();

   //8
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.5);
   glVertex2f(0.9,0.5);
   glVertex2f(0.9,0.6);
   glVertex2f(0.8,0.6);
   glEnd();

   //6th row
   //1
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.6);
   glVertex2f(0.2,0.6);
   glVertex2f(0.2,0.7);
   glVertex2f(0.1,0.7);
   glEnd();

   //2
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.6);
   glVertex2f(0.3,0.6);
   glVertex2f(0.3,0.7);
   glVertex2f(0.2,0.7);
   glEnd();

   //3
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.6);
   glVertex2f(0.4,0.6);
   glVertex2f(0.4,0.7);
   glVertex2f(0.3,0.7);
   glEnd();

   //4
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.6);
   glVertex2f(0.5,0.6);
   glVertex2f(0.5,0.7);
   glVertex2f(0.4,0.7);
   glEnd();

   //5
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.6);
   glVertex2f(0.6,0.6);
   glVertex2f(0.6,0.7);
   glVertex2f(0.5,0.7);
   glEnd();

   //6
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.6);
   glVertex2f(0.7,0.6);
   glVertex2f(0.7,0.7);
   glVertex2f(0.6,0.7);
   glEnd();

   //7
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.6);
   glVertex2f(0.8,0.6);
   glVertex2f(0.8,0.7);
   glVertex2f(0.7,0.7);
   glEnd();

   //8
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.6);
   glVertex2f(0.9,0.6);
   glVertex2f(0.9,0.7);
   glVertex2f(0.8,0.7);
   glEnd();

   //7th row
   //1
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.7);
   glVertex2f(0.2,0.7);
   glVertex2f(0.2,0.8);
   glVertex2f(0.1,0.8);
   glEnd();


   //2
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.7);
   glVertex2f(0.3,0.7);
   glVertex2f(0.3,0.8);
   glVertex2f(0.2,0.8);
   glEnd();

   //3
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.7);
   glVertex2f(0.4,0.7);
   glVertex2f(0.4,0.8);
   glVertex2f(0.3,0.8);
   glEnd();

   //4
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.7);
   glVertex2f(0.5,0.7);
   glVertex2f(0.5,0.8);
   glVertex2f(0.4,0.8);
   glEnd();

   //5
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.7);
   glVertex2f(0.6,0.7);
   glVertex2f(0.6,0.8);
   glVertex2f(0.5,0.8);
   glEnd();

   //6
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.7);
   glVertex2f(0.7,0.7);
   glVertex2f(0.7,0.8);
   glVertex2f(0.6,0.8);
   glEnd();

   //7
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.7);
   glVertex2f(0.8,0.7);
   glVertex2f(0.8,0.8);
   glVertex2f(0.7,0.8);
   glEnd();

   //8
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.7);
   glVertex2f(0.9,0.7);
   glVertex2f(0.9,0.8);
   glVertex2f(0.8,0.8);
   glEnd();


   //8th row
   //1
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.1,0.8);
   glVertex2f(0.2,0.8);
   glVertex2f(0.2,0.9);
   glVertex2f(0.1,0.9);
   glEnd();

   //2
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.2,0.8);
   glVertex2f(0.3,0.8);
   glVertex2f(0.3,0.9);
   glVertex2f(0.2,0.9);
   glEnd();

   //3
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.3,0.8);
   glVertex2f(0.4,0.8);
   glVertex2f(0.4,0.9);
   glVertex2f(0.3,0.9);
   glEnd();

   //4
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.4,0.8);
   glVertex2f(0.5,0.8);
   glVertex2f(0.5,0.9);
   glVertex2f(0.4,0.9);
   glEnd();

   //5
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.5,0.8);
   glVertex2f(0.6,0.8);
   glVertex2f(0.6,0.9);
   glVertex2f(0.5,0.9);
   glEnd();

   //6
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.6,0.8);
   glVertex2f(0.7,0.8);
   glVertex2f(0.7,0.9);
   glVertex2f(0.6,0.9);
   glEnd();

   //7
   glColor3f( 255 ,255, 255);
   glBegin(GL_POLYGON);
   glVertex2f(0.7,0.8);
   glVertex2f(0.8,0.8);
   glVertex2f(0.8,0.9);
   glVertex2f(0.7,0.9);
   glEnd();

   //8
   glColor3f( 0 ,0, 0);
   glBegin(GL_POLYGON);
   glVertex2f(0.8,0.8);
   glVertex2f(0.9,0.8);
   glVertex2f(0.9,0.9);
   glVertex2f(0.8,0.9);
   glEnd();

// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){


    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Chess Board");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
