#include <GL/glut.h> ///�ϥ�glut�~��
#include <math.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///�M�I��
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    for(int i=0 ; i<30 ; i++)
    {
        float a=3.1415926 * 2/30*i;
        glVertex2f(cos(a),sin(a));
    }
    glEnd;
    glutSwapBuffers();

}




int main(int argc, char**argv) ///main�禡
{
    glutInit(&argc, argv); /// init��l��glut
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    ///init��l�� dispaly���\�� ��m ������� 3D
    glutCreateWindow("Week03-circle"); ///���}�������W��
    glutDisplayFunc(display); ///�ǳ�DISPLAY()�禡
    glutMainLoop(); ///�D�n�禡
}
