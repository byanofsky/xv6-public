#include "types.h"
#include "user.h"

char buf[512];

int
main(int argc, char *argv[])
{
  int fd, n;

  if((fd = open("README", 0)) < 0){
    printf(1, "cannot open file\n");
    exit();
  }
  while((n = read(fd, buf, sizeof(buf))) > 0) {
  }
  if(n < 0) {
    printf(1, "cannot read file\n");
    exit();
  }
  close(fd);

  int rc = getreadcount();
  printf(1, "readcount: %d\n", rc);
  exit();
}
