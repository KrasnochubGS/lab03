#ifndef HISTOGRAM_H_INCLUDED
#define HISTOGRAM_H_INCLUDED
#include <vector>
using namespace std;
void  find_minmax(vector<double> numbers, double& min, double& max);
vector <size_t> make_histogram(vector<double>numbers,size_t bin_count);
int show_histogram_text(vector <size_t> bins);
void svg_begin(double width, double height);
void svg_end();
void svg_text(double left, double baseline, string text);
void svg_rect(double x=0, double y=0, double width=100, double height=200,string stroke="black",string fill="black");
void show_histogram_svg(const vector<size_t>& bins);

#endif // HISTOGRAM_H_INCLUDED


