#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<Math.h>
int r,pk,x,y;
void init(void)
{
  glClearColor(1.0,1.0,1.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(-5.0,5.0,-5.0,5.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}
//int r,pk,x,y;
void show(int x,int y){
    glVertex2f(x,y);
    glVertex2f(y,x);
    glVertex2f(-x,y);
    glVertex2f(-y,x);
    glVertex2f(-x,-y);
    glVertex2f(-y,-x);
    glVertex2f(x,-y);
    glVertex2f(y,-x);

}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
     glColor3f(0,0,0);
    glVertex2f(cx,cy);

    for(int i=0;i<=25;i++)

    {
        float angle = 2.0f * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glColor3f(0,0,0);
         glColor3f(0, 0, 1);
        glVertex2f((x+cx),(y+cy));

    }
    glEnd();



}

void DrawCircle(float cx, float cy, float r, int num_segments) {
    glBegin(GL_LINES);
    for (int ii = 0; ii < num_segments; ii++)   {
        if(ii<=25)
        {
            float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle
            float x = r * cosf(theta);//calculate the x component
            float y = r * sinf(theta);//calculate the y component
            glVertex2f(x + cx, y + cy);
        }
        if(ii>=75)
        {
            float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);//get the current angle
            float x = r * cosf(theta);//calculate the x component
            float y = r * sinf(theta);//calculate the y component


            glVertex2f(x + cx, y + cy);

        }

        }
glEnd();
    }


void bresenham(int x1,int y1,int x2,int y2)
{
    int dy=abs(y2-y1);
    int dx=abs(x2-x1);
    int p=(2*dy)-dx;
   int x=x1,y=y1;
   glVertex2f(x,y);
   int prev=0;
   int steps=max(dy,dx);
   int i=0;
   while(i<steps){
       printf("steps i:%d\n",i);
        prev=p;
        if(p<0){

            x=x+1;
            y=y;
            glVertex2f(x,y);
            printf("p= %d  and x= %d and y=%d \n",p,x,y);
            p=prev+(2*dy);
        }else if(p>=0){
            x=x+1;
            y=y+1;
            glVertex2f(x,y);
            printf("p= %d  and x= %d and y=%d \n",p,x,y);
            p=prev+(2*dy)-(2*dx);
        }
        i++;
    }
    glVertex2f(x,y);
}

void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);

   glBegin(GL_LINES);
   glVertex2f(-5,0);
   glVertex2f(5,0);
   glVertex2f(0,-5);
   glVertex2f(0,5);
   glEnd();

   glBegin(GL_LINES);
   glColor3f(0,0,1);
   bresenham(-2,2,1,2);
    bresenham(-1,2,1,2);
    bresenham(0,2,1,2);
    bresenham(1,2,2,2);
   glEnd();

   glBegin(GL_LINES);
    bresenham(-2,-2,1,-2);
    bresenham(-1,-2,1,-2);
    bresenham(0,-2,1,-2);
    bresenham(1,-2,2,-2);
   glEnd();


   DrawCircle(-2,0,2,100);

   glRotatef(-180,0,0,1);
   DrawCircle(-2,0,2,100);




    glFlush();
   glutSwapBuffers();
}

int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("GLASS");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
