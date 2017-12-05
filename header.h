#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void T_trivial(int n, int d, char str[]);
void Juggling(char ary[], int d, int n);
void swap(char arr[], int a, int b, int d);
void block_swap(char arr[], int n, int d);
void reverse(char arr[], int start, int end);
void _reverse(char arr[], int d, int n);
int gcd(int a, int b);
