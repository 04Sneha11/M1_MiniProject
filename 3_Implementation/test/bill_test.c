#include "unity.h"
#include "bill.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

double price[7] = {15.80 , 10.50 , 19.00 , 14.00 , 12.00 , 22.00 , 16.00 };

void test_order_for_adult(void) {
  int items[] = {1};
  int item_cnt[] = {2};
  int count = 1;
  double exp = 33.18;
  TEST_ASSERT_EQUAL_DOUBLE(exp, orderForAdult(price, items, item_cnt, count));
}

void test_order_for_child(void) {
  int items[] = {5, 4};
  int item_cnt[] = {2, 1};
  int count = 2;
  double exp = 23.94;
  TEST_ASSERT_EQUAL_DOUBLE(exp, orderForChildren(price, items, item_cnt, count));
}
void test_order_meals(void) {
  int items[] = {5, 4};
  int item_cnt[] = {2, 1};
  int count = 2;
  double exp = 54.264;
  TEST_ASSERT_EQUAL_DOUBLE(exp, orderMeals(1, 1, 33.18, 23.94));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_order_for_adult);
  RUN_TEST(test_order_for_child);
  RUN_TEST(test_order_meals);

  /* Close the Unity Test Framework */
  return UNITY_END();
}