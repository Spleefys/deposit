#include <ctest.h>
#include "deposit.h"

//10000
CTEST(arithmetic_suite, time0_0)
{
	const float sum = 10000;
	const float time = 0;

	const float result = profit(sum, time);

	const float i = sum + sum * -0.1;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time0_30)
{
	const float sum = 10000;
	const float time = 30;

	const float result = profit(sum, time);

	const float i = sum + sum * -0.1;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time0_31)
{
	const float sum = 10000;
	const float time = 31;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.02;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time0_120)
{
	const float sum = 10000;
	const float time = 120;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.02;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time0_121)
{
	const float sum = 10000;
	const float time = 121;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.06;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time0_240)
{
	const float sum = 10000;
	const float time = 240;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.06;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time0_241)
{
	const float sum = 10000;
	const float time = 241;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.12;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time0_365)
{
	const float sum = 10000;
	const float time = 365;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.12;
	ASSERT_DBL_NEAR(i, result);
}

//100000

CTEST(arithmetic_suite, time1_0)
{
	const float sum = 100000;
	const float time = 0;

	const float result = profit(sum, time);

	const float i = sum + sum * -0.1;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time1_30)
{
	const float sum = 100000;
	const float time = 30;

	const float result = profit(sum, time);

	const float i = sum + sum * -0.1;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time1_31)
{
	const float sum = 100000;
	const float time = 31;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.03;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time1_120)
{
	const float sum = 100000;
	const float time = 120;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.03;
	ASSERT_DBL_NEAR(i, result);
}


CTEST(arithmetic_suite, time1_121)
{
	const float sum = 100000;
	const float time = 121;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.08;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time1_240)
{
	const float sum = 100000;
	const float time = 240;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.08;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time1_241)
{
	const float sum = 100000;
	const float time = 241;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.15;
	ASSERT_DBL_NEAR(i, result);
}

CTEST(arithmetic_suite, time1_365)
{
	const float sum = 100000;
	const float time = 365;

	const float result = profit(sum, time);

	const float i = sum + sum * 0.15;
	ASSERT_DBL_NEAR(i, result);
}
