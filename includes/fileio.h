/*
 * fileio.h
 *
 *  Created on: Feb 15, 2021
 *      Author: tommywozny
 */

#ifndef FILEIO_H
#define FILEIO_H
#include <string>
#include <vector>
#include "constants.h"

int loadData (const std::string filename, std::vector<process> &myProcesses);
int saveData (const std::string filename, std::vector<process> &myProcesses);

#endif
