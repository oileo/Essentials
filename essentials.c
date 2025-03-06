#include <stdio.h>
#include "essentials.h"

/*
	<< ESSENTIALS >>

	Simple or Important essentials functions made in C

	This project is Open Source with MIT license, so you can feel free to Download and edit this project to improve it
	- Give the credits to the author <3

	Check the Doc and learn how to use : https://github.com/oileo/Essentials
	
	Made by GlitchPalm (Leonardo Gonçalves)
	Version : 0603

	Made in Brazil
*/

void input(char s[], char output[])
{
	printf("%s", s);
	int i = 0;
	char c;

	while((c = getchar()) != '\n' && c != EOF) {
		output[i] = c;
		++i;
	}

	output[i] = '\0';
}

int length(char s[])
{
	int n = 0;
	while(s[n] != '\0' && s[n] != '\n')
		n++;

	return n;
}

int indexof(char s[], char letter)
{
	int l = 0;
	while(l < (length(s) - 1)) {
		if(s[l] == letter) {
			return l;
		}
		++l;
	}
	return -1;
}

int lastindexof(char s[], char letter)
{
	int l = length(s) - 1;
	while(l > 0) {
		if(s[l] == letter) {
			return l;
		}
		--l;
	}
	return -1;
}

void reverse(char s[], char output[])
{
	int l = length(s)-1;
	int a = 0;

	while(l >= 0) {
		if(s[l] != '\0' && s[l] != '\n') output[a] = s[l];
		++a;
		--l;
	}
	--l;
	output[a] = '\0';
}

void substring(char s[], char output[], int start, int end)
{
	int size = length(s) - 2;

	if(start > size || start < 0) printf("Error : the string start need be more than 0 and in size of string\n");
	if(end > size || end < 0) printf("Error : the string end need be more than 0 and in size of string\n");
	if(start > end) printf("Error : the substring end need be more than start\n");	

	if(start > size || start < 0 || end > size || end < 0 || start > end) return;

	int i = start;
	int j = 0;
	while(i < end) {
		if(s[i] != '\0' && s[i] != '\n') {
			output[j] = s[i];
			++j;
		}
		++i;
	}

	output[i] = '\0';
}

void trim(char s[], char output[])
{
	int i, j;

	i = j = 0;
	
	int __length = length(s);
	int _space = 0;

	while(i < __length){
		if(s[i] == ' ') {
			if(_space == 1) {
				if(i >= 1 && s[i-1] == ' ') break;
				output[j] = s[i];
				j++;
			}
		} else {
			if(_space == 0)
				_space = 1;
			output[j] = s[i];
			j++;
		}
		++i;
	}

	_space = 0;
	if(i >= 1 && s[i-1] == ' ') {
		output[j-1] = '\0';
	} else output[j] = '\0';
}
