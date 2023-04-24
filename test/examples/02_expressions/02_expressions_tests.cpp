#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify operator precedence 1", "verify order of operations")
{
	REQUIRE(operator_precedence_1(3, 6, 3) == 5);
}

TEST_CASE("Verify operator precedence 2", "verify with ()")
{
	REQUIRE(operator_precedence_2(3, 6, 3) == 3);
}

TEST_CASE("Verify int to double", "verify multiplication")
{
	REQUIRE(convert_to_double(10, .5) == 5);
}

TEST_CASE("Verify double to int", "verify conversion")
{
	REQUIRE(convert_double_to_int(5.55) == 5);
	//REQUIRE(convert_double_to_int(5.55) == 6);
}

TEST_CASE("Verify const variable area of circle")
{
	REQUIRE(get_area_of_circle(10) == 314.159);
}