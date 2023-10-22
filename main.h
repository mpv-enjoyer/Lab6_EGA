#pragma once
#include <random>
#include <vector>
#include <iostream>
#include <ctime>

// Функции для вычисления точного оптимального значения
void print_optimal(std::vector<std::vector<int>>& distance);
void optimal_internal(std::vector<bool> used, std::vector<int> trace, int overall_distance, std::vector<std::vector<int>>& distance);
bool is_optimal(int input, bool RESET = false);
std::vector<int> get_current_optimal_trace(std::vector<int> trace_input = {});
// ...

// Разное
std::string to_string(std::vector<int> input);
int randomnumber(int included_min, int included_max);
void print_step(int step, std::vector<int> trace, int selected_town_in, int selected_town_out, int overall_distance, int distance);
// ...

std::vector<int> method(int N, std::vector<std::vector<int>>& distance, int step, int start_from, bool enable_dumb_insert);