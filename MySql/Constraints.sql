-- CONSTRAINTS -- 

-- NOT NULL --
-- DEFAULT --
-- PRIMARY KEY -- 
-- AUTO-INCREMENT --
-- UNIQUE --
-- CHECK --

CREATE TABLE persons(
	id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(50) NOT NULL,
    acc_type VARCHAR(50) DEFAULT 'Saving',
    email VARCHAR(50) NOT NULL UNIQUE,
    mob VARCHAR(50) UNIQUE CHECK(LENGTH(mob) >= 10)
    );
    
DESC persons;

INSERT INTO persons (name,acc_type,email,mob)
VALUES ("Baburao","Current","baburoa3@gmail.com","9876543214");

