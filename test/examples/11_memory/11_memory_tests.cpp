#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify ref_ptr params function")
{
	int num1 = 1;
	int num2 = 2;
	ref_ptr_parameters(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);
}