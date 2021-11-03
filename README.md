# CertificateGenerator

This is a simple desktop application created for easier generation of certificates for participation in the science festival "Наук није баук" which takes place every May/April
in Niš, Serbia and for that reason, the project was made so that the output would be in Serbian language.

## Project description

The application uses data from a text document "listOfStudents.txt" (CertificateGenerator/Certificate generator/listOfStudents.txt) that contains the first name, last name, gender, grade and subgrade
of the student, where each row represents one student, in the form of:

1. First and last name of students must be in the genitive in order to fulfill the rules of grammar of the Serbian language.
2. Gender of students are marked with letter "m" for male and letter "z" for female.
3. Last two numbers in a row represent the grade and subgrade of students.

Based on the entered parameters, the application determines grammatically correct words that it inserts in certain places in the html file, that we get by executing the application, 
which represent a certificate that we can then easily print.

## Requirements

For the certificate to be designed you must download and install two fonts:

1. Jura Font https://fonts.google.com/specimen/Jura#standard-styles
2. SociumFree Font https://www.fontslots.com/socium-font/

or you can just install them from a folder CertificateGenerator/CertificateGenerator/HTMLDesign/Fonts which is in this project.
