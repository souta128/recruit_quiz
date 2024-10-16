#include"exam_japanese.h"
using namespace std;

/*
* 漢字の読み取り問題を作成
*/
QuestionList CreatKanjiExam() {
	static const struct {
		const char* kanji;
		const char* reading;
		const char* meaning;
	} data[] = {
	{"市井", "しせい","人が多く集まって暮らすところ、町"},
	{"捺印", "なついん","（署名と共に）印鑑を押すこと"},
	{"相殺", "そうさい","足し匹の結果、差がなくなること"},
	{"凡例", "はんれい","本や図表の初めに、使い方や約束事を箇条書きにしたもの"},
	{"約定", "やくじょう","約束して決めること、契約"},
};

	constexpr int quizConst = 5;
	QuestionList questions;
	questions.reserve(quizConst);
	for (int i = 0; i < quizConst; i++) {
		const auto& e = data[i];
		questions.push_back({
		"「" + string(e.kanji) + "「の読みを平仮名で答えよ",
		e.reading });
	}
	return questions;