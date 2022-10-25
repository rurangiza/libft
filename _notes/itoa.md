# Itoa
## Converts an integer into a string
The itoa function allows you to convert an integer into a string.
But to understand how it's implemented, we first need to understand the relationship between integers and characters in C.

### What is an integer?
An integer is a data type used to store whole numbers without decimals, ranging from minus 2 billion (-2,147,483,648) to 2 billion (2,147,483,647).

### What is a character?
A character is a data type used to store visual objects that represent text, numbers, symbols.
A computer can understand a character thanks to the <mark>ASCII<mark> standard, which defines each character as a number that is then translated to binary. For example, the letter "A" is "65" in ASCII and "01000001" in binary.



### What is a string?
- It's an array of characters (ASCII) terminated by '\0'
- It size varies depending on how many characters it contains

## What's expected

int number = 845;
char *number = "845";

### What do integers and strings have in common?
Theire values can both be represented in ASCII.
Meaning that every character has a number associated to it.
And every number has a has a character associated to it.

I'm oversimplifying it but stick with me.

Ex:
- The letter 'A' is associated with number 65 in ASCII
- 'Z' = 90 (ASCII)

And not only do letters can be represented in numbers, but also numbers can be represented with numbers.

Ex:
- '0' = 48 (ASCII)
- '9' = 57 (ASCII)

So the trick with implementing itoa() is to:
1. Figure out the link between a number and its representation in ASCII

## Notes
The relationship between integers (int) and characters (char)
-> Every integer from 32 to 126 has a character associated with it.

```C
int main(void)
{
	// Declaring variables we'll need (integer and character)
	int number;
	char character;
	// Initialise character variable with a number
	number = 45;
	character = number;
	// Print the content of your character variable
	printf("%c", character);
}
```