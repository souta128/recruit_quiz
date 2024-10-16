#include"exam_japanese.h"
using namespace std;

/*
* �����̓ǂݎ������쐬
*/
QuestionList CreatKanjiExam() {
	static const struct {
		const char* kanji;
		const char* reading;
		const char* meaning;
	} data[] = {
	{"�s��", "������","�l�������W�܂��ĕ�炷�Ƃ���A��"},
	{"���", "�Ȃ���","�i�����Ƌ��Ɂj��ӂ���������"},
	{"���E", "��������","�����C�̌��ʁA�����Ȃ��Ȃ邱��"},
	{"�}��", "�͂�ꂢ","�{��}�\�̏��߂ɁA�g������񑩎����ӏ������ɂ�������"},
	{"���", "�₭���傤","�񑩂��Č��߂邱�ƁA�_��"},
};

	constexpr int quizConst = 5;
	QuestionList questions;
	questions.reserve(quizConst);
	for (int i = 0; i < quizConst; i++) {
		const auto& e = data[i];
		questions.push_back({
		"�u" + string(e.kanji) + "�u�̓ǂ݂𕽉����œ�����",
		e.reading });
	}
	return questions;