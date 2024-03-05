#include <iostream>

/**
 *  OPEN FILE 
 * 
 *  SUCESS: RETURN FILE DESCRIPTOR
 *  FAIL: RETURN -1
 * 
 * The open system call returns a integer value 
 *  if there is a error the value returned is -1
 *  if there is no error the value returned will be a positive integer
 *  
 *  int fd;
 * 
 *  fd = open("path to file", O_RDWR | O_CREAT, 0755);
 *  
 *  if(fd == -1)
 *  {
 *      perror("Error opening file");
 * 
 *  }
 *  
*/


// Reading a file is something that requires the operating systems help. It involves taking bytes 
// from the contents of a specified file, and copying them into the memory used by your program
// so they can be worked with.
//
// YOU MUST USE THE OPEN SYSTEM CALL BEFORE USING THE READ SYSTEM CALL 

/**
 *  READING FROM FILES
 * 
 *  SUCESS: RETURN NUMBER OF BYTES READ
 *  FAIL: RETURN -1
 * 
 *  The system call will return the number of bytes successfully read, unless there was an error in which case -1
 *  is returned and errno is set.
 * 
 *  fd = File descriptor of the currently open file to read data from.
 *  
 *  buf = The data read will be stored at the location specified by this pointer.
 * 
 *  count = The number of bytes to attempt to read from the file.
 * 
 *  char stringbuffer[1024] // 1024-byte array of chars
 *  struct some_struct data; // structured data
 * 
 *  // open a couple of files
 * 
 *  int fd1 = open("file1", O_RDONLY);
 *  int fd2 = open("file2", O_RDONLY);
 * 
 *  ssize_t howmany; // how many bytes are read
 * 
 *  // reading from a file into a string buffer
 * 
 *  howmany = read(fd1, stringbuffer, 1024);
 * 
 *  if(howmany == -1)
 *  {
 *      perror("Error reading from file");
 *  }
 * 
 *  // read data from a file directly into a data structure
 * 
 *  howmany = read(fd2, &data, sizeof(some_struct));
 * 
 *  if(howmany == 1)
 *  {
 *      perror("Error reading from from file")
 *  }
 * 
*/


// Writing a file involes taking bytes from the memory of your program, 
// and having the operating copy them into a file
//
// To write data to a file, you can use the write system call. Once again
// the file descriptor will be used to specify which file to write into

/**
 *  WRITING TO FILES
 * 
 *  SUCESS: RETURN NUMBER OF BYTES READ
 *  FAIL: RETURN -1
 * 
 *  The write system call returns the number of bytes successfully written
 *  or -1 if there was an error
 * 
 *  fd = File descriptor of the currently open file to read data from.
 *  
 *  buf = The data read will be stored at the location specified by this pointer.
 * 
 *  count = The number of bytes to attempt to read from the file.
 * 
 *  // string literal stored as character array
 * 
 *  char mystring[] = "some text to write";
 * 
 *  // pointer to start of character array from above
 * 
 *  char * pointer = (char *) mystring;
 * 
 *  // open a couple of files
 *  int fd1 = open("file1", O_WRONLY);
 *  int fd2 = open("file1", O_WRONLY);
 *  
 *  ssize_t howmany; // how many bytes read
 * 
 *  // write the character array to file 1
 *  howmany = write(fd1, mystring, sizeof(mystring));
 * 
 *  if(howmany == -1)
 *  {
 *      perror("Error opening file")
 *  }
 * 
*/


// The operating system tracks which files are open. This uses a small amount of memory, but
// if you have a file open in a program that no longer uses it. It may prevent other processes 
// from doing what they need to with the file.

/**
 *  CLOSE FILE
 * 
 *  SUCESS: 0
 *  FAIL: RETURN -1
 * 
 *  The close function returns zero for success. If there has been a error -1 is returned instead.
 * 
 *  close(int fd);
 * 
*/

// The stat system call can be used to see how big a file is
// if its a symbolic link, and what operations it supports etc.

/**
 *  THE STAT SYSTEM CALL
 * 
 *  SUCESS: 0
 *  FAIL: RETURN -1
 * 
 *  path = The path to the file you would like to get the status for
 * 
 *  fd = The file descriptor of an already open file
 * 
 *  buf = A pointer to the struct stat data structure to fill 
 *  with the status of the file
 * 
 *  int stat(const char *path, struct stat *buf);
 *  
 *  int fstat(int fd, struct stat *buf)
 * 
 *  int lstat(const char *path, struct stat *buf)
 * 
 *  Stat: Is the normal version of this function
 *  fstat: Uses the file descriptor of an already open_file instead of using 
 *  the path. 
 *  lstat: Is used to look up information on symbolic links, 
 *  instead of the files they point to.
 * 
 * 
*/

// All of the system calls workr with a stat structure 
// which contain the following fields

/**
 *  struct stat {
 *      dev_t   st_dev // ID of device containing file
 *      ino_t   st_ino // inode number
 *      mode_t  st_mode // protect
 *      nlink_t st_nlink // number of hard links
 *      uid_t   st_uid  // user ID of owner
 *      gid_t   st_gid // group ID of owner
 *      dev_t   st_rdev // device ID (if special files)
 *      off_t st_size // total size in byes
 *      blksize_t st_blksize // blocksize for filesystem I/O
 *      blkcnt_t st_blocks // number of 512B blocks allocated
 *      time_t st_atime // time of last access
 *      time_t st_mtimc // time of last modification
 *      time_t st_ctime // time of last status change
 *  }
 * 
 * 
*/