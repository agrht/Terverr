#pragma once

using namespace std;
#include <random>
#include <ctime>
#include <valarray>
#include <algorithm>

double task_inverse_probability(double lambda)
{
	double t;
	t = abs(rand());
	double dt = t / RAND_MAX;
	t = log(1 - dt)/(-lambda);
	return t;
}

class Random_Variable
{
private:
	//точные парамеиры случайной величины
	double lambda;
	double mean;

	//параметры выборки
	valarray<double> sample;
	double(*inverse_probability)(double);
	double sample_mean;

public:
	Random_Variable() { //
		//inverse_probability = task_inverse_probability;
		lambda = 0;
		mean = 0;		
		sample_mean = 0;
	}
	double set_parameter(double);
	void generate_sample(int);
	double get_sample(int);
	double get_sample_mean();	
};
double Random_Variable::set_parameter(double p) 
{
	return lambda=p;
}

void Random_Variable::generate_sample(int size)
{ //
	sample.resize(size);
	for (int i = 0; i < size; i++)
		sample[i] = 0;
	double t;
	srand(time(NULL));
	//t = log(1 - dt) / (-lambda);
	//return t;
	for (int i = 0; i < size; i++)
	{
		t = abs(rand());
		double dt = t / RAND_MAX;
		sample[i] = log(1 - dt) / (-lambda);
		//sample[i] = task_inverse_probability(lambda);
	}

	vector<double> vec(size);
	for (int i = 0; i < size; i++)
	{
		vec[i] = sample[i];
	}
	
	sort(vec.begin(), vec.end());
	for (int i = 0; i < size; i++)
	{
		sample[i] = vec[i];
	}
}

double Random_Variable::get_sample(int i)
{
	return sample[i];
}

double Random_Variable::get_sample_mean() {
	return sample_mean;
}


