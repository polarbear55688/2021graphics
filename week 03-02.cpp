#include <GL/glut.h> ///使用glut外掛
#include <math.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); ///清背景
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




int main(int argc, char**argv) ///main函式
{
    glutInit(&argc, argv); /// init初始化glut
    glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);
    ///init初始化 dispaly的功能 色彩 雙倍顯示 3D
    glutCreateWindow("Week03-circle"); ///打開的網頁名稱
    glutDisplayFunc(display); ///準備DISPLAY()函式
    glutMainLoop(); ///主要函式
}
