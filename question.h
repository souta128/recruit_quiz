#pragma once

#include<string>
#include<vector>


//��蕶�Ɠ������܂Ƃ߂�\����
struct Question
{
	std::string q;
	std::string a;
};

//��蕶�̗t������\���^
using QuestionList = std::vector<Question>;