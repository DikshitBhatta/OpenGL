#include <GLUT/glut.h>

void init() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  //background color

    // setup 2D view
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);
}

void drawName() {
    glLineWidth(8.0f);
    glColor3f(0.0f, 1.0f, 0.0f);

    // letter dimensions
    float yBottom = -0.5f;
    float yTop    =  0.5f;
    float yMid    =  0.0f;

    // D
    glBegin(GL_LINE_STRIP);
        glVertex2f(-0.98f, yBottom);
        glVertex2f(-0.98f, yTop);
        glVertex2f(-0.76f, 0.4f);
        glVertex2f(-0.76f,-0.4f);
        glVertex2f(-0.98f, yBottom);
    glEnd();

    // I
    glBegin(GL_LINES);
        glVertex2f(-0.61f, yBottom);
        glVertex2f(-0.61f, yTop);
        glVertex2f(-0.72f, yTop);
        glVertex2f(-0.50f, yTop);
        glVertex2f(-0.72f, yBottom);
        glVertex2f(-0.50f, yBottom);
    glEnd();

    // K
    glBegin(GL_LINES);
        glVertex2f(-0.46f, yBottom);
        glVertex2f(-0.46f, yTop);

        glVertex2f(-0.46f, yMid);
        glVertex2f(-0.24f, yTop);

        glVertex2f(-0.46f, yMid);
        glVertex2f(-0.24f, yBottom);
    glEnd();

    // S
    glBegin(GL_LINE_STRIP);
        glVertex2f( 0.02f,  yTop);
        glVertex2f(-0.20f,  0.30f);
        glVertex2f(-0.20f, -0.05f);
        glVertex2f( 0.02f, -0.15f);
        glVertex2f( 0.02f, yBottom);
        glVertex2f(-0.20f, yBottom);
    glEnd();

    // H
    glBegin(GL_LINES);
        glVertex2f(0.06f, yBottom);
        glVertex2f(0.06f, yTop);
        glVertex2f(0.28f, yBottom);
        glVertex2f(0.28f, yTop);
        glVertex2f(0.06f, yMid);
        glVertex2f(0.28f, yMid);
    glEnd();

    // I
    glBegin(GL_LINES);
        glVertex2f(0.43f, yBottom);
        glVertex2f(0.43f, yTop);
        glVertex2f(0.32f, yTop);
        glVertex2f(0.54f, yTop);
        glVertex2f(0.32f, yBottom);
        glVertex2f(0.54f, yBottom);
    glEnd();

    // T
    glBegin(GL_LINES);
        glVertex2f(0.58f, yTop);
        glVertex2f(0.80f, yTop);
        glVertex2f(0.69f, yTop);
        glVertex2f(0.69f, yBottom);
    glEnd();
}

//display function
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawName();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("My Name in OpenGL");

    init();
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
