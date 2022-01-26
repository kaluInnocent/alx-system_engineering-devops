# 0x08. Networking basics #1

![no place](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-sysadmin_devops/285/s7kpNYq.png)

## Resources
Read or watch:
- [What is localhost](https://alx-intranet.hbtn.io/rltoken/Odcc_tyAQlcANCCrtmxo6A)
- [What is 0.0.0.0](https://alx-intranet.hbtn.io/rltoken/fUb9IpnxrNaddMljzwbhJQ)
- [What is the hosts file](https://alx-intranet.hbtn.io/rltoken/4_MBpFTulKliFM69jCPzOQ)
- [Netcat examples](https://alx-intranet.hbtn.io/rltoken/OR0lOEwAw9I1Rj4aGp1Ljg)
man or help:
- ifconfig
- telnet
- nc
- cut
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
### General
- What is localhost/127.0.0.1
- What is 0.0.0.0
- What is /etc/hosts
- How to display your machine’s active network interfaces
## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be interpreted on Ubuntu 20.04 LTS
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- All your Bash script files must be executable
- Your Bash script must pass Shellcheck (version 0.7.0 via apt-get) without any errors
- The first line of all your Bash scripts should be exactly #!/usr/bin/env bash
- The second line of all your Bash scripts should be a comment explaining what is the script doing
## Tasks
### 0. Change your home IP
Write a Bash script that configures an Ubuntu server with the below requirements.

Requirements:
- localhost resolves to 127.0.0.2
- facebook.com resolves to 8.8.8.8.
- The checker is running on Docker, so make sure to read [this](https://alx-intranet.hbtn.io/rltoken/h50f-AAOBFjIrVc8zX34ug)
```
sylvain@ubuntu$ ping localhost
PING localhost (127.0.0.1) 56(84) bytes of data.
64 bytes from localhost (127.0.0.1): icmp_seq=1 ttl=64 time=0.012 ms
^C
--- localhost ping statistics ---
1 packets transmitted, 1 received, 0% packet loss, time 0ms
rtt min/avg/max/mdev = 0.012/0.012/0.012/0.000 ms
sylvain@ubuntu$
