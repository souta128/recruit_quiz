#pragma once
#include<vector>
#include<string>

//�z����V���b�t������
void Shuffle(std::vector<int>& indices);

//�����_���Ȕԍ��z����쐬
std::vector<int> CreateRandomIndices(int n);

//�Ԉ�����ԍ��̔z����쐬����
//n        �쐬����ԍ��͈̔�
//crrectIndex  �����̔ԍ�
std::vector<int> CreateWrongIndices(int n, int correctIndex);

// ������𕪊�����
// s �������镶����
// c ��؂蕶��
std::vector<std::string> Split(const std::string & s, char c);

// SJIS���l�������ASCII���l������ɕϊ�����
// sjis �ϊ�����sjis������
std::string ConvertSjisNumberToAscii(const std::string & sjis);