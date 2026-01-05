*This project has been created as part of the 42 curriculum by <login>.*

Description

The project get_next_line consists in implementing a function that reads a file descriptor line by line. The goal is to create a function capable of returning the next line from a file each time it is called, until the end of file is reached. A line is defined as a sequence of characters ending with a newline or the end of the file.
This project introduces the concept of static variables, buffered reading, and memory management in C.

Usage

Compilation
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 main.c get_next_line.c get_next_line_utils.c

Comment out the main function and create text files, either in vscode or with touch.

Execution
./a.out <filename>

Algorithm Explanation and Justification

This algorithm works by reading data from a file little by little while keeping track of any leftover characters between function calls. To do this, it uses a static buffer that stores data that has been read but not yet returned as a complete line. Because the buffer is static, its contents are preserved across calls, allowing the function to resume exactly where it left off.
Each time the function is called, it first checks whether the stored buffer already contains a newline character. If it does, the function extracts everything up to and including that newline and returns it as the next line. Any remaining characters after the newline stay in the buffer for the next call.
If no newline is found, the function reads more data from the file descriptor using read() into a temporary buffer of size BUFFER_SIZE. This new data is then appended to the existing buffer. The function repeats this process until it either finds a newline or reaches the end of the file.
When the end of the file is reached, the function checks whether there is still data left in the buffer. If there is, that data is returned as the final line. If the buffer is empty, the function returns NULL, indicating that there is nothing more to read.
This approach is effective because it reduces the number of system calls by reading data in chunks rather than one character at a time, while still correctly returning one line per function call. Using a static buffer is essential, as it allows the function to maintain its state between calls, which is a key requirement of the project. With proper memory management, this method avoids leaks and ensures reliable behavior in all cases.

Resources

man pages for:
read
open
malloc

https://pubs.opengroup.org/onlinepubs/007904875/functions/open.html

AI usage

AI was only used for supportive task considering the README file in terms of structuring and wording, while the file itself is written by myself.

The code is fully done by myself and no AI was used for generating or fixing.
