#include "../unity/unity.h"
#include "../inc/ELECTION.H"

/* Prototypes for all the test functions */
void test_extractYear(void);
void test_getWinner(void);

void setUp(){

  for(int i=0; i < 20; i++) {
    candidateArray[i].cid = i;
    candidateArray[i].votes = i;
  }

  numberOfCandidates = 20;
}
void tearDown(){}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  RUN_TEST(test_extractYear);
  RUN_TEST(test_getWinner);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_extractYear(void){
    TEST_ASSERT_EQUAL(2018, extractYear("2018btecs00064"));
    TEST_ASSERT_EQUAL(2014, extractYear("2014btecs00061"));
}

void test_getWinner(void) {
  TEST_ASSERT_EQUAL(19, getWinner());
}