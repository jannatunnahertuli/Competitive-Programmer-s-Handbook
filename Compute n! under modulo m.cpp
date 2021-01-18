//this algorithm belongs in 6 page of this book

// Simple method to compute n!%m
#include <bits/stdc++.h>
using namespace std;

// Returns value of n! % m
int modFact(int n, int m)
{
	if (n>=m)
		return 0;

	int x = 1;
	for (int i=1; i<=n; i++)
		x=(x*i)%m;

	return x;
}

// Driver program
int main()
{
	int n = 25, x = 29;
	cout << modFact(n, x);
	return 0;
}
