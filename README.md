# Pintos Project 1: Threads - Alarm Clock and Advanced Scheduler

## Overview

This repository contains the implementation of **Project 1** for the **Software Infrastructure (IF677)** course at **CIn-UFPE**. The project focuses on enhancing the Pintos operating system by implementing an **alarm clock** and an **advanced scheduler** for thread management.

## Group Members

- **Alberto Guevara de Araújo Franca**
- **Felipe Mateus Falcão Barreto**
- **Felipe Torres de Macedo**

## Project Goals

1. **Alarm Clock**:
   - Implement a mechanism to allow threads to wake up at specific times.
   - Ensure that threads are correctly unblocked when their alarm time expires.
   - Handle thread priority adjustments based on alarm time.

2. **Advanced Scheduler**:
   - Enhance the default scheduler (round-robin) to support multiple priority levels.
   - Implement the **Multi-Level Feedback Queue (MLFQ)** scheduling algorithm.
   - Prioritize threads based on their recent CPU usage and execution history.

## Tools Used

- **Git**: Version control system for collaborative development.
- **Live Share**: Collaborative real-time coding sessions.
- **Bochs(2.6.11) and QEMU**: Simulators for testing and debugging Pintos.

## Running the Project

1. Clone this repository:
```sh
 https://github.com/ftm2-cin/pintos.git
 ```

2. Go to project directory
```sh
cd src/threads
```

3. Build the project
```sh
make
```

4. Run tests
```sh
cd build
```
---
```sh
make check
```

## Project Status

Our project successfully passed all alarm and MLFQ tests. Feel free to add more sections or elaborate on specific details relevant to your project. Good luck with your Pintos project! 🚀🔧




