CREATE DATABASE MUSICA;
USE MUSICA;


CREATE TABLE IF NOT EXISTS employeeinfo
(
	emp_id int auto_increment primary key,
	emp_name varchar(30),
    emp_surname varchar(30),
    emp_age tinyint,
    username varchar(10),
    userpass varchar(10)

);

INSERT INTO employeeinfo(emp_name, emp_surname, emp_age, username, userpass)
VALUES ('José','Pinos', 21, "admin", "admin1"),
       ('Renato','Ochoa', 20, "User1", "user1"),
       ('Karla','Sánchez', 21, "User2", "user2")