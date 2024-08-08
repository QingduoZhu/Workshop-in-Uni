double* duplicateArray(double* array, int size)
{
	double arraynew[9999];
	for (int i = 0; i < size; i++)
	{
		arraynew[i] = array[i];
	}
	return arraynew;
}