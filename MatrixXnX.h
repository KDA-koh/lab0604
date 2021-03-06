#pragma once

#include <cstdlib>

using namespace std;

class MatrixXnX
{
public:
	class Controller
	{
	public:
		int** getMatrix() const
		{
			return matrix;
		}

		void setMatrix(int iDim)
		{
			matrix = new int* [iDim];
			for (int i = 0; i < iDim; i++)
				matrix[i] = new int[iDim];
		}

		~Controller() { delete[] matrix; }

	private:
		int** matrix;
	};
	Controller control = Controller{};
	MatrixXnX(const int iDim);
	int dim;
	int element(const int i, const int j) const;
	void setElement(const int i, const int j, const int value);
	void fillRandomElements(const int minVal, const int maxVal);
	int sumPrincipalDiag() const;
	int sumSecondaryDiag() const;
	int productPrincipalDiag() const;
	int productSecondaryDiag() const;
	int sumRow(const int iRow) const;
	int minColumn(const int iCol) const;
	int maxColumn(const int iCol) const;
private:

};