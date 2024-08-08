double* duplicateArray(double* array, int size)
{
	double* arraynew = new double(size+1);
	for (int i = 0; i < size; i++)
	{
		arraynew[i] = array[i];
	}
	return arraynew;
}