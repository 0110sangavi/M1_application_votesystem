#include "../unity/unity.h"
#include "../inc/ELECTION.H"

/* Prototypes for all the test functions */
void test_extractYear(void);

void setUp(){}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_extractYear);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_extractYear(void){
    TEST_ASSERT_EQUAL(2018, extractYear("2018btecs00064"));
    TEST_ASSERT_EQUAL(2014, extractYear("2014btecs00061"));
}
