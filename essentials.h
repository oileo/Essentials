#ifndef ESSENTIALS_H
#define ESSENTIALS_H

typedef char str[]; // Experimental

int length(char s[]);
void input(char s[], char output[]);
int indexof(char s[], char letter);
int lastindexof(char s[], char letter);
void reverse(char s[], char output[]);
void substring(char s[], char output[], int start, int end);
void trim(char s[], char output[]);
void replaceChar(char s[], char letter, char rletter);
int includes(char s[], char word[]);
int bubbleSort(int arr[], int n, int crescente);

#endif
