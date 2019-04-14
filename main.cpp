
#include <iostream>
#include <vector>
#include "histogram.h"

using namespace std;

vector <double> input_numbers(size_t count)
{
    cerr << "Enter numbers:\n";
    vector<double> result(count);
    for (size_t i = 0; i < count; i++)
    {
        cin >> result[i];
    }
    return result;
}


int
main()
{
    // Ввод данных
    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;
    const auto numbers = input_numbers(number_count);

    size_t bin_count;
    cerr << "Enter column count: ";
    cin >> bin_count;
    // Обработка данных
    const auto bins = make_histogram(numbers,bin_count);

    // Вывод данных
    //show_histogram_text(bins);
    show_histogram_svg(bins);
    return 0;
}
