/*
 * TODO: Add an appropriate descriptive comment here
 */

#include <stdio.h>    // printf
#include <stdbool.h>  // to define a boolean type and true, false
#include <string.h>   // strcpy  to copy a string
#include <assert.h>


// declaration of function from hasUniqueChars.c
bool hasUniqueChars(char * inputStr);


int main() {

  // ------------------------------------------------------------
  // Examples of declaring string constants
  
  /* Example 3 */
  char string3[128];   // can copy in up to 127 characters
                       // chose 128 because it is a multiple of 8 bytes


  // You can uncomment these to see how the strings were initialized above.
  // Then you can comment these out again once you see that the 
  // strings were created correctly

  // -------------------------------------------------------------
  // Thorough and exhaustive tests of hasUniqueChars()  
  bool ok;    // holds the result of hasUniqueChars(); used in asserts
  
  // Test 1: a test case that should return false because characters are duplicated
  strcpy(string3, "AA");
  ok = hasUniqueChars(string3);
  assert(!(ok));
  
  
  // Test 2: This should be true and not fail, but won't work until you
  // complete the hasUniqueChars() function
   strcpy(string3, "abcdefghij");
   ok = hasUniqueChars(string3);
   assert(ok);
  
  // TODO: add your tests here



  // NOTE: if you add a \n to any tests, this should cause the
  //       exit failure given. Keep this test last so you can check 
  //       that others pass or fail as you expect them to.
  
  // other examples that should fail that you can place in strings
  // are \0 or \t or \r
  // See problem description for more details about escape sequences
  
  return 0;
}