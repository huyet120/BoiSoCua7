#include <stdio.h>
#include <math.h>

// Hàm kiểm tra số chính phương
int isPerfectSquare(int num) {
	int squareRoot = (int)sqrt(num);
	return (squareRoot * squareRoot == num);
}

// Hàm đếm và in ra các số chính phương nhỏ hơn n
void countAndPrintPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d:\n", n);

	for (int i = 1; i < n; i++) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}

	printf("\n");
}

int main() {
	int n;

	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	countAndPrintPerfectSquares(n);

	return 0;
}