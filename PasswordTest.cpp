/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, has_mixed_cases)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, my_password.count_leading_characters("Z"));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest1, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZzZ");
	ASSERT_EQ(2, my_password.count_leading_characters("ZzZ"));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest2, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("   ");
	ASSERT_EQ(3, my_password.count_leading_characters("   "));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest3, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("""I");
	ASSERT_EQ(2, my_password.count_leading_characters("""I"));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest4, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Aab");
	ASSERT_EQ(1, my_password.count_leading_characters("Aab"));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest5, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("AAa");
	ASSERT_EQ(2, my_password.count_leading_characters("AAa"));   //// This makes sure the value that is given is what is expected. 
}

TEST(PasswordTest6, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("AA ");
	ASSERT_EQ(2, my_password.count_leading_characters("AA "));   //// This makes sure the value that is given is what is expected. 
};