# 0x05. Processes and signals
`DevOps` `Shell` `Bash` `Syscall` `Scripting`

### About Bash projects
- Unless stated, all your projects will be auto-corrected with Ubuntu 20.04 LTS.

## Resources
**Read or watch:** <br>
- Linux PID
- Linux process
- Linux signal
- Process management in linux

**man or help:**
- ps
- pgrep
- pkill
- kill
- exit
- trap

## Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
- What is a PID
- What is a process
- How to find a process’ PID
- How to kill a process
- What is a signal
- What are the 2 signals that cannot be ignored

0. **What is my PID** <br>
*mandatory*
- Write a Bash script that displays its own PID.

1. **List your processes** <br>
*mandatory*
- Write a Bash script that displays a list of currently running processes.
**Requirements:**
  - Must show all processes, for all users, including those which might not have a TTY
  - Display in a user-oriented format
  - Show process hierarchy

2. **Show your Bash PID** <br>
*mandatory*
- Using your previous exercise command, write a Bash script that displays lines containing the bash word, thus allowing you to easily get the PID of your Bash process.
**Requirements:** <br>
  - You cannot use pgrep
  - The third line of your script must be # shellcheck disable=SC2009 (for more info about ignoring shellcheck error here)

3. **Show your Bash PID made easy** <br>
*mandatory*
- Write a Bash script that displays the PID, along with the process name, of processes whose name contain the word bash.

4. **To infinity and beyond** <br>
*mandatory*
- Write a Bash script that displays To infinity and beyond indefinitely.
**Requirements:**
  - In between each iteration of the loop, add a sleep 2

5. **Don't stop me now!** <br>
*mandatory*
- Write a Bash script that stops 4-to_infinity_and_beyond process.
**Requirements:**
  - You must use kill

6. **Stop me if you can** <br>
*mandatory*
- Write a Bash script that stops 4-to_infinity_and_beyond process.
**Requirements:**
  - You cannot use kill or killall

7. **Highlander** <br>
- Write a Bash script that displays:
  - To infinity and beyond indefinitely
  - With a sleep 2 in between each iteration
  - I am invicible!!! when receiving a SIGTERM signal
- Make a copy of you 6-stop_me_if_you_can script, name it 67-stop_me_if_you_can, that kills the 7-highlander process instead of the 4-to_infinity_and_beyond one.

8. **Beheaded process** <br>
*mandatory*
- Write a Bash script that kills the process 7-highlander.

9. **Process and PID file** <br>
*#advanced*
- Write a Bash script that:
  - Creates the file /var/run/myscript.pid containing its PID
  - Displays To infinity and beyond indefinitely
  - Displays I hate the kill command when receiving a SIGTERM signal
  - Displays Y U no love me?! when receiving a SIGINT signal
  - Deletes the file /var/run/myscript.pid and terminates itself when receiving a SIGQUIT or SIGTERM signal

10. **Manage my process** <br>
*#advanced* <br>
**Read:**
  - &
  - init.d
  - Daemon
  - Positional parameters

- Write a manage_my_process Bash script that:
  - Indefinitely writes I am alive! to the file /tmp/my_process
  - In between every I am alive! message, the program should pause for 2 seconds

- Write Bash (init) script 101-manage_my_process that manages manage_my_process. (both files need to be pushed to git)
**Requirements:**
- When passing the argument start:
  - Starts manage_my_process
  - Creates a file containing its PID in /var/run/my_process.pid
  - Displays manage_my_process started
  - When passing the argument stop:
  - Stops manage_my_process
  - Deletes the file /var/run/my_process.pid
  - Displays manage_my_process stopped
  - When passing the argument restart
  - Stops manage_my_process
  - Deletes the file /var/run/my_process.pid
  - Starts manage_my_process
  - Creates a file containing its PID in /var/run/my_process.pid
  - Displays manage_my_process restarted
  - Displays Usage: manage_my_process {start|stop|restart} if any other argument or no argument is passed

11. **Zombie** <br>
*#advanced*
- Read what a zombie process is.
- Write a C program that creates 5 zombie processes.
**Requirements:**<br>
  - For every zombie process created, it displays Zombie process created, PID: ZOMBIE_PID
  - Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
  - When your code is done creating the parent process and the zombies, use the function bellow
```c
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}
```