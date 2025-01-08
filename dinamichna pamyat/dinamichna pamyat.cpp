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

}

