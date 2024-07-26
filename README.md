# test assignment
## test assignment from MCST Elbrus internship

### 1  
Complete vimtutor

### 2.1  
Write a bash script that displays the current directory tree in the file system, starting from "/" with a search depth of "1" — that is, only show the directories that are in the root of the file system.
### 2.2  
Write a bash script that searches the /usr/lib directory for all files containing the letters "qt" in their names and outputs the paths and names of these files to the screen.
### 2.3  
Write a script that stores the current date in a variable using the "date" command, then removes all colons from its output stored in the variable, and finally displays the resulting variable on the screen.
### 2.4  
Write a script that outputs the second column from the list of all installed packages in the system (for example, using the "dpkg" utility for Debian-based systems or another utility if "dpkg" is not available). Output the column using "awk".
### 2.5  
Write a script that combines the contents of the previous four scripts, organizing them as functions.

### 3  
Write a program in C consisting of two *.c files - one of them contains the main() function, and the other contains the file processing function. There should also be a header file .h that contains the prototype of the file processing function, which is included in the file containing main(). Compilation is done using a Makefile that includes the targets "all" and "clean". 

The program works as follows: The program takes a text file as input, which contains lines of text - a poem by V. Mayakovsky or I. Brodsky in English. The program writes the file line by line into a doubly linked list structure. The structure should have fields that contain: the number of the current line, the content of the current line, and pointers to the previous and next structures. After filling the list with structures, they need to be displayed on the screen.
