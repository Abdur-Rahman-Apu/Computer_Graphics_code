#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
int r,pk,x,y;
void init(void)
{
  glClearColor(1.0,1.0,1.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(-40.0,40.0,-40.0,40.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

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

void Draw()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f( 1 ,0, 0);
   glBegin(GL_POINTS);
   pk=1-r;
   x=0;
   y=r;
   show(x,y);
   while(x<=y){

       if(pk<0){
        x++;
        printf("pk=%d and x=%d and y=%d\n",pk,x,y);
        pk=pk+(2*x)+1;
    }
    if(pk>=0){
        x++;
        y--;
        printf("pk=%d and x=%d and y=%d\n",pk,x,y);
        pk=pk+(2*x)+1-(2*y);
    }

        show(x,y);

   }
   glEnd();




glutSwapBuffers();
}

int main(int argc,char **argv){

    printf("Enter radius:");
    scanf("%d",&r);
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,500);
    glutCreateWindow("Mid point circle algorithm");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
