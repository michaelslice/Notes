# Ubuntu Command Cheat Sheet

## Syntax
- `&&`: Used to chain commands together
- `command1 && command2`: If command1 succeeds execute command2

## Common Ubuntu Commands
- `apt-get install <package-name>`: Install a package
- `apt-get update`: Update a package list
- `apt-get upgrade`: Upgrade all packages  
- `apt-get remove <package-name>`: Remove a package 
- `apt-get install -y <package-name>`: Installs all specified packages the `-y` flags automaticalyl answers "yes" to any prompts
- `wget -O`: Downloads files from the internet and specify the output file name or path where the downloaded file should be saved 


## Good Practice
In docker files `\` in the command are used to break a long line into multiple lines for readability
```
FROM ubuntu:20.04

RUN apt-get update && apt-get install -y --no-install-recommends -y \
    git \
    python3.8 \
    python3.8-dev \
    python3.8-distutils \
    python3-pip \
    libgl1 \
    ffmpeg \
    wget \
    && rm -rf /var/lib/apt/lists/*

CMD ["executable", "param1", "param2"]. 
```
