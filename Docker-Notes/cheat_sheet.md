# Docker Cheat Sheet

## Docker File Structure
```
# Base image
FROM python:3.9-slim

# Set the working directory
WORKDIR /app

# Copy the requirements file
COPY requirements.txt .

# Install dependencies
RUN pip install --no-cache-dir -r requirements.txt

# Copy the rest of the application code
COPY . .

# Expose the application port
EXPOSE 8080

# Set the default command
CMD ["python", "app.py"]
```

## Common Docker Instructions
- `FROM <image>`: This specifies the base image that the build will extend
- `WORKDIR <path>`: Specifies the working directory, or path in the image where files will be copied or commands will be executed
- `COPY <host-path> <image-path>`: This instruction tells the builder to copy files from the host and put them into the container image.
- `RUN <command>`: This instruction tells the builder to run the specified command.
- `ENV <name> <value>`: This instruction sets an environment variable that a running container will use.
- `EXPOSE <port-number`: Sets configuration on the image that indicates a port the image would like to expose
- `USER <user-or-uid`: This instruction sets the default user for all subsequent instructions
- `CMD ["<command>", "<arg1>"]`: Sets the default command a container using the image will run
- `COPY . .`: Copy all of the files from your project on your machine into the container image by using the COPY instruction

## Common Docker Commands
- `docker ps`: List all running containers
- `docker run <image-name`: Run a container
- `docker stop <container_name_or_id>`: Stop a container  
- `docker rm <container_name_or_id>`: Remove a container 
- `docker images`: List all downloaded images
- `docker pull <image-name>`: Pull an image from Docker Hub
- `docker logs <container_name_or_id>`: View container logs

## A Dockerfile Typically Follows These Steps
1. Determine your base image
2. Install application dependencies
3. Copy in any relevant source code and/or binaries
4. Configure the final image
