#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "BasicCalls.h"
#include "StructsAndEnums.h"

bool ReadMapFromFile(Map* _PlaneMap, FILE* _File);
bool AllocateMap(Map* _PlaneMap);
void FreeMap(Map* _PlaneMap);
int GetSeatsPerLine(FILE* _File);
int GetNumberOfCharsForLongestLineInFile(FILE* _File);
int GetNumberOfLinesInFile(FILE* _File);
void MapLocationSetValue(Map* _PlaneMap, int _X, int _Y, int Value);