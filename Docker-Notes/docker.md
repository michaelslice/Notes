# Docker Notes

---

## Docker Overview
Docker is a virtualization software that simplifies the development and deployment of applications. It packages applications with all necessary dependencies, configurations, system tools, and runtime environments.

---

## Development Process With Containers
- Start a service as a Docker container using a single Docker command.
- The command is the same across all operating systems and services.
- Docker standardizes the process of running any service on any local development environment.

---

## Docker Architecture
![alt text](image.png)
**Docker Daemon(dockard)**: Listens for Docker API requests and manages Docker objects such as images, containers, networks, and volumes. 

**Docker Client**: Is the primary way that many Docker users interact with Docker. When you use commands such as `docker run`, the client sends these commands to `dockard`, which carries them out. The `docker` command uses the Docker API

**Docker Desktop**: Is an easy to install application for your Mac, windows or Linux that enables you to build and share containerized applications and microservice.

**Docker Registry**: A docker registry stores Docker images. And Docker looks for images on Docker Hub

--- 

## Deployment Process With Containers
- Docker packages together configuration, application source code, and dependencies into a single artifact called a Docker image.

---

## Docker Container and the Operating System

### Docker Containers
- **Size**: Docker images are much smaller (a few MB).
- **Speed**: Containers start in seconds.
- **Compatibility**: Compatible only with Linux distributions.
- **Virtualization**: Virtualizes the **applications layer** of the OS.

---

## How an OS is Made Up
An operating system consists of two main layers:
1. **OS Kernel**: Communicates with software and hardware components (CPU, memory, storage, etc.).
2. **OS Applications Layer**: Contains user-facing applications and services.

- Docker virtualizes the **applications layer**.
- Virtual Machines virtualize both the **applications layer** and the **OS kernel**.

---

## Docker Desktop Components

### Docker Engine
- A server with a long-running daemon process (`dockerd`).
- Manages images and containers.

### Docker CLI-Client
- Command Line Interface (`docker`) to interact with the Docker server.
- Executes Docker commands to start, stop, and manage containers.

### GUI Client
- Provides a graphical user interface to manage containers and images.

---

## Docker Images vs. Docker Containers

### Docker Image
- An executable application artifact.
- Includes application source code and complete environment configuration.
- Immutable template that defines how a container will be realized.
- **Includes**:
  - Application (e.g., a JS app).
  - Required services (e.g., Node, npm).
  - OS layer (e.g., Linux).

### Docker Containers
- A running instance of a Docker image. You can create, start, stop, move, or delete a container using the Docker API or CLI.
- Starts the application and creates the container environment.

---

## Docker Commands
- `docker build {path}`: Build a Docker image from a Dockerfile.
- `-t` or `--tag`: Sets a name and optionally a tag in the `name:tag` format.
- `docker images`: Lists all Docker images locally.
- `docker ps`: Lists running containers.
- `docker run {name}:{tag}`: Creates a container from the given image and starts it (always creates a new container).
- `docker logs {container}`: Views logs from the service running inside the container.
- `docker stop {container}`: Stops one or more running containers.
- `-p` or `--publish`: Publishes a container's port to the host.
  - Example: `-p {HOST_PORT}:{CONTAINER_PORT}` (exposes the container to localhost).
- `--name`: Assigns a name to the container.

---

## Docker Registries
A storage and distribution system for Docker images.

### DockerHub
- Docker hosts one of the largest Docker registries, called **Docker Hub**.
- Official images are available for applications like Redis, Mongo, Postgres, etc.
- Official images are maintained by software authors or in collaboration with the Docker community.

### Public vs. Private Registries
- **Public Registries**:
  - Example: Docker Hub.
  - Anyone can search and download Docker images.
- **Private Registries**:
  - Require authentication before accessing.
  - Offered by major cloud providers (e.g., Amazon ECR, Google Container Registry).

### Registry vs. Repository
- **Docker Registry**: A service providing storage for Docker images. Can be hosted by third parties (e.g., AWS ECR) or self-hosted.
- **Docker Repository**: A collection of related images with the same name but different versions.

---

## Container Port vs. Host Port
- Applications inside containers run in an isolated Docker network.
- This allows running the same app on the same port multiple times.
- To make the service available externally, the container's port must be exposed to the host.

### Port Binding
- Bind the container's port to the host's port to make the service available to the outside world.

---

## Dockerfile: Creating Your Own Images

### Dockerfile Overview
- A text document containing commands to assemble an image.
- Docker builds an image by reading these instructions.

### Structure of a Dockerfile
1. **FROM**:
   - Specifies the parent or base image.
   - Every Dockerfile must begin with a `FROM` instruction.
2. **RUN**:
   - Executes commands in a shell inside the container environment.
3. **COPY**:
   - Copies files or directories from the host (`<src>`) to the container's filesystem (`<dest>`).
   - Example: `COPY package.json /app/` (copies `package.json` to the `/app/` directory in the container).
   - If the destination folder does not exist, Docker will create it.
4. **WORKDIR**:
   - Sets the working directory for all following commands.
5. **CMD**:
   - Specifies the command to execute when the container starts.
   - Only one `CMD` instruction is allowed in a Dockerfile.

### Example Workflow
1. **Host Environment**:
   - Linux OS.
   - Node and npm installed.
2. **Container Environment**:
   - Copy application files from the host into the container.
   - Execute `npm install` to install dependencies.
