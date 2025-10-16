//Pure human code , no AI was used in the creation of this code!!!!!

#include <array>
#include <iostream>
const int MAXROWS = 10;
const int MAXCOLUMNS = 10;
void fillArray(std::array < std::array<int, MAXCOLUMNS>, MAXROWS>& arr, int nrrows, int nrcolumns) {
	if (nrcolumns > MAXCOLUMNS || nrrows > MAXROWS) {
		std::cout << "Exceeding the limit" << std::endl;
		return;
	}

	for (int i = 0; i < nrrows; i++) {
		for (int j = 0; j < nrcolumns; j++) {
			std::cout << "Enter element!" << "[" << i << "]" << "[" << j << "]";
			std::cin >> arr[i][j];
		}
	}
}

void printArray(std::array < std::array<int, MAXCOLUMNS>, MAXROWS> & arr , int nrrows, int nrcolumns) {

	if (nrcolumns > MAXCOLUMNS || nrrows > MAXROWS) {
		std::cout << "Exceeding the limit!"<<std::endl;
		return;
	}

	for (int i = 0; i < nrrows; i++) {
		std::cout << std::endl;
		for (int j = 0; j < nrcolumns; j++) {
			std::cout << arr[i][j]<<" ";

		}
	
	}

}
int main() {
	std::array<std::array<int, MAXCOLUMNS>, MAXROWS> matrix;

	std::cout << "Enter number of rows for array";
	int nrrows = 0;
	std::cin >> nrrows;

	std::cout << "Enter number of columns for array";
	int nrcolumns = 0;
	std::cin >> nrcolumns;


	fillArray(matrix, nrrows, nrcolumns);
	printArray(matrix, nrrows, nrcolumns);
	return 0;
  }