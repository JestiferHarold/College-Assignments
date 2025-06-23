/*
  * file = Assignment1.sql
  * author = P Sanjay
  * roll number = CB.SC.U4CSE24240
  * course = Computer Science Engineering
  * section = C
  * year = II
  * description = DBMS Assignment 1
*/

/*
  * question 1: How do you create a students table with columns student_id, student_name, age, and major?
*/

CREATE TABLE Students (student_id INTEGER, student_name varchar(50), age integer, major varchar (50), PRIMARY KEY (student_id));

/*
  * question 2: How do you create a courses table with columns course_id, course_name, and student_id, with student_id referencing student_id in the students table?
*/

CREATE TABLE Courses (course_id integer, course_name varchar(50), student_id INTEGER,  FOREIGN KEY (student_id) REFERENCES Students(student_id))

/*
  * question 3: How do you insert a new course into the courses table?
*/

INSERT INTO Courses (course_id, course_name, student_id) 
VALUES 
      (3, "Mathematics", 3)

/*
  * question 4: How do you insert the following students into the students table:
                  - (student_id: 2, student_name: 'Bob', age: 22, major: 'Biology')
                  - (student_id: 3, student_name: 'Charlie', age: 19, major: 'Mathematics')
                  - (student_id: 4, student_name: 'David', age: 21, major: 'Physics')
                  - (student_id: 5, student_name: 'Eve', age: 20, major: 'Chemistry')
*/

INSERT INTO Students (student_id, student_name, age, major)
VALUES 
      (2, "Bob", 22, "Biology"),
      (3, "Charlie", 19, "Mathematics"),
      (4, "David", 21, "Physics"),
      (5, "Eve", 20, "Chemistry")


/*
  * question 5: How do you insert the following courses into the courses table:
                  - (course_id: 102, course_name: 'Physics', student_id: 2)
                  - (course_id: 103, course_name: 'Chemistry', student_id: 3)
                  - (course_id: 104, course_name: 'Biology', student_id: 4)
                  - (course_id: 105, course_name: 'Computer Science', student_id: 5)
*/

INSERT into Courses (course_id, course_name, student_id)
VALUES 
      (102, "Physics", 2),
      (103, "Chemistry", 3),
      (104, "Biology", 4),
      (105, "Computer Science", 5)

/*
  * question 6: How do you write a query to retrieve all columns and rows from the students table?
*/

SELECT * from Students;

/* DOING THE REST */

