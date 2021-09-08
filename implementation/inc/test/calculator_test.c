/**
 * @file calculatortest.c
 * @author md salman
 * @brief 
 * @version 0.1
 * @date 2021-09-08
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "unity.h"

/* Modify these two lines according to the project */
#include "calculator.h"
#define PROJECT_NAME   "Basic calculator"

/* Prototypes for all the test functions */
void test_addition(void);




/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addition);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_addition(void) {
  TEST_ASSERT_EQUAL(7,addition(5,6));
   TEST_ASSERT_EQUAL(7,subtraction(5,6));
   TEST_ASSERT_EQUAL(7,divition(5,6));
   TEST_ASSERT_EQUAL(7,factorial(5));
 /* TEST_ASSERT_EQUAL(7,multplication(10,3));*/
  
}


