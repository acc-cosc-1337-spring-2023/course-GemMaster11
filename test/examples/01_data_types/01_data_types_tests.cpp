#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decimals.h"
#include "int.h"
#include "char.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test echo_variable function", "do values echo")
{
	REQUIRE(echo_variable(5) == 5);
	REQUIRE(echo_variable(50) == 50);
	REQUIRE(echo_variable(500) == 500);
	REQUIRE(echo_variable(5000) == 5000);
}
/*test case add_to_double_1 with 0 as parameter*/
TEST_CASE("Test add to double 1 w 0 function", "do values echo")
{
	//REQUIRE(add_to_double_1(1) == 1.9);
	//REQUIRE(add_to_double_1(5) == 6);
}

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("Test get char ascii valuefunction", "are chars stored as numbers")
{
	REQUIRE(get_char_ascii_value('A') == 65);
	REQUIRE(get_char_ascii_value('a') == 97);
}
/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

