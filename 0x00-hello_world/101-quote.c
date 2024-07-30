#include <unistd.h> // Include this header for the write function

int main(void) {
    // The string to output, followed by a newline character
    char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    // Using the write function to output the message to standard error (file descriptor 2)
    write(2, message, sizeof(message) - 1);

    // Return 1 as required
    return 1;
}

