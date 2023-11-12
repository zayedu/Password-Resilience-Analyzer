# Password Resilience Analyzer

The Password Resilience Analyzer is a school project and serves as the final project for the "SFWRENG 2XC3 - Software Engineering Practice and Experience" course at McMaster University. This software program, developed in C, assesses the strength of passwords based on a set of predetermined rules and guidelines. In the realm of cybersecurity, strong passwords are essential in defending sensitive information from unauthorized incursions and potential security breaches. This tool allows both individuals and organizations to evaluate the resilience of their passwords against brute-force and sophisticated attacks.

## Cybersecurity and Strong Passwords

In today's digitally-driven age, a strong password is more than just a gatekeeper to personal accounts; it's a fortress that guards sensitive data and ensures digital security. But, what really defines the strength of a password? It's not merely about length or complexity; it's about understanding a mix of characteristics that withstand various hacking techniques. Factors like length, use of diverse character sets, avoidance of predictable patterns, and the non-reliance on easily guessable information all come into play.

With cyber threats becoming increasingly sophisticated, the importance of robust passwords cannot be overstated. Through the Password Resilience Analyzer, you'll delve deep into the anatomy of passwords, examining specific traits and characteristics to determine their robustness. By the end of this project, you'll not only master the art of creating strong passwords but also be equipped with the skills to help others understand and appreciate the nuances of password security.

## Features

- **Main Menu**: The program features a user-friendly main menu interface that allows users to:

  - Test a new password for its strength.
  - View the strength of the last tested password.
  - Exit the program.

- **Password Strength Assessment**: Password strength is evaluated based on various criteria, including:

  - The presence of lowercase and uppercase letters.
  - The inclusion of numerical digits.
  - The presence of special characters.
  - Password length (12+ characters).

- **Function-Based Implementation**: Each criterion has a dedicated function to check its condition, ensuring modular code.

- **Password Strength Score**: Passwords are assigned a total strength score ranging from 0 (weakest) to 5 (strongest). As each strength criterion is met, points are added to the score.

- **User-Friendly Output**: The program categorizes the password into "Weak," "Moderate," or "Strong" based on the computed strength score.

## Getting Started

1. Clone this repository to your local machine.
2. Compile the C code using your preferred C compiler.
3. Run the executable to start the Password Resilience Analyzer.

## Usage

Follow the on-screen prompts to use the Password Resilience Analyzer:

1. Test a new password: Enter a password for strength analysis.
2. View strength of the last tested password: Check the strength rating of the previously tested password.
3. Exit: Close the program.
