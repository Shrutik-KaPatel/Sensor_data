# Sensor Data Buffer System (Linked List in C)

## 📌 Overview

This project implements a dynamic sensor data buffer using a singly linked list in C.
It simulates how embedded systems manage continuously incoming data using efficient memory handling and pointer-based data structures.

The project follows a modular design with separate source files, a Makefile-based build system, and version control using Git.

---

## 🚀 Features

### 🔹 Phase 1 – Basic Operations

* Insert at beginning
* Insert at end
* Insert at specific position
* Traverse and print list

### 🔹 Phase 2 – Deletion & Memory Management

* Delete node at specific position
* Safe memory handling using `free()`
* Prevention of dangling pointers
* Full list cleanup function (`freeList`)

---

## 🧠 Key Concepts Covered

* Pointers and dynamic memory (`malloc`, `free`)
* Linked list data structure
* Pointer traversal and manipulation
* Memory safety (avoiding leaks and dangling pointers)
* Modular programming in C
* Build automation using Makefile
* Git-based workflow (branching, commits, PR)

---

## 📂 Project Structure

```
sensor_data/
│
├── main.c        # Application entry point
├── list.c        # Linked list implementation
├── list.h        # Structure and function declarations
├── Makefile      # Build system
├── README.md     # Project documentation
```

---

## ⚙️ Build & Run

### Compile

```
make
```

### Run

```
./main
```

### Clean build files

```
make clean
```

---

## 🧪 Example Execution

```
Reading = 20
Reading = 10
Reading = 25
Reading = 30
Reading = 40
```

---

## 🔧 Functions Implemented

### Insertion

* `insertAtBeginning()`
* `insertAtEnd()`
* `insertAtPosition()`

### Deletion

* `deleteAtPosition()`

### Utility

* `printList()`
* `freeList()`

---

## ⚠️ Edge Cases Handled

* Empty list operations
* Deleting head node
* Insertion at position 0
* Safe pointer relinking before `free()`

---

## 🧠 Embedded Systems Perspective

* Demonstrates dynamic memory handling under constrained systems
* Highlights importance of memory safety
* Avoids memory leaks and dangling pointers
* Prepares foundation for firmware-level data structures

---

## 📈 Future Improvements

* Boundary checks for invalid positions
* Reverse linked list
* Doubly linked list implementation
* Sensor data simulation (real-time input loop)
* Logging/debug macros for embedded systems

---

## 🛠 Tech Stack

* Language: C
* Build Tool: GCC + Make
* Version Control: Git & GitHub

---

## 👨‍💻 Author

Shrutik Patel
Master’s in Electrical Engineering (Embedded Systems Focus)

---

## ⭐ Learning Outcome

This project bridges the gap between:

> academic C programming → practical embedded system design

---



