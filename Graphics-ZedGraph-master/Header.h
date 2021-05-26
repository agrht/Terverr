#pragma once

#include <random>
#include <ctime>
#include <valarray>
#include <algorithm>

double task_inverse_probability(double lambda, int i)
{
	double t;
	t = abs(rand());
	double dt = t / RAND_MAX;
	t = log(1-dt)/(-lambda);
	return t;
}

class Random_Variable
{
private:
	//точные парамеиры случайной величины
	double lambda;
	double mean;
	double variance;
	double median;

	//параметры выборки
	std::vector<double> sample;
	//double(*inverse_probability)(double);
	double sample_mean; //выборочное среднее
	double sample_variance; //выборочная дисперсия
    double sample_median;     //медиана
    double sample_range;    //диапазон

public:
	Random_Variable() { //
		lambda = 0;
		mean = 0;
		sample_mean = 0;
		variance = 0;
		median = 0;
		sample_variance = 0;
		sample_median = 0;
		sample_range = 0;
	}
	double inverse_probability(double);
	double set_parameter(double);
	void generate_sample(int);
	double get_sample(int);
	double get_mean(); //мат ожидание
	double get_variance(); //дисперсия
	double get_sample_mean(); //среднее
	double get_sample_variance(); //выборочная дисперсия
	double get_sample_median(); //медиана
	double get_sample_range(); //р
	double get_mo_srednee(); //мат ожидание минус среднее
	double get_dis_srednee(); //дисперсия минус выборочная дисперсия
	double cumulative_distribution_function(double x); //функция F(x)
	double CDF_difference(); //функция чтобы посчитать D
	double sample_cumulative_distribution_function(double x); //F(x) с крышкой
	double get_sample_size(); //размер
	double probability_density(double x); //плотность
	void add_sample(double);
	void check_n_sort();
};
double Random_Variable::set_parameter(double p)
{
	return lambda = p;
}

inline double Random_Variable::cumulative_distribution_function(double x)
{
	if (x <= 0)
		return 0;
	else
		return (1 - exp(-lambda*x));
}

inline double Random_Variable::inverse_probability(double x)
{
	//double a = parameter / 2;
	//if (0 <= x && x <= 1) {
		if (x < 1)
			return log(1- x) / (-lambda);
	//}
	else
		throw 0;
}

inline void Random_Variable::add_sample(double a) 
{
	sample.push_back(a);
}

inline void Random_Variable::check_n_sort() {

	int size = sample.size();
	//генерируем выборку и сразу считаем среднее
	sample_mean = 0;
	for (int i = 0; i < size; i++) {
		sample_mean += sample[i];
	}
	sample_mean /= size;

	//дисперсия
	sample_variance = 0;
	if (sample.size() != 1) {
		for (int i = 0; i < size; i++) {
			double s = sample[i];
			sample_variance += (s - sample_mean) * (s - sample_mean);
		}
		sample_variance /= (size - 1);
	}

	std::sort(sample.begin(), sample.end());

	//медиана выборки
	if (size % 2 == 0) {
		sample_median = 0.5 * (sample[size / 2 - 1] + sample[size / 2]);
	}
	else {
		sample_median = sample[size / 2];
	}

	//размах выборки
	sample_range = sample[size - 1] - sample[0];
}

inline double Random_Variable::sample_cumulative_distribution_function(double x)
{
	if (x < sample[0])
		return 0;
	if (x >= sample[sample.size() - 1])
		return 1;
	int L = 0;
	int R = sample.size() - 1;
	int m=0;
	while (!(sample[m] <= x && x <= sample[m + 1])) {
		m = (L + R) / 2;
		if (x < sample[m])
			R = m - 1;
		else
			L = m + 1;
	}
	return (m + 1) / (double)sample.size();
}
	/*int n = sample.size();
	int flag = 0;
	for (int i=0;i<n;i++)
	{
		if (sample[i] < x)
			flag++;
	}
	return (1 / n)*flag;*/

inline double Random_Variable::probability_density(double x)
{
	if (x >= 0)
		return lambda * exp(-lambda * x);
	else
		return 0;
}

void Random_Variable::generate_sample(int size) 
{ 
	sample.resize(size);
	for (int i = 0; i < size; i++)
		sample[i] = 0;
	double t;
	srand(time(NULL));	
	for (int i = 0; i < size; i++) 
	{
		t = abs(rand());
		double dt = t / RAND_MAX;
		sample[i] = log(1 - dt) / (-lambda);
		//sample[i] = task_inverse_probability(lambda);
	}

	std::vector<double> vec(size);
	for (int i = 0; i < size; i++)
	{
		vec[i] = sample[i];
		sample_mean = sample[i] + sample_mean;
	}
	sample_mean /= size; //считаем среднее

	std::sort(vec.begin(), vec.end());
	for (int i = 0; i < size; i++)
	{
		sample[i] = vec[i];
	}

	mean = 1 / lambda; //мат ожидание
	variance = 1 / (lambda * lambda); //дисперсия
	double peremen = 0; 
	for (int i = 0; i < size; i++)
	{
		peremen = (sample[i] - sample_mean)*(sample[i] - sample_mean);
		sample_variance = peremen + sample_variance;
	}
	sample_variance /= size; //выборочная дисперсия
	//медиана выборки
	if (size % 2) 
	{
		sample_median = 0.5 * (sample[size / 2] + sample[(size / 2) + 1]);
	}
	else 
	{
		sample_median = sample[(size / 2) + 1];
	}
	//размах выборки
	sample_range = sample[size - 1] - sample[0];
}

inline double Random_Variable::CDF_difference()
{
	double max = 0;
	int n = sample.size();
	for (int i = 0; i < n; i++)
	{
		double a = i / (double)n - cumulative_distribution_function(sample[i] + 0.0000001);
		double b = cumulative_distribution_function(sample[i]) - (i - 1) / (double)n;
		if (a > max) max = a;
		if (b > max) max = b;
	}
	return max;
}

double Random_Variable::get_sample(int i)
{
	return sample[i];
}

double Random_Variable::get_sample_size()
{
	return sample.size();
}

double Random_Variable::get_mean()
{
	return mean;
}

double Random_Variable::get_variance()
{
	return variance;
}

double Random_Variable::get_sample_mean()
{
	return sample_mean;
}

double Random_Variable::get_sample_variance()
{
	return sample_variance;
}

double Random_Variable::get_sample_median()
{
	return sample_median;
}

double Random_Variable::get_sample_range()
{
	return sample_range;
}

double Random_Variable::get_mo_srednee()
{
	return abs(get_mean()-get_sample_mean());
}

double Random_Variable::get_dis_srednee()
{
	return abs(get_variance()-get_sample_variance());
}