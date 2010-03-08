/* AUTOGENERATED FILE. DO NOT EDIT. */
#include "unity.h"

extern void setUp(void);
extern void tearDown(void);

extern void test_MemNewWillReturnNullIfGivenIllegalSizes(void);
extern void test_MemNewWillNowSupportSizesGreaterThanTheDefinesCMockSize(void);
extern void test_MemChainWillReturnNullAndDoNothingIfGivenIllegalInformation(void);
extern void test_MemNextWillReturnNullIfGivenABadRoot(void);
extern void test_ThatWeCanClaimAndChainAFewElementsTogether(void);
extern void test_ThatWeCanAskForAllSortsOfSizes(void);

static void runTest(UnityTestFunction test)
{
  if (TEST_PROTECT())
  {
    setUp();
    test();
  }
  tearDown();
}


int main(void)
{
  Unity.TestFile = __FILE__;
  UnityBegin();

  // RUN_TEST calls runTest
  RUN_TEST(test_MemNewWillReturnNullIfGivenIllegalSizes);
  RUN_TEST(test_MemNewWillNowSupportSizesGreaterThanTheDefinesCMockSize);
  RUN_TEST(test_MemChainWillReturnNullAndDoNothingIfGivenIllegalInformation);
  RUN_TEST(test_MemNextWillReturnNullIfGivenABadRoot);
  RUN_TEST(test_ThatWeCanClaimAndChainAFewElementsTogether);
  RUN_TEST(test_ThatWeCanAskForAllSortsOfSizes);

  UnityEnd();

  return 0;
}