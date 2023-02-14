#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify get letter grade using else if")
{
	REQUIRE(get_letter_grade_using_if(95) == "Your letter grade is: A");
	REQUIRE(get_letter_grade_using_if(85) == "Your letter grade is: B");
	REQUIRE(get_letter_grade_using_if(75) == "Your letter grade is: C");
	REQUIRE(get_letter_grade_using_if(65) == "Your letter grade is: D");
	REQUIRE(get_letter_grade_using_if(50) == "Your letter grade is: F");
}

TEST_CASE("Verify get letter grade using switch")
{
	REQUIRE(get_letter_grade_using_if(50) == "Your letter grade is: F");
	REQUIRE(get_letter_grade_using_if(65) == "Your letter grade is: D");
	REQUIRE(get_letter_grade_using_if(75) == "Your letter grade is: C");
	REQUIRE(get_letter_grade_using_if(85) == "Your letter grade is: B");
	REQUIRE(get_letter_grade_using_if(95) == "Your letter grade is: A");
}
