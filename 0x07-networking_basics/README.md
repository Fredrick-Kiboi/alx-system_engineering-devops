# 0x07. Networking basics #0
`DevOps` `Network`

## Resources <br>
**Read or watch:**
- OSI model
- Different types of network
- LAN network
- WAN network
- Internet
- MAC address
- What is an IP address
- Private and public address
- IPv4 and IPv6
- Localhost
- TCP and UDP
- TCP/UDP ports List
- What is ping /ICMP
- Positional parameters

#### man or help:
```Bash
- netstat
- ping
```

## Learning Objectives <br>
**At the end of this project, you are expected to be able to explain to anyone, without the help of Google:**
- OSI Model
  - What it is
  - How many layers it has
  - How it is organized
- What is a LAN
  - Typical usage
  - Typical geographical size
- What is a WAN
  - Typical usage
  - Typical geographical size
- What is the Internet
  - What is an IP address
  - What are the 2 types of IP address
  - What is localhost
  - What is a subnet
  - Why IPv6 was created
- TCP/UDP
  - What are the 2 mainly used data transfer protocols for IP (transfer level on the OSI schema)
  - What is the main difference between TCP and UDP
  - What is a port
  - Memorize SSH, HTTP and HTTPS port numbers
  - What tool/protocol is often used to check if a device is connected to a network

### Copyright - Plagiarism
- You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements
#### General
- Allowed editors: vi, vim, emacs
- All your Bash script files will be interpreted on Ubuntu 20.04 LTS
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- All your Bash script files must be executable
- Your Bash script must pass shellcheck without any error
- The first line of all your Bash scripts should be exactly #!/usr/bin/env bash
- The second line of all your Bash scripts should be a comment explaining what is the script doing

### More Info
- The second line of all your Bash scripts should be a comment explaining what is the script doing
- For multiple choice question type tasks, just type the number of the correct answer in your answer file, add a new line for every new answer, example:
```Bash
- What is the most important position in a software company?
1. Project manager
2. Backend developer
3. System administrator
sylvain@ubuntu$ cat foo_answer_file
3
```
- Source for question 1 here

## Tasks <br>
0. **OSI model** <br>
*mandatory* <br>
- OSI (Open Systems Interconnection) is an abstract model to describe layered communication and computer network design. The idea is to segregate the different parts of what make communication possible.
- It is organized from the lowest level to the highest level:
  - The lowest level: layer 1 which is for transmission on physical layers with electrical impulse, light or radio signal
  - The highest level: layer 7 which is for application specific communication like SNMP for emails, HTTP for your web browser, etc
- Keep in mind that the OSI model is a concept, it’s not even tangible. The OSI model doesn’t perform any functions in the networking process. It is a conceptual framework so we can better understand complex interactions that are happening. Most of the functionality in the OSI model exists in all communications systems.
- In this project we will mainly focus on:
  - The Transport layer and especially TCP/UDP
  - On the Network layer with IP and ICMP
- **Questions:**
- What is the OSI model?
1. Set of specifications that network hardware manufacturers must respect
2. The OSI model is a conceptual model that characterizes the communication functions of a telecommunication system without regard to their underlying internal structure and technology
3. The OSI model is a model that characterizes the communication functions of a telecommunication system with a strong regard for their underlying internal structure and technology

- How is the OSI model organized?
1. Alphabetically
2. From the lowest to the highest level
3. Randomly

1. **Types of network** <br>
*mandatory* <br>
- LAN connect local devices together, WAN connects LANs together, and WANs are operating over the Internet.
**Questions:** <br>
- What type of network a computer in local is connected to?
1. Internet
2. WAN
3. LAN

- What type of network could connect an office in one building to another office in a building a few streets away?
1. Internet
2. WAN
3. LAN

- What network do you use when you browse www.google.com from your smartphone (not connected to the Wifi)?
1. Internet
2. WAN
3. LAN
