#ifndef DIRREAD_H
#define DIRREAD_H
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <vector>
#include <bits/stdc++.h>

std::vector<std::string> recurse(DIR*,std::string,std::string);

#endif