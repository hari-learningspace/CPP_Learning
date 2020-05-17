#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include <string>
#include <vector>

enum States { kEmpty = 0, kObstacle };

using Board = std::vector<std::vector<States>>;

#endif
