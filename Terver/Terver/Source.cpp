using namespace std;
#include <iostream>
#include "Rabotai.h"



int main()
{
	try {
		double lamba;
		int sample_size;
		Random_Variable xi;
		while (true)
		{
			cout << "Enter lambda: " << endl;
			cin >> lamba;
			cout << "Enter sample size: " << endl;
			cin >> sample_size;
			xi.set_parameter(lamba);
			xi.generate_sample(sample_size);
			for (int i = 0; i < sample_size; i++) 
			{
				cout << xi.get_sample(i) << endl;
			}
			//cout << "Sample mean: " << xi.get_sample_mean() << endl;
			//cout << "Sample variance: " << xi.get_sample_variance() << endl;
		}
	}
	catch (int e)
	{
		cout << "ups";
	}
}