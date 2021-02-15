/*
 * utils.h
 *
 *  Created on: Feb 15, 2021
 *      Author: tommywozny
 */

#ifndef UTILS_H
#define UTILS_H
#include <vector>
#include "constants.h"

void sortData (const SORT_ORDER &mySortOrder, std::vector<process> & myProcesses);

int getSize (std::vector<process> &myProcesses);

int handleMissingData(std::vector<process> &myProcesses);

process getNext (std::vector<process> &myProcesses);

#endif
