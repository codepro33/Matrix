#include <array>
#include <iostream>
const int MAXROWS = 3;
const int MAXCOLUMNS = 4;
void printArray(std::array < std::array<int, MAXCOLUMNS>, MAXROWS> & arr , int nrrows, int nrcolumns) {

	for (int i = 0; i < nrrows; i++) {
		for (int j = 0; j < nrcolumns; j++) {
			std::cout << "Enter elemnt" << i << "," << j << " : ";
			std::cin >> arr[i][j];
			
		}
	
	}


}
int main() {
	std::array<std::array<int, MAXCOLUMNS>, MAXROWS> matrix{ {{2,3,5,7},{1,2,1,3},{1,2,1,5}} };
	std::cout << matrix[1][2];

	printArray(matrix, 3, 4);
	return 0;
  }