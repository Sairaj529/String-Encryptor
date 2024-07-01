String Encryptor
===
This repository contains a C program that performs a simple encryption on input strings. The encryption process involves converting the ASCII value of the first character of each word to its numerical form and swapping the second and last characters of each word if the word has more than one character.

##Features
Converts the ASCII value of the first character of each word to its numerical form.
Swaps each word's second and last characters if the word has more than one character.
Handles multiple words in a string, separated by spaces.
##Usage
#Function
char *encrypt_this(const char *str): Encrypts the input string str according to the described encryption process and returns the encrypted string.
