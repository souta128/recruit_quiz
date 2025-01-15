#pragma once

#include<string>
#include<vector>


//–â‘è•¶‚Æ“š‚¦‚ğ‚Ü‚Æ‚ß‚é\‘¢‘Ì
struct Question
{
	std::string q;
	std::string a;
	std::vector<std::string> b; // “š‚¦(•¡”‚ ‚éê‡)
};

//–â‘è•¶‚Ì—t“ü‚ê‚é‚ğ•\‚·Œ^
using QuestionList = std::vector<Question>;