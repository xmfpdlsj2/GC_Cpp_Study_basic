#pragma once
#include <iostream>

enum SocobaObject
{
	OBJ_SPACE,
	OBJ_WALL,
	OBJ_GOAL,
	OBJ_BLOCK,
	OBJ_BLOCK_ON_GOAL,
	OBJ_PLAYER,
	OBJ_PLAYER_ON_GOAL,

	OBJ_UNKNOWN
};

const int gStageWidth = 8;
const int gStageHeight = 5;

void Initialize(SocobaObject*, const char*, int, int);
void Draw(const SocobaObject*, int, int);
bool CheckClear(const SocobaObject*, int, int);
void Update(SocobaObject*, char, int, int);

// ½Ü ÇÇµåº¤
void Initialize_SSam(SocobaObject*, const char*, int, int);
void Draw_SSam(const SocobaObject*, int, int);
bool CheckClear_SSam(const SocobaObject*, int, int);
void Update_SSam(SocobaObject*, char, int, int);
