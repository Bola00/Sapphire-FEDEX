#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <windows.h>

#ifndef DATABASE_H
#define DATABASE_H

int createDataBase();
int eventID();
int insertData(int ID, std::string TableChoose, std::vector<int> results);

#endif //PCH_H
