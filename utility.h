#pragma once
#include<vector>

//配列をシャッフルする
void Shuffle(std::vector<int>& indices);

//ランダムな番号配列を作成
std::vector<int> CreateRandomIndices(int n);

//間違った番号の配列を作成する
//n        作成する番号の範囲
//crrectIndex  正解の番号
std::vector<int> CreateWrongIndices(int n, int correctIndex);