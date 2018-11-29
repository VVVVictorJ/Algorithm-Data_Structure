#include<cstdio>

void swap(int &a,int &b);
int* reverse(int* A, int lo, int hi);
void onsreen(int* A);
void onsreen(int* A) 
{
	for (int i=0; i < 8; i++) {
		printf("%d\t",A[i]);
	}
	printf("\n");
}
int* reverse(int* A, int lo, int hi) 
{
	if (lo < hi) {
		swap(A[lo], A[hi]);
		onsreen(A);
		reverse(A, lo + 1, hi - 1);
		
	}
	return	A;
}
void swap(int &a, int &b)
{
	int c = 0;
	c = b;
	b = a;
	a = c;
	//Ç³¿½±´Éî¿½±´
}
int main()
{
	int a[8] = { 1,2,3,4,5,6,7,8 };
	reverse(a, 0, 7);
	onsreen(a);
	getchar();
}