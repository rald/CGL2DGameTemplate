#include <GL/glfw.h>
#include <GL/gl2d.h>



#define GAME_TITLE "CGL2DGameTemplate"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480



int main(int argc, char *argv[]) {

	int finished=false;

	glScreenInit(SCREEN_WIDTH,SCREEN_HEIGHT);

	glfwSetWindowTitle(GAME_TITLE);


	glfwSwapInterval(1);


	while(!finished) {



		glClearScreen();

		glLine(0,0,50,50,GL2D_RGBA(255,255,255,255));

		glBox(75,0,125,50,GL2D_RGBA(255,255,255,255));

		glEllipse(175,25,25,25,0,GL2D_RGBA(255,255,255,255));

		glBoxFilled(225,0,275,50,GL2D_RGBA(255,255,255,255));

		glEllipseFilled(325,25,25,25,0,GL2D_RGBA(255,255,255,255));



		glfwSwapBuffers();

		float timeStart = glfwGetTime();
		while( (glfwGetTime()-timeStart)<(1.0/60.0)) {};

		finished = glfwGetKey(GLFW_KEY_ESC) | !glfwGetWindowParam(GLFW_OPENED);

	}

	glfwTerminate();

	return 0;
}
