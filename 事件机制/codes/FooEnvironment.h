#pragma once

#include "gtest/gtest.h"

// ȫ���¼�
class FooEnvironment : public testing::Environment
{
public:

	// 1. SetUp()���������а���ִ��ǰִ��
	virtual void SetUp();

	// 2. TearDown()���������а���ִ�к�ִ��
	virtual void TearDown();

};

