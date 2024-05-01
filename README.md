# ls
ls -a - list all files including hidden files
ls -l - list all files in long format
ls -la - list all files including hidden files in long format
ls -lh - list all files in long format with readable file size
ls -lS - list all files in long format sorted by size

# cd
cd ~ - go to home directory
cd - - go to previous directory
cd .. - go to parent directory
cd / - go to root directory
cd /path/to/directory - go to directory
cd /path/to/file - go to directory of file

# pwd
pwd - print working directory
mkdir
mkdir directory - create directory
mkdir -p directory/subdirectory - create directory with subdirectory
touch
touch file - create file
touch file1 file2 file3 - create multiple files

# rm
rm file - remove file
rm -r directory - remove directory

# mv
mv file1 file2 - rename file
mv file directory - move file to directory
mv file1 file2 directory - move multiple files to directory

# cp
cp file1 file2 - copy file
cp file directory - copy file to directory
cp file1 file2 directory - copy multiple files to directory

# cat
cat file - print file content
cat file1 file2 - print multiple files content
cat file1 file2 > file3 - concatenate multiple files content to file

# less
less file - print file content with pagination
less file1 file2 - print multiple files content with pagination

# head
head file - print first 10 lines of file
head -n 5 file - print first 5 lines of file
head -n -5 file - print all lines of file except last 5 lines

# tail
tail file - print last 10 lines of file
tail -n 5 file - print last 5 lines of file
tail -n +5 file - print all lines of file except first 5 lines

# grep
grep "pattern" file - search for pattern in file
example: grep "hello" file
grep -i "pattern" file - search for pattern in file case insensitive
example: grep -i "hello" file

# find
find /path/to/directory -name "pattern" - search for pattern in directory
example: find /home -name "hello"

# chmod
chmod 777 file - change file permission to read, write and execute for all

# chown
chown user:group file - change file owner and group

# sudo
sudo command - run command as root user



# System
# passwd
passwd - change password of current user
passwd user - change password of user

# whoami
whoami - print current user

# who
who - print all users

# w
w - print all users with more information

# id
id - print current user id



# Disk and Memory
# df
df - print disk usage

# du
du - print disk usage of current directory
du -h - print disk usage of current directory with readable file size

# free
free - print memory usage

# top
top - print running processes

# ps
ps - print running processes

# kill
kill pid - kill process by process id
killall
killall process - kill process by process name
