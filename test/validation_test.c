#include <ctest.h>
#include "deposit.h"

CTEST(arithmetic_suite, test_1){
	const int time = 364;
	const int money = 9999;

	const int result = check(money, time);

	const int i = 0;
	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, test_2)
{
	const float time = 365;
	const float money = 10000;

	const int result = check(money, time);

	const int i = 1;
	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, test_3)
{
	const float time = 366;
	const float money = 10005;

	const int result = check(money, time);

	const int i = 1;
	ASSERT_EQUAL(i, result);
}

CTEST(arithmetic_suite, test_4)
{
	const float time = 365;
	const float money = 10005;

	const int result = check(money, time);

	const int i = 0;
	ASSERT_EQUAL(i, result);
}
