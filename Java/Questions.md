# Java Questions

### **Question:** What is singleton class in Java and how can we make a class singleton??
### **Answer:**
> Singleton class is a class whose only one instance can be created at any given time, in one JVM. A class can be made singleton by making its constructor private.
---
### **Question:** Does Java Use Pointers?
### **Answer:**
> No. Java doesn’t use pointers. It has a tough security. Instead of pointers, references are used in Java as they are safer and more secure when compared to a pointer.
---
### **Question:** How Do You Connect to a Database in Java?
> The steps to connect to a database in Java are:

•    Registering the driver class

•    Creating connection

•    Creating statement

•    Executing queries

•    Closing connection
---
### **Question:** What Is a Package?
> A package is a collection of related classes and interfaces.
---
### **Question:** What Is the Difference Between equals() and = = ?
> Equals() method is used for checking the equality of two objects defined by business logic.
 == or the equality operator is used to compare primitives and objects.
---
### **Question:** Define JSON?
> JSON is an acronym for JavaScript Object Notation. It uses JavaScript syntax, and the format is text only.
---
### **Question:** What Are Constructors in Java?
> In Java, the constructor is a block of code used to initialize an object.
---
### **Question:** Can a Dead Thread Be Started Again?
> No, a thread that is in the dead state can't be started again.
---
### **Question:** What Is a JVM?
> JVM is the Java Virtual Machine, which is a runtime environment for compiled Java class files.
---
### **Question:** How Are Destructors Defined in Java?
> Since Java has its own garbage collection, no destructors are required to be defined.       
Destruction of objects is automatically carried by the garbage collection mechanism.
---
### **Question:** What Is an Anonymous Class?
> The class defined without a name in a single line of code using new keyword is known as an anonymous class.
---








 ### **Questions:** What are the JDBC API components?
 
# The java.sql package contains interfaces and classes for JDBC API.

- Interfaces:
- Connection
- Statement
- PreparedStatement
- ResultSet
- ResultSetMetaData
- DatabaseMetaData
- CallableStatement etc.
- Classes:
- DriverManager
- Blob
- Clob
- Types
- SQLException etc.
### **Questions:** What is the role of JDBC DriverManager class?
- The DriverManager class manages the registered drivers. It can be used to register and unregister drivers. It provides factory method that returns the instance of Connection.

### **Questions:** What is JDBC DatabaseMetaData interface?
- The DatabaseMetaData interface returns the information of the database such as username, driver name, driver version, number of tables, number of views etc.

### **Questions:** What do you mean by batch processing in JDBC?
- Batch processing helps you to group related SQL statements into a batch and execute them instead of executing a single query. By using batch processing technique in JDBC, you can execute multiple queries which makes the performance faster.

### **Questions:** What is the difference between execute, executeQuery, executeUpdate?
- Statement execute(String query) is used to execute any SQL query and it returns TRUE if the result is an ResultSet such as running Select queries. The output is FALSE when there is no ResultSet object such as running Insert or Update queries. We can use getResultSet() to get the ResultSet and getUpdateCount() method to retrieve the update count.

- Statement executeQuery(String query) is used to execute Select queries and returns the ResultSet. ResultSet returned is never null even if there are no records matching the query. When executing select queries we should use executeQuery method so that if someone tries to execute insert/update statement it will throw java.sql.SQLException with message “executeQuery method can not be used for update”.

- Statement executeUpdate(String query) is used to execute Insert/Update/Delete (DML) statements or DDL statements that returns nothing. The output is int and equals to the row count for SQL Data Manipulation Language (DML) statements. For DDL statements, the output is 0.

- You should use execute() method only when you are not sure about the type of statement else use executeQuery or executeUpdate method.

### **Questions:** What do you understand by JDBC Statements?
- JDBC statements are basically the statements which are used to send SQL commands to the database and retrieve data back from the database. Various methods like execute(), executeUpdate(), executeQuery, etc. are provided by JDBC to interact with the database.

# - JDBC supports 3 types of statements:

- Statement: Used for general purpose access to the database and executes a static SQL query at runtime.
- PreparedStatement: Used to provide input parameters to the query during execution.
- CallableStatement: Used to access the database stored procedures and helps in accepting runtime parameters.
