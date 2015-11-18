#ifndef READING_FILE_H_
#define READING_FILE_H_

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "math_lib.h"

namespace reader {

std::vector<double> lineToVector(const std::string &line);
math::Matrix matrixExamples();
math::SquareMatrix matrixDissimilarity(const math::Matrix &m1);

}  // namespace reader


#endif  // READING_FILE_H_
