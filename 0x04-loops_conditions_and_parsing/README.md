# 0x04. Loops, conditions and parsing
`DevOps` `Shell` `Bash` `Scripting`

#### About Bash projects
- Unless stated, all your projects will be auto-corrected with Ubuntu 20.04 LTS.

## Background Context
### Resources
**Read or watch:**
- Loops sample
- Variable assignment and arithmetic
- Comparison operators
- File test operators
- Make your scripts portable

**man or help:**
- env
- cut
- for
- while
- until
- if

## Learning Objectives
- At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
- How to create SSH keys
- What is the advantage of using #!/usr/bin/env bash over #!/bin/bash
- How to use while, until and for loops
- How to use if, else, elif and case condition statements
- How to use the cut command
- What are files and other comparison operators, and how to use them

## More Info
### Shellcheck
- Shellcheck is a tool that will help you write proper Bash scripts. It will make recommendations on your syntax and semantics and provide advice on edge cases that you might not have thought about. Shellcheck is your friend! All your Bash scripts must pass Shellcheck without any error or you will not get any points on the task.

## TASKS
0. **Create a SSH RSA key pair** <br>
*mandatory*
*Read for this task:*
- Linux and Mac OS users
- Windows users
- man: ssh-keygen
You will soon have to manage your own servers concept page hosted on remote data centers. We need to set them up with your RSA public key so that you can access them via SSH.
- Create a RSA key pair.<br>
**Requirements:**
  - Share your public key in your answer file 0-RSA_public_key.pub
  - Fill the SSH public key field of your intranet profile with the public key you just generated
  - Keep the private key to yourself in a secure location, you will use it later to connect to your servers using SSH. Some storing ideas are Dropbox, Google Drive, password manager, USB key. Failing to do so will prevent you to access your servers, which will prevent you from doing your projects
  - If you decide to add a passphrase to your key, make sure to save this passphrase in a secure location, you will not be able to use your keys without the passphrase
  - SSH and RSA keys will be covered in depth in a later project.

1. **For Best School loop** <br>
*mandatory*
- Write a Bash script that displays Best School 10 times using for.

2. **While Best School loop** <br>
*mandatory*
- Write a Bash script that displays Best School 10 times using while.

3. **Until Best School loop** <br>
*mandatory*
- Write a Bash script that displays Best School 10 times using until.

4. **If 9, say Hi!** <br>
*mandatory*
- Write a Bash script that displays Best School 10 times, but for the 9th iteration, displays Best School and then Hi on a new line.
**Requirements:**
  - You must use the while loop (for and until are forbidden)
  - You must use the if statement

5. **4 bad luck, 8 is your chance** <br>
*mandatory*
- Write a Bash script that loops from 1 to 10 and:
  - displays bad luck for the 4th loop iteration
  - displays good luck for the 8th loop iteration
  - displays Best School for the other iterations
*Requirements:*<br>
  - You must use the while loop (for and until are forbidden)
  - You must use the if, elif and else statements

6. **Superstitious numbers** <br>
*mandatory*
- Write a Bash script that displays numbers from 1 to 20 and:
  - displays 4 and then bad luck from China for the 4th loop iteration
  - displays 9 and then bad luck from Japan for the 9th loop iteration
  - displays 17 and then bad luck from Italy for the 17th loop iteration
- Requirements:
  - You must use the while loop (for and until are forbidden)
  - You must use the case statement

7. **Clock** <br>
*mandatory*
- Write a Bash script that displays the time for 12 hours and 59 minutes:
  - display hours from 0 to 12
  - display minutes from 1 to 59
**Requirements:**<br>
  - You must use the while loop (for and until are forbidden)

8. *For ls* <br>
*mandatory*
- Write a Bash script that displays:
  - The content of the current directory
  - In a list format
  - Where only the part of the name after the first dash is displayed (refer to the example)
**Requirements:** <br>
  - You must use the for loop (while and until are forbidden)
  - Do not display hidden files

9. **To file, or not to file** <br>
*mandatory*
- Write a Bash script that gives you information about the school file.
**Requirements:**
  - You must use if and, else (case is forbidden)
  - Your Bash script should check if the file exists and print:
  - if the file exists: school file exists
  - if the file does not exist: school file does not exist
  - If the file exists, print:
  - if the file is empty: school file is empty
  - if the file is not empty: school file is not empty
  - if the file is a regular file: school is a regular file
  - if the file is not a regular file: (nothing)

10. **FizzBuzz** <br>
*mandatory*
- Write a Bash script that displays numbers from 1 to 100.
**Requirements:**<br>
  - Displays FizzBuzz when the number is a multiple of 3 and 5
  - Displays Fizz when the number is multiple of 3
  - Displays Buzz when the number is a multiple of 5
  - Otherwise, displays the number
  - In a list format

11. **Write a Bash script that displays the content of the file /etc/passwd.** <br>
**Your script should only display:** <br>
- username
- user id
- Home directory path for the user
**Requirements:**
  - You must use the while loop (for and until are forbidden)

12. **Tell the story of passwd** <br>
*#advanced* <br>
**Read:**
  - IFS (internal field separator)
  - Understanding /etc/passwd
- The file /etc/passwd has already been covered in a previous project and you should be familiar with it. Today we will make up a story based on it.

- Write a Bash script that displays the content of the file /etc/passwd, using the while loop + IFS.
- Format: The user USERNAME is part of the GROUP_ID gang, lives in HOME_DIRECTORY and rides COMMAND/SHELL. USER ID's place is protected by the passcode PASSWORD, more info about the user here: USER ID INFO

- Requirements:
- You must use the while loop (for and until are forbidden)

13. **Write a Bash script that displays the visitor IP along with the HTTP status code from the Apache log file.** <br>
*advanced* <br>
**Requirement:**
- Format: IP HTTP_CODE
- in a list format
**See example** <br>
- You must use awk
- You are not allowed to use while, for, until and cut
- Download and commit the apache-access.log file along with your answers files
