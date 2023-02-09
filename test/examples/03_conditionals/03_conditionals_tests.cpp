#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test get anded result", "and truth table")
{
	REQUIRE(get_anded_result(true, true) == true);
	REQUIRE(get_anded_result(true, false) == false );
	REQUIRE(get_anded_result(false, true) == false );
	REQUIRE(get_anded_result(false, false) == false );
}

TEST_CASE("Test get ored result", "and truth table")
{
	REQUIRE(get_ored_result(true, true) == true);
	REQUIRE(get_ored_result(true, false) == true);
	REQUIRE(get_ored_result(false, true) == true );
	REQUIRE(get_ored_result(false, false) == false );
}

TEST_CASE("Test get notted result", "and truth table")
{
	REQUIRE(get_notted(true) == false);
	REQUIRE(get_notted(false) == true);
}

TEST_CASE("Testing get_bool_order_of_ops", "! && ||")
{
	REQUIRE(get_bool_order_of_ops(true, false, true) == true);
	REQUIRE(get_bool_order_of_ops(false, true, false) == true);
	REQUIRE(get_bool_order_of_ops(false, false, false) == false);
}

TEST_CASE("Test get overtime function")
{
	REQUIRE(get_is_over_time(39) == false);
	REQUIRE(get_is_over_time(40) == false);
	REQUIRE(get_is_over_time(41) == true);
}

TEST_CASE("Test is_even")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(4) == true);
}

TEST_CASE("Test generation function")
{
	REQUIRE(get_generation(2023) == "Invalid Year");
	REQUIRE(get_generation(2000) == "Centennial");
	REQUIRE(get_generation(1990) == "Millennial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1800) == "Invalid Year");
}

TEST_CASE("Test get menu options", "Test switch statements")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
}