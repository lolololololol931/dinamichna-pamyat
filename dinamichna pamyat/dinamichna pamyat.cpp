#include <iostream>
using namespace std;

void input(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
 
//n1
bool existing(const int* arr, int size, int value) {
	for (int i = 0; i < size; ++i) {
		if (arr[i] == value) {
			return true;
		}
	}
	return false;
}


int inputA(const int* A,int M,const int* B,int N, int* res){
	int index = 0;
	for (int i = 0; i < M; i++) {
		if (!existing(B, N, A[i])) {
			bool wasInB = existing(res, index, A[i]);
			if (!wasInB) {
				res[index++] = A[i];
			}
		}
	}
	return index;
}

//n2
int unique(const int* A, int M, const int* B, int N, int* res) {
	int index = 0;
	for (int i = 0; i < M; i++) {
		if (!existing(B, N, A[i]) && !existing(res, index, A[i])) {
			res[index++] = A[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (!existing(A, M, B[i]) && !existing(res, index, B[i])) {
			res[index++] = B[i];
		}
	}
	return index;
}

//n3
int merge(const int* A, int M, const int* B, int N, int* res) {
	int index = 0;
	for (int i = 0; i < M; ++i) {
		if (!existing(res, index, A[i])) {
			res[index++] = A[i];
		}
	}
	for (int i = 0; i < N; ++i) {
		if (!existing(res, index, B[i])) {
			res[index++] = B[i];
		}
	}
	return index; 
}


int main()
{
	system("1251>null");
	int M, N;
	cout << "rozmir array A: " << endl;
	cin >> M;
	cout << "rozmir array B: " << endl;
	cin >> N;
	int* A = new int[M];
	int* B = new int[N];
	cout << "vvedit chisla array A: " << endl;
	input(A, M);
	cout << "vvedit chisla array B: " << endl;
	input(B, N);

	//n1
	/*int* res1 = new int[M];
	int size1 = inputA(A, M, B, N, res1);
	for (int i = 0; i < size1; i++) {
		cout << res1[i] << " ";
	}
	cout << endl;*/
	/*delete[] res1;*/

	//n2
	/*int* res2 = new int[M + N];
	int size2 = unique(A, M, B, N, res2);
	for (int i = 0; i < size2; ++i) {
		cout << res2[i] << " ";
	}
	cout << endl;*/
	//delete[] res2;

	//n3
	int* res3 = new int[M + N];
	int size3 = merge(A, M, B, N, res3);
	for (int i = 0; i < size3; ++i) {
		cout << res3[i] << " ";
	}
	cout << endl;
	delete[] A;
	delete[] B;
	delete[] res3;

	return 0;

}

