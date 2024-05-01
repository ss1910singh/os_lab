echo "current os version,release number,kernel version are:"
uname -a

echo "Top 10 processes in descending order are:"
ps -eopid,ppid,cmd,%mem,%cpu --sort=-%mem |head

echo "processes with higest memory usage are:"
ps aux| sort -nk+4 |tail

echo "Current logged in users and logname are:"
logname

echo "Display current shell, home directory, operating system type,
current path setting, current working directory"
echo $SHELL
echo $HOME
echo $PATH
pwd