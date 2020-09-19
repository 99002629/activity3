#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <head.h>
#define PROJECT_NAME    "project"

/* Prototypes for all the test functions */
void test_login();
void test_mainMenu();
void test_checkBalance(float balance);
float test_moneyDeposit(float balance);
float test_moneyWithdraw(float balance);
void test_menuExit();
void test_errorMessage();

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "login", test_login);
  CU_add_test(suite, "mainMenu", test_mainMenu);
  CU_add_test(suite, "checkBalance", test_checkBalance);
  CU_add_test(suite, "moneyDeposit", test_moneyDeposit);
  CU_add_test(suite, "moneyWithdraw", test_moneyWithdraw);
  CU_add_test(suite, "menuExit", test_menuExit);
  CU_add_test(suite, "errorMessage", test_errorMessage);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions 
void test_login();
void test_mainMenu();
void test_checkBalance(float balance);
float test_moneyDeposit(float balance);
float test_moneyWithdraw(float balance);
void test_menuExit();
void test_errorMessage();*/

void test_checkBalance(void) {
  CU_ASSERT(10000 == checkBalance(balance));
  
  /* Dummy fail*/
  CU_ASSERT(9500==checkBalance(balance));
}
float test_moneyWithdraw(float balance){
 CU_ASSERT( balance >= moneyWithdraw(balance));
  
  /* Dummy fail*/
  CU_ASSERT( balance < moneyWithdraw(balance));
}

