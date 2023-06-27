# 211-project by Tanya Li, Sean Reth, and Alexandria Sampalis

## Summary
### Project Description:
This `gradebook project` allows you to keep track of your grade in `URI's CSC 212` class! Not only does it allow you to see what your current grade is in the course, but you can ask it to return specific assigment grades, total grades of a certain category (labs, assignments, ect), prints out all grades in a certain category, and prints out all of your grades int the class. You can also directly change your grade file from this program. This is all done by following very simple accessible instructions within your IDE.

### Project Structure:
This project is broken up into 3 sections, a ***main.cpp*** that makes the project interactive, the ***gradebook.cpp*** that stores all the functions to make the program run, and lastly the ***gradebook.h*** that stores all function declarations. 
Of course you will also need your starter txt file (a template for this can be found below).
the following figure will show you what questions to expect when the gradebook is up and running.
```
"If you want to know your current grade in the class, input 1."
"If you want to find a certain grade in a specific category and assignment, input 2." 
"If you want to know your total grade in a specific category, input 3."
"If you want to change a grade in your grade book, input 4."
"If you want to see all your grades in a specific category, input 5."
"If you want all the grades, input 6."
"If you finish with the grade book, input 7."

```

## Compilation Instructions
This project was developed using the IDE cLion, so we suggest using that in version 11 for the best experience!
You will need to start by copying the ***main.cpp***, ***gradebook.cpp***, and ***gradebook.h*** files from our repository.You will then need to create a text file using our template below to input the grades you know!
after you have all these copied into your prefered IDE you can begin runing the program.

### Input File Template

You can input any grades file_name.txt
Leave any grade you dont know as an E for "empty"
```
Assignments
E
E
E
E
Labs
E
E
E
E
E
E
E
E
Projects
E
E
Final
E
```
The contents of the file are in this order
```
Assignments
assignment 1 grade /50
assignment 2 grade /50
assignment 3 grade /50
assignment 4 grade /50
Labs
lab 1 grade /25
lab 2 grade /25
lab 3 grade /25
lab 4 grade /25
lab 5 grade /25
lab 6 grade /25
lab 7 grade /25
lab 8 grade /25
Projects
project 1 grade /150
project 2 grade /350
Final
final exam grade /100
```
If you are still confused on how to set up this template, make sure to check out the example txt files we have included in our repository.


## Runtime Instructions
Once you have all the necessary files you can run your program!
start by compiling in your IDE using the following command line arguments.
```
g++ main.cpp gradebook.cpp -o prog
```
then to call the code and run it with your text file write...
```
./prog grades_text_file.txt
```
you will then be prompted with the following text
```
"If you want to know your current grade in the class, input 1."
"If you want to find a certain grade in a specific category and assignment, input 2." 
"If you want to know your total grade in a specific category, input 3."
"If you want to change a grade in your grade book, input 4."
"If you want to see all your grades in a specific category, input 5."
"If you want all the grades, input 6."
"If you finish with the grade book, input 7."
```
you will then be given the option to input a number and depending on which option you choose it might require a few more pieces of information, but eveythibng is explained while you run the code to minimize any confusion!

### Video
If you need any more help with compilation or running the program visit the link to a video showcasing our code!
```
[youtube link!](https://youtu.be/iddFjZCMeME)
```


## Planning
### Pseudocode / Flowchart
the following block contains some pseudo code that explains what is happening when the `main.cpp` is run
```
(pseudo code here)
```

## Sample Inputs & Outputs
The picture below is an example of a starting .txt file, the g++ compilation in the command line, and what the gradebook outputs:
<img width="799" alt="Screen Shot 2023-06-26 at 7 45 26 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/c43a3b90-c772-489f-a089-a6877a126a82">

The next picture shows what happens when you input 1:
<img width="756" alt="Screen Shot 2023-06-26 at 7 49 55 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/af44595a-887d-4c00-a05e-d7f5e0a676e7">
you'll notice immediatly after providing you with the desired information the program prompts you with the same questions again! This will keep happening untill you enter the number 7 terminate the program (shown in the image below):
<img width="518" alt="Screen Shot 2023-06-26 at 7 51 36 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/74159f25-e2f2-4e64-9bab-5cf41d19232c">

This next example demonstrates an option that takes in a few different inputs to give you the answer you're looking for:
<img width="772" alt="Screen Shot 2023-06-26 at 7 53 12 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/ced87098-87d2-47c3-8ed8-4d8841230d6f">

Lastly we want to show how to make direct changes to your text file in the program. we will change the E place holder in lab 6 to a 25, and we will go back and edit the assignment 1 grade (to show if you make a mistake, it can always be corrected).
an important thing to note is that once you finish running the input 4 command, to see these changes you need to then hit 7 to end the program.
<img width="1286" alt="Screen Shot 2023-06-26 at 7 58 59 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/e2cab6c5-af50-433f-b7ee-7ed2173e3a6e">
after running these commands your text file will look like this:
<img width="222" alt="Screen Shot 2023-06-26 at 7 59 52 PM" src="https://github.com/tanyavm7/211-project/assets/98431552/a35d4502-226b-40da-85ad-47e0006d08ee">




### Credits:
**Project created by Tanya Li, Sean Reth, and Alexandria Sampalis.**
<br />
- Tanya Primarily worked on the main.cpp
- Sean worked primarily on writing funcitons in the gradebook.cpp file
- Alex worked on writing functions and creating in-file and outfile functions
<br />
Although thats what we specifically focused on individually, all members worked together on many aspects over zoom calls.
<br />
<br />
