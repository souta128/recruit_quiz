#pragma once

#include<string>
#include<vector>


//問題文と答えをまとめる構造体
struct Question
{
	std::string q;
	std::string a;
};

//問題文の葉入れるを表す型
using QuestionList = std::vector<Question>;