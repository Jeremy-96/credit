**Credit**
========   

![Credit](https://www.101computing.net/wp/wp-content/uploads/Luhn-Algorithm.png)

**About the project**  
---------------------  

In this exercise we will learn to use the Luhn alogrithm. But what is this algorithm?
A large part of the population uses a credit card, but nobody asks how it is valid or not. Luhn's algorithm is created for this purpose and we will implement it with the C language.  
So what’s the secret formula? Well, most cards use an algorithm invented by Hans Peter Luhn of IBM. According to Luhn’s algorithm, you can determine if a credit card number is (syntactically) valid as follows:

Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
Add the sum to the sum of the digits that weren’t multiplied by 2.
If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!  

That’s kind of confusing, so let’s try an example with Visa: 4005519200000004.

For the sake of discussion, let’s first underline every other digit, starting with the number’s second-to-last digit:

(4)0 (0)5 (5)1 (9)2 (0)0 (0)0 (0)0 (0)4

Okay, let’s multiply each of the underlined digits by 2:

0•2 + 0•2 + 0•2 + 0•2 + 9•2 + 5•2 + 0•2 + 4•2

That gives us:

0 + 0 + 0 + 0 + 18 + 10 + 0 + 8

Now let’s add those products’ digits (i.e., not the products themselves) together:

0 + 0 + 0 + 0 + 0 + 1 + 8 + 1 + 0 + 8 = 18

Now let’s add that sum (18) to the sum of the digits that weren’t multiplied by 2 (starting from the end):

18 + 0 + 5 + 1 + 2 + 0 + 0 + 0 + 4 = 30

Yup, the last digit in that sum (30) is a 0, so David’s card is legit!

So, validating credit card numbers isn’t hard, but it does get a bit tedious by hand. Let’s write a program.

### **Built with**  

*This section list any language use to do the project*  

<img src="https://cdn.jsdelivr.net/gh/devicons/devicon/icons/c/c-original.svg" alt="c language" width="25" height="25">


**Getting started**  
-------------------  

### **Prerequisites**  

Be sur to have a IDE like Visual Studio Code or Sublime text and Git installed on your PC/Mac

### **Installation**  

Open your IDE and a new terminal, then follow these instructions  

1. Clone the repository
```
git clone https://github.com/Jeremy-96/credit.git
```  

2. Go to the directory  
```
cd credit
```  

3. Open the file cash.c
```
open credit.c
```  

4. Compile the program
```
make credit
```

You can see a new file in the folder project called ***credit***. This is an execution file that will allow the program to run, but don't worry about this file.
***After each modifications do this command, she's update your new credit file executor***

### **Usage**  

Always on the terminal in the ***credit*** folder

1. Run the program 
```
./credit
```  

2. The console prompt you to input a credit card number.  
```
Enter a credit card number: _
```

3. Input a valid credit card number like Visa, Amex or Mastercard. (for example, a Visa)
```
Enter a credit card number: 4005519200000004
```

4. The result is
```
Enter a credit card number: 4005519200000004
VISA
1
```

5. Or Amex
```
Enter a credit card number: 371449635398431
```

6. The result is 
```
Enter a credit card number: 371449635398431
AMEX
```
*And so forth...*

7. Input invalid credit card number
```
Enter a credit card number: 4500987612345574
```

8. The program prompt return an invalid message
```
Enter a credit card number: 4500987612345574
INVALID
```



**Contributing**  
----------------  

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are greatly appreciated.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement". Don't forget to give the project a star! Thanks again!

Fork the Project
Create your Feature Branch 
```
git checkout -b feature/AmazingFeature
````

Commit your Changes 
```
git commit -m 'Add some AmazingFeature'
```

Push to the Branch 
```
git push origin feature/AmazingFeature
```

Open a Pull Request

  
    
**Contact**
-----------  

Jérémy Thonon - info@jeremythonon.be   

Project Link: https://github.com/Jeremy-96/credit  


### **Conclusion**
Now, we can say if your credit card is valid or not :smile:
On the way to the next step :soon:


