#include"utility.h"
#include<random>
using namespace std;

/*
*�����_���Ȕԍ��z����쐬
*/
vector<int> CreatRandomIndices(int n) {
	//�ԍ���z��Ɋi�[
	vector<int> indices(n);
	for (int i = 0; i < n; i++){
		indices[i];
	}

	//�ԍ��̔z����V���b�t��
	random_device rd;
	mt19937 rand(rd());
	for (int i = n - 1; i > 0; i--) {
		const int j = uniform_int_distribution<>(0, i)(rand);
		const int tmp = indices[i];
		indices[i] = indices[j];
		indices[j] = tmp;
	}

	return indices;
}