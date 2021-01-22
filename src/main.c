#include<unistd.h>
#include<fcntl.h>
#include"my-cp.c"
int main(int argc , char **argv)
{
   return CopyFile( argc , argv);
}