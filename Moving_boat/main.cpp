#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>

float mv=0;

void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0, 300, 300, 0, -1, 1);
  glOrtho(0,1500,0,700,-150,150); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void rectangle(int x, int y)
{
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glVertex2f(x+20,y);
    glVertex2f(x+20,y+100);
    glVertex2f(x,y+100);
    glEnd();

}

void trapezium(int x,int y)
{
    glBegin(GL_QUADS);
    glVertex2f(x,y);
    glVertex2f(x+200,y);
    glVertex2f(x+150,y-50);
    glVertex2f(x+55,y-50);
    glEnd();
}

void move(float t)
{

   mv=mv+t;
   if(mv>1500)
   {
       mv=-200;
   }
glutPostRedisplay();
}


void boat_make()
{


    glColor3f(1,0,0);
    trapezium(0,350);

    glColor3f(1,0,1);
    glBegin(GL_POLYGON);
    rectangle(150,350);

    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(150,450);
    glVertex2f(150,400);
    glVertex2f(100,425);
    glEnd();
}


void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(mv,0,0);
    boat_make();
    move(.2);
    glPopMatrix();

    glFlush();






glutSwapBuffers();
}


int main(int argc,char **argv){

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,700);
    glutCreateWindow("Moving boat");
    init();
    glutDisplayFunc(Draw);

    glutMainLoop();
    return 0;
}
