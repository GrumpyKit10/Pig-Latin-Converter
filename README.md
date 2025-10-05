# Pig Latin Converter

**Author:** Matthew Wilson
**Course:** CSCE 2110.002
**Date:** 11/30/21

## Description

This program converts input sentences from English into Pig Latin. Users can enter any sentence, and the program will output the Pig Latin version of each word while handling punctuation appropriately.

## Features

* Converts each word in a sentence to Pig Latin.
* Preserves punctuation at the end of words.
* Keeps running until the user types `quit`.

## How to Use

1. Compile the program using a C++ compiler (e.g., `g++ main.cpp -o piglatin`).
2. Run the executable: `./piglatin`.
3. Enter a sentence when prompted.
4. Type `quit` to exit the program.

## Example

```
Enter a sentence to convert to piglatin or 'quit' to quit:
Hello, world!
Ellohay, orldway!
```

## Files

* `main.cpp` : Contains the main program and functions to convert words to Pig Latin.

## Functions

* `bool isVowel(char c)` : Checks if a character is a vowel.
* `string to_piglat(string str)` : Converts a single word to Pig Latin.

## Notes

* Only punctuation at the end of a word is preserved.
* Words without vowels are handled by moving the last character to the front before appending `ay`.
