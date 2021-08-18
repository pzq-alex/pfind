#ifndef __PZQ_PATTERNS_H__
#define __PZQ_PATTERNS_H__

#include <array>
#include <cstdint>
#include "search_params.h"

// typedef std::array<int, width + offset> row;
typedef int32_t                   row; // if you're running this on a 16-bit machine please do tell me
typedef std::array<row, 2 * peri> portion;

bool compatible(portion p, row r)
{
    // TODO
}

#endif
