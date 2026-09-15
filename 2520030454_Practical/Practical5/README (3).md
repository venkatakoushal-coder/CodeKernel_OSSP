# Operating System Programs

## 1. Producer–Consumer using Anonymous Pipe

Parent = Producer → generates data.  
Child = Consumer → reads/consumes data.  
pipe() → creates communication channel.  
write() → producer sends data.  
read() → consumer receives data.  
fork() → creates child process.

## 2. ls | grep ".c"

Implements the shell command using system calls.

fork() → creates child processes.  
pipe() → connects the processes.  
dup2() → redirects input/output to the pipe.  
execlp() / exec*() → executes ls and grep.

## 3. Communication Efficiency

**Communication Efficiency = Number of items / Communication time**

**Communication Time = (end - start) / CLOCKS_PER_SEC**