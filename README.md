# Luhn Algorithm Credit Card Validator (C++)

This project implements the Luhn Algorithm in C++ to validate credit card numbers. 
It also includes card type detection and basic error handling.

## Features
- Validates credit card numbers using Luhn Algorithm
- Detects card type (Visa, Mastercard, etc.)
- Handles invalid input
- Console-based application

## How the Algorithm Works
1. Double every second digit from the right
2. If doubling gives a number > 9, subtract 9
3. Add all digits
4. If total % 10 == 0 → Valid card number
