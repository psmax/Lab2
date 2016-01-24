#include "stdafx.h"
#include "Function.h"
#include <boost/range/algorithm/transform.hpp>
#include <boost/phoenix.hpp>

using namespace std;

string RemoveExtraSpaces(string const &arg)
{
	string outputStr;
	if (arg.length() > 1)
	{
		size_t i = arg.find_first_not_of(' ');
		outputStr.reserve(arg.length() - i);
		for (i; i < arg.length() - 1; i++)
		{
			if (!((arg[i] == ' ') && (arg[i + 1] == ' ')))
			{
				outputStr += arg[i];
			}
		}
		if (arg.back() != ' ')
		{
			outputStr += arg.back();
		}
	}
	else
	{
		if (arg != " ")
		{
			outputStr += arg;
		}
	}
	return outputStr;
}

// ����������� ����� find_first_not_of
//while ((arg[i] == ' ') && (i < arg.length()))
//{
//	i++;
//}
// � ���������� ���� ������ front() � back(), ������������ ������ �� ������ � ��������� ��������
//if (arg[arg.length() - 1] != ' ')
// ��������� ���, ���� ��� ������ ������ ��� �������� 1 ������
//if ((arg.length() > 0) && (arg[arg.length() - 1] != ' '))
//{
//	outputStr += arg[arg.length() - 1];
//}