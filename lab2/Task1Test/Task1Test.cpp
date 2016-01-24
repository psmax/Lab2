// Task1Test.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

#include "../Task1/Function.h"

BOOST_AUTO_TEST_SUITE(RemoveExtraSpaces_tests)
	BOOST_AUTO_TEST_CASE(Check_empty_string)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces(""), "");
	}

	BOOST_AUTO_TEST_CASE(Check_one_space)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces(" "), "");
	}

	BOOST_AUTO_TEST_CASE(Check_two_spaces)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces("  "), "");
	}

	BOOST_AUTO_TEST_CASE(Check_one_word)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces("test"), "test");
	}

	BOOST_AUTO_TEST_CASE(Check_first_and_last_spaces)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces(" test "), "test");
	}

	BOOST_AUTO_TEST_CASE(Check__space_between_words)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces(" test  word"), "test word");
	}

	BOOST_AUTO_TEST_CASE(Check_multiple_spaces)
	{
		BOOST_CHECK_EQUAL(RemoveExtraSpaces("        need         more time          "), "need more time");
	}
BOOST_AUTO_TEST_SUITE_END()