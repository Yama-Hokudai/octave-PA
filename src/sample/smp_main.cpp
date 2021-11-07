#include <iostream>
#include <stdlib.h>
#include <pulse/pulseaudio.h>

int main(void){//int argc, char **argv){

  pa_mainloop* mainLp = pa_mainloop_new();

  pa_mainloop_free(mainLp);

  return 0;
}
