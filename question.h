#pragma once

#include<string>
#include<vector>


//��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	std::string q;
	std::string a;
	std::vector<std::string> b; // ����(��������ꍇ)
};

//��蕶�̗t������\���^
using QuestionList = std::vector<Question>;