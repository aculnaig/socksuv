#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <uv.h>

int main(int argc, char **argv)
{
    printf("socksuv - A socks5 server written with libuv\n");
    printf("libuv %s\n", uv_version_string());

    return 0;
}