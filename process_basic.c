#include <stdio.h>

#include <unistd.h>

#include <sys/wait.h>



int main() {

	    printf("Start: PID=%d\n", getpid());

	        

	        pid_t pid = fork();

		    

		    if (pid == 0) {

			          

			            printf("Child process: PID=%d\n", getpid());

				            execlp("ls", "ls", "-l", NULL);

					        } else {

							   

							        printf("Parent process: created child %d\n", pid);

								        wait(NULL);

									        printf("All done!\n");

										    }

		        

		        return 0;

}
