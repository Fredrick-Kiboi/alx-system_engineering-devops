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
