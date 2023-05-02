#include <unistd.h>
#include <string.h>
#define STDERR 2

int main(void) {
    const char* msg = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
    ssize_t len = strlen(msg);
    write(STDERR, msg, len);
    return 1;
}

