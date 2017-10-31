#include "Matrix2.h"

Matrix2::Matrix2()
{
}

Matrix2::Matrix2(float mat[])
{
	for (int i = 0; i < 4; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
}

Matrix2 Matrix2::operator+(Matrix2 & other)
{
	Matrix2 add;
	for (int i = 0; i < 4; i++)
	{
		add.mMat[i] = mMat[i] + other.mMat[i];
	}
	return add;
}

Matrix2 Matrix2::operator-(Matrix2 & other)
{
	Matrix2 sub;
	for (int i = 0; i < 4; i++)
	{
		sub.mMat[i] = mMat[i] - other.mMat[i];
	}
	return sub;
}

Matrix2 Matrix2::operator*(Matrix2 &other)
{
	Matrix2 scale;
	scale.mMat[0] = mMat[0] * other.mMat[0];
	scale.mMat[1] = mMat[0] * other.mMat[1];
	scale.mMat[2] = mMat[0] * other.mMat[2];
	scale.mMat[3] = mMat[0] * other.mMat[3];
	return scale;
}

ostream & operator<<(ostream & os, const Matrix2 matrix)
{
	os << matrix.mMat[0] << " " << matrix.mMat[1] << endl;
	os << matrix.mMat[2] << " " << matrix.mMat[3] << endl;
	return os;
}

istream & operator >> (istream & is, Matrix2 matrix)
{
	is >> matrix.mMat[0] >> matrix.mMat[1];
	is >> matrix.mMat[2] >> matrix.mMat[3];
	return is;
}
