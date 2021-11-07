#include <stdio.h>
#include <assert.h>
#include <pulse/pulseaudio.h>

int main(void){
  printf("%d\n", PA_STREAM_AUTO_TIMING_UPDATE);
  return 0;
}
