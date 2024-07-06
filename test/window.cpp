/* How to compile using dynamic linking in terminal in linux
 * g++ window.cpp -lglfw -lGL -lm -lX11 -lpthread -lXi -lXrandr -ldl
 * -llibrary is used to add library for compiling
 */

#include<GLFW/glfw3.h>

int main(void)
{
	GLFWwindow* testWindow;

	// Initialize library by calling glfwInit()
	if (!glfwInit())
		return -1;

	//Create a window
	testWindow = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

	if(!testWindow)
	{
		glfwTerminate();
		return -1;
	}
	// Make it current context
	glfwMakeContextCurrent(testWindow);

	// Loop until user closes the Window
	while(!glfwWindowShouldClose(testWindow))
	{
		//Render Here
		glClear(GL_COLOR_BUFFER_BIT);

		// Swap front and back buffers
		glfwSwapBuffers(testWindow);

		//Polling for process and events
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}
