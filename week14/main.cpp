#include <GL/glut.h>
float angle=0;
void drawArml(){
    glPushMatrix();
        glScalef(1,0.5,0.5);///�Ӫ������u
        glColor3f(0,1,0);glutSolidCube(0.2);///�����u
    glPopMatrix();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glColor3f(1,1,1);glutSolidCube(0.4);
        glPushMatrix();
            glTranslatef(-0.2,0.2,0);///���W�ӻH
            glRotatef(angle,0,0,1);///���
            glTranslatef(-0.1,0,0);///���त��(���`)����e������
            drawArml();///�e���u
        glPopMatrix();
    glPopMatrix();
    ///glutSolidSphere(0.3,30,30);
    ///glutWireSphere(0.3,30,30);
    glutSwapBuffers();
}
int diff=2;
void timer(int t)
{
    glutTimerFunc(30,timer,t+1);
    glClearColor(1,0,0,0);
    if(angle>90)diff=-2;
    if(angle<0)diff=2;
    angle+=diff;
    display();
}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week14 timer");

    glutDisplayFunc(display);
    glutTimerFunc( 3000, timer, 0);

    glutMainLoop();

}
