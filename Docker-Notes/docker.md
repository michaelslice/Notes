# Docker and Docker Compose Notes

---

## Docker Overview
Docker is a virtualization software that simplifies the development and deployment of applications. It packages applications with all necessary dependencies, configurations, system tools, and runtime environments.

---

## Development Process With Containers
- Start a service as a Docker container using a single Docker command.
- The command is the same across all operating systems and services.
- Docker standardizes the process of running any service on any local development environment.

---

## Deployment Process With Containers
- Docker packages together configuration, application source code, and dependencies into a single artifact called a Docker image.

---

## Virtual Machine vs. Docker Container

### Docker Containers
- **Size**: Docker images are much smaller (a few MB).
- **Speed**: Containers start in seconds.
- **Compatibility**: Compatible only with Linux distributions.
- **Virtualization**: Virtualizes the **applications layer** of the OS.

### Virtual Machines
- **Size**: VM images are larger (a few GB).
- **Speed**: VMs take minutes to start.
- **Compatibility**: Compatible with all operating systems.
- **Virtualization**: Virtualizes both the **applications layer** and the **OS kernel**.

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
- A running instance of a Docker image.
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

---

## Docker Compose Overview
Docker Compose is a tool for defining and running multi-container Docker applications. It allows you to define and run multiple services and applications that belong together in one environment.

---

## Docker Compose Configuration
- A single `YAML` file is used to configure and maintain your application's services.
- With a single command, you can create and start all the services from your configuration.

### Example
If you have 10 containers, you can use Docker Compose to write a structured file with all the run commands and define the configuration in one place.

---

## `compose.yml` File Structure
- **`version`**: Specifies the version of Docker Compose (e.g., `3.1`).
- **`services`**: Lists all the services you want to run.
- **`ports`**: Defines port mappings between the host and container (e.g., `{HOST_PORT}:{CONTAINER_PORT}`).
- **`environment`**: Defines environment variables for the services.

---

## Network Configuration in Docker Compose
- By default, Docker Compose sets up a single network for your app.
- Containers can communicate with each other using their container names.

---

## Running Docker Compose
- Start all services defined in the `compose.yml` file:
  ```bash
  docker-compose -f turing-services.yaml up