#pragma once
#include<vector>

//�z����V���b�t������
void Shuffle(std::vector<int>& indices);

//�����_���Ȕԍ��z����쐬
std::vector<int> CreateRandomIndices(int n);

//�Ԉ�����ԍ��̔z����쐬����
//n        �쐬����ԍ��͈̔�
//crrectIndex  �����̔ԍ�
std::vector<int> CreateWrongIndices(int n, int correctIndex);