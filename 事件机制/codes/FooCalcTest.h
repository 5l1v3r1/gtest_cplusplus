#pragma once

#include "gtest/gtest.h"

// TestCase�¼�
class FooCalcTest : public testing::Test
{
protected:
	virtual void SetUp();
	
	virtual void TearDown();
};