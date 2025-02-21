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

## Docker Compose Example
```sh
services:
   # Service1
   service-name1:
      build:
         context:
         Dockerfile: Dockerfile
      ports:
         - "3000:3000"
   # Service2
   service-name2:
      build:
         context:
         Dockerfile: Dockerfile
      ports:
         - "8000:8000"
      env_file:
         - .env

```
## Start the container
With a single command, you create and start all the services from your configuration file
```sh
docker compose up
```

---

## Compose Watch
Used to launch the app and automatically update your running service as you edit and save your code
```sh
docker compose up --watch
```

---

## Detached Mode
Lets you access terminal while container is running
```sh
docker compose up -d
```

---

## Volumes in Docker Compose
Enables persistant data storage
```sh
volumes:
  - db-data:/var/lib/postgresql/data
```

--- 

## Depends_on for Service Dependencies
Ensures one service starts before another
```sh
services:
  db:
    image: postgres
  app:
    depends_on:
      - db

```