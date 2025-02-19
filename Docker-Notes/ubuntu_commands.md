# Ubuntu Command Cheat Sheet

## Syntax
- `&&`: Used to chain commands together
- `command1 && command2`: If command1 succeeds execute command2

## Common Ubuntu Commands
- `apt-get install <package-name>`: Install a package, some common packages
- `apt-get update`: Update a package list
- `apt-get upgrade`: Upgrade all packages  
- `apt-get remove <package-name>`: Remove a package 
- `apt-get install -y <package-name>`: Installs all specified packages the `-y` flags automaticalyl answers "yes" to any prompts
- `wget -O`: Downloads files from the internet and specify the output file name or path where the downloaded file should be saved
    - Example: `wget "https://dl.fbaipublicfiles.com/pyslowfast/model_zoo/ava/SLOWFAST_64x2_R101_50_50.pkl"` 


## Good Practice
In docker files `\` in the command are used to break a long line into multiple lines for readability
```
FROM ubuntu:20.04

RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
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
## Common Packages `apt-get install <package-name>`
- `apt-get install python3`: Install python, on ubuntu base image
- `apt-get install python3-pip python3-dev python3-venv`: Install package installer, header & development files, virtual env env
- `apt-get install git wget unzip`: Install git, wget, and unzip
- `apt-get install gcc g++ make`: Installs C++ compiler tools
