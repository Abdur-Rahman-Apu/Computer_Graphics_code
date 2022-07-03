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

//moving cloud
void move(GLfloat t)
{

    if(mv<=1600)
    {
        mv=mv+t;
    }else{
        mv=-100;

    }
    glutPostRedisplay();
}








void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);

   glPushMatrix();
   glTranslatef(mv,0,0);
   circle(30,30,100,350);
   glPopMatrix();
   move(.4);

   glFlush();

// Write your Code


glutSwapBuffers();
}

int main(int argc,char **argv){

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1500,700);
    glutCreateWindow("Moving objects");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
