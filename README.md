# In-Memory Database with Transaction Support

## **Description**
This project implements an in-memory key-value database in C++ with transaction support. Transactions are an important part of relational databases. This database allows operations like `get`, `put`, `begin_transaction`, `commit`.

---

## **How to Run**

### **Prerequisites**
- Install a C++ compiler, such as `g++`.
- Ensure the code is cloned successfully from Github or downloaded to your local system.

### **Steps to Compile and Run**
1. Open a terminal and navigate to the project directory:
   ```bash
   cd <path-to-your-folder>

2. Compile the code using the following command:
   ```bash
   g++ -o inmemory_db inmemory_db.cpp
  
3.  Run the program:
   ```bash
   ./inmemory_db

---



Future Improvements
In my opinion, to make this assignment more effective and official for future coursework:

I think the instructions should be clearer by including examples for edge cases, such as overwriting existing keys and handling empty rollbacks. There could also be requirements for writing test cases or offering automated test cases and expected outputs to make grading easier and more consistent. For logs, I suggest defining clear and consistent error messages for invalid operations. I also suggest focusing more on the code rather than the README file. 

