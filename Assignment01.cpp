#define GL_SILENCE_DEPRECATION 
#include <GLUT/glut.h>  
#include <math.h>       

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // 삼각형
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.8f, 0.0f); // yellow
        glVertex3f(0.75f, 0.9f, 0.0f);
        glVertex3f(0.9f, 0.6f, 0.0f);
        glVertex3f(0.6f, 0.6f, 0.0f);
    glEnd();

    glLineWidth(2.0f);

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(0.75f, 0.9f, 0.0f);
        glVertex3f(0.9f, 0.6f, 0.0f);
        glVertex3f(0.6f, 0.6f, 0.0f);
    glEnd();


    // 오각형
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.4f, 0.7f); // pink
        glVertex3f(0.0f, 0.9f, 0.0f);
        glVertex3f(0.15f, 0.78f, 0.0f);
        glVertex3f(0.1f, 0.6f, 0.0f);
        glVertex3f(-0.1f, 0.6f, 0.0f);
        glVertex3f(-0.15f, 0.78f, 0.0f);
    glEnd();

    glLineWidth(2.0f);

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(0.0f, 0.9f, 0.0f);
        glVertex3f(0.15f, 0.78f, 0.0f);
        glVertex3f(0.1f, 0.6f, 0.0f);
        glVertex3f(-0.1f, 0.6f, 0.0f);
        glVertex3f(-0.15f, 0.78f, 0.0f);
    glEnd();


    // 별
    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0.0f, 0.8f, 1.0f); // sky blue
        glVertex3f(-0.65f, 0.73f, 0.0f);

        glVertex3f(-0.65f, 0.9f, 0.0f);
        glVertex3f(-0.59f, 0.78f, 0.0f);
        glVertex3f(-0.45f, 0.78f, 0.0f);
        glVertex3f(-0.55f, 0.70f, 0.0f);
        glVertex3f(-0.50f, 0.60f, 0.0f);
        glVertex3f(-0.65f, 0.66f, 0.0f);
        glVertex3f(-0.80f, 0.60f, 0.0f);
        glVertex3f(-0.75f, 0.70f, 0.0f);
        glVertex3f(-0.85f, 0.78f, 0.0f);
        glVertex3f(-0.71f, 0.78f, 0.0f);

        glVertex3f(-0.65f, 0.9f, 0.0f);
    glEnd();

    glLineWidth(2.0f);

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(-0.65f, 0.9f, 0.0f);
        glVertex3f(-0.59f, 0.78f, 0.0f);
        glVertex3f(-0.45f, 0.78f, 0.0f);
        glVertex3f(-0.55f, 0.70f, 0.0f);
        glVertex3f(-0.50f, 0.60f, 0.0f);
        glVertex3f(-0.65f, 0.66f, 0.0f);
        glVertex3f(-0.80f, 0.60f, 0.0f);
        glVertex3f(-0.75f, 0.70f, 0.0f);
        glVertex3f(-0.85f, 0.78f, 0.0f);
        glVertex3f(-0.71f, 0.78f, 0.0f);
    glEnd();


    // 정
    // 1. ㅈ
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        glVertex3f(-0.3f, 0.3f, 0.0f);
        glVertex3f(0.1f, 0.3f, 0.0f);
        glVertex3f(0.1f, 0.2f, 0.0f);
        glVertex3f(-0.3f, 0.2f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        glVertex3f(-0.15f, 0.2f, 0.0f);
        glVertex3f(-0.05f, 0.2f, 0.0f);
        glVertex3f(-0.2f, -0.1f, 0.0f);
        glVertex3f(-0.3f, -0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        glVertex3f(-0.15f, 0.2f, 0.0f);
        glVertex3f(-0.05f, 0.2f, 0.0f);
        glVertex3f(0.1f, -0.1f, 0.0f);
        glVertex3f(0.0f, -0.1f, 0.0f);
    glEnd();

    glLineWidth(2.0f); 

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(-0.3f,  0.3f, 0.0f); 
        glVertex3f( 0.1f,  0.3f, 0.0f); 
        glVertex3f( 0.1f,  0.2f, 0.0f); 
        glVertex3f(-0.05f, 0.2f, 0.0f); 
        glVertex3f( 0.1f, -0.1f, 0.0f);  
        glVertex3f( 0.0f, -0.1f, 0.0f); 
        glVertex3f(-0.1f,  0.1f, 0.0f); 
        glVertex3f(-0.2f, -0.1f, 0.0f); 
        glVertex3f(-0.3f, -0.1f, 0.0f); 
        glVertex3f(-0.15f, 0.2f, 0.0f); 
        glVertex3f(-0.3f,  0.2f, 0.0f); 
    glEnd();

    // 2. ㅓ
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        glVertex3f(0.2f, 0.3f, 0.0f);
        glVertex3f(0.3f, 0.3f, 0.0f);
        glVertex3f(0.3f, -0.1f, 0.0f);
        glVertex3f(0.2f, -0.1f, 0.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        glVertex3f(0.1f, 0.15f, 0.0f);
        glVertex3f(0.2f, 0.15f, 0.0f);
        glVertex3f(0.2f, 0.05f, 0.0f);
        glVertex3f(0.1f, 0.05f, 0.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f( 0.2f,  0.3f,  0.0f);
        glVertex3f( 0.3f,  0.3f,  0.0f);
        glVertex3f( 0.3f, -0.1f,  0.0f); 
        glVertex3f( 0.2f, -0.1f,  0.0f); 
        glVertex3f( 0.2f,  0.05f, 0.0f); 
        glVertex3f( 0.1f,  0.05f, 0.0f); 
        glVertex3f( 0.1f,  0.15f, 0.0f); 
        glVertex3f( 0.2f,  0.15f, 0.0f); 
    glEnd();
        
    // 3. ㅇ

    float cx = 0.1f;
    float cy = -0.3f;
    float aspect_ratio = 1.0f;

    // 1️⃣ 바깥쪽 꽉 찬 원 
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 1.0f); // blue
        float outer_radius = 0.12f;  // 전체 'ㅇ'의 크기
        for(int i = 0; i < 360; i++) {
            float theta = i * 3.141592f / 180.0f;
            glVertex3f(cx + (outer_radius * cos(theta)) / aspect_ratio, cy + (outer_radius * sin(theta)), 0.0f);
        }
    glEnd();

    // 2️⃣ 안쪽 구멍 뚫기용 원
    glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.0f, 0.0f);
        float inner_radius = 0.05f; 
        for(int i = 0; i < 360; i++) {
            float theta = i * 3.141592f / 180.0f;
            glVertex3f(cx + (inner_radius * cos(theta)) / aspect_ratio, cy + (inner_radius * sin(theta)), 0.0f);
        }
    glEnd();

    glLineWidth(2.0f); // 테두리 선 굵기 설정
    glColor3f(1.0f, 1.0f, 1.0f); // 흰색 테두리 색상 지정

    // 3️⃣ 바깥쪽 흰색 테두리 그리기
    glBegin(GL_LINE_LOOP);
        for(int i = 0; i < 360; i++) {
            float theta = i * 3.141592f / 180.0f;
            glVertex3f(cx + (outer_radius * cos(theta)) / aspect_ratio, cy + (outer_radius * sin(theta)), 0.0f);
        }
    glEnd();

    // 4️⃣ 안쪽 흰색 테두리 그리기
    glBegin(GL_LINE_LOOP);
        for(int i = 0; i < 360; i++) {
            float theta = i * 3.141592f / 180.0f;
            glVertex3f(cx + (inner_radius * cos(theta)) / aspect_ratio, cy + (inner_radius * sin(theta)), 0.0f);
        }
    glEnd();


    // 선분
    glLineWidth(5.0f); // 선 굵기 설정

    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(-0.8f, -0.7f, 0.0f);
        glVertex3f(-0.2f, -0.7f, 0.0f);
        glVertex3f(-0.8f, -0.8f, 0.0f);
        glVertex3f(-0.2f, -0.8f, 0.0f);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glColor3f(1.0f, 1.0f, 1.0f); // white
        glVertex3f(0.2f, -0.7f, 0.0f);
        glVertex3f(0.7f, -0.7f, 0.0f);
        glVertex3f(0.7f, -0.8f, 0.0f);
        glVertex3f(0.2f, -0.8f, 0.0f);
    glEnd();


    glFlush(); 
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_SINGLE); 
    glutCreateWindow("Lecture - Mac Version"); 
    glutDisplayFunc(display); 
    glutMainLoop(); 

    return 0;
}