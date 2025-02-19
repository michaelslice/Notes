# Linux Command Guide

## Basic Commands
```bash
pwd     # Print working directory
mkdir   # Make new directory
cp      # Copy
mv      # Move or rename
ln      # Create link
rm      # Remove
find    # Find files
```

## Text Processing
```bash
grep    # Search text patterns
sed     # Stream editor for text manipulation
awk     # Pattern scanning and text processing
tr      # Translate characters
wc      # Word, line, character count
uniq    # Report or filter out repeated lines
tee     # Read from stdin and write to stdout and files
```

## Package Management (for different distributions):
```bash
# Debian/Ubuntu
apt update
apt install
apt remove
```

## Process Management Commands
## Basic Commands
```bash
ps          # Show running processes
top/htop    # Interactive process viewer
kill/pkill  # Terminate processes
nice/renice # Adjust process priority
bg/fg       # Background/foreground jobs
jobs        # List background jobs
nohup       # Run command immune to hangups
```

## Directory Navigation
- `~` - Home directory
- `/` - Root directory
- `..` - One directory up

## File Management

### Removing Files and Directories
```bash
rm file       # Remove file
rmdir dir     # Remove empty directory
rm -r dir     # Remove directory and contents
```

### File Listing Options
```bash
ls -a    # Show all files
ls -l    # Long listing format
ls -t    # Sort by timestamp
ls -s    # Sort by file size
ls -r    # Reverse sort order
```

## Input/Output Redirection

### Output Redirection
```bash
# Overwrite file
ls > output_file.txt

# Append to file
ls >> output_file.txt
```

### Input Redirection
```bash
# Read from file instead of terminal
sort < file.txt
```

### File Descriptors
```bash
# Redirect stderr to file
command 2> error_file

# Redirect stderr to stdout
command > output_file 2>&1

# Custom file descriptor
command 3> custom_file

# Close file descriptor
command 3>&-
```

## Command Execution

### Sequential Commands
```bash
# Run commands in sequence
command1 ; command2 ; command3

# Run if previous succeeds
command1 && command2 && command3

# Run if previous fails
command1 || command2 || command3
```

### Command Substitution
```bash
# Using backticks (legacy)
current_date=`date`
echo "Today's date is $current_date"

# Using $() (preferred)
current_date=$(date)
echo "Today's date is $current_date"
```

## File Links

### Hard Links
- Share same inode as target
- Target must exist at creation
- Cannot link across devices
- Cannot create circular links
```bash
ln shared_file link_name
```

### Symbolic Links
- Stores path to target
- Can create before target exists
- Can link across filesystems
- Can create circular links
```bash
ln -s shared_file link_name
```

## File Operations

### Viewing File Contents
```bash
head -20 file.txt     # View first 20 lines
tail -20 file.txt     # View last 20 lines
cat file1.txt file2.txt   # Concatenate files vertically
paste file1.txt file2.txt # Concatenate files horizontally
cut -d ":" -f 1,3 data.txt    # Extract specific fields
diff file1.txt file2.txt      # Compare files
```

### Sorting Files
```bash
sort [options] filename
-r    # Reverse order
-n    # Numeric order
-t    # Field delimiter
-k    # Sort by column
-f    # Ignore case
```

## File Permissions

### Permission Categories
- User (u)
- Group (g)
- Others (o)

### Permission Types
- Read (r) = 4
- Write (w) = 2
- Execute (x) = 1

### Changing Permissions
```bash
# Symbolic mode
chmod u+x script.sh   # Add execute for user
chmod g-w file.txt    # Remove write for group
chmod ug=rwx file.txt # Set specific permissions

# Octal mode
chmod 751 file.txt    # rwx r-x --x
```

### Special Permissions
```bash
# SUID
chmod u+s file    # Add SUID
chmod u-s file    # Remove SUID

# SGID
chmod g+s file    # Add SGID
chmod g-s file    # Remove SGID

# Sticky Bit
chmod +t directory
```

## Process Management

### Key System Calls
```bash
fork()      # Create new process
wait()      # Wait for process termination
exec()      # Execute program
```

### Shell Features
```bash
# Set variable
varname=value

# Print variable
echo $varname

# Create alias
alias ll="ls -l"

# Remove alias
unalias ll

# History commands
!!      # Last command
!5      # Command at history position 5
!-3     # Command 3 positions back
```

### Command Substitution
```bash
# Using backticks
echo "Today's date is `date`"

# Using $()
echo "User $(whoami) is on $(hostname)"

# Append date to filename
cp "$filename" "$filename$(date +%F)"
```
