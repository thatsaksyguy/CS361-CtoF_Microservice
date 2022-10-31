# CS361-FtoC_Microservice

# Overview:
The Fahrenheit to Celsius Microservice, created by thatsaksyguy is written in C++ and converts data collected via textfile from Fahrenheit to Celsius. After collecting the data from the textfile, the data is converted and saved back into the file for further use. 

# Requesting Data:
In order to convert the data, the word 'run' must be written to `readFile.txt`. It is then that the program will know to convert the data from Fahrenheit to Celsius.

# Receiving Data:
To receive the data converted by the microservice, the program must read the output provided by the `f_to_c.txt` file. This file must be formatted in the following way: `Current temperature; high; low; humidity%`

# UML Sequence Diagram:
![UML Sequence Diagram-2](https://user-images.githubusercontent.com/114385372/199109376-4709b188-4aa9-4cf5-85a7-fa8ca24d3278.jpg)
