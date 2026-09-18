#include <GLUT/glut.h>

#define GL_SILENCE_DEPRECATION
#define STOP 0
#define MOVE 1

float x = 0.0f;
int moveMode = MOVE;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_TRIANGLES);
    glVertex3f(x, 0.5f, 0.0f);
    glVertex3f(x - 0.5f, -0.5f, 0.0f);
    glVertex3f(x + 0.5f, -0.5f, 0.0f);
    glEnd();

    glFlush();

}

// 미션 1
void keyboard(unsigned char key, int x, int y)
{
    switch (key) {
        case 'r':
            glColor3f(1.0, 0.0, 0.0);
            break;

        case 'g':
            glColor3f(0.0, 1.0, 0.0);
            break;
        
        case 'b':
            glColor3f(0.0, 0.0, 1.0);
            break;
    }

    glutPostRedisplay();

}

// 미션 2
void mouse(int button, int state, int x, int y)
{
    if (state == GLUT_DOWN)
    {
        if (button == GLUT_LEFT_BUTTON)
        {
            moveMode = 0;
        }
        else if (button == GLUT_RIGHT_BUTTON)
        {
            moveMode = 1;
        }
    }

    glutPostRedisplay();

}

// 미션 3: 애니메이션
void anim(int value)
{
    if (moveMode == 1) {
        x += 0.01f;
    }

    if (x > 1.0f) x = -1.0f;

    glutPostRedisplay();
    glutTimerFunc(30, anim, 0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_SINGLE);
    glutCreateWindow("Assignment03");
    
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutTimerFunc(30, anim, 0);
    
    glutMainLoop();
    return 0;
}