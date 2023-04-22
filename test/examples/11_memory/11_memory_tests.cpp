#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"
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

TEST_CASE("Test my vector size") 
{
	Vector v(3);
	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity") 
{
	Vector v(3);
	REQUIRE(v.Capacity() == 3);
}


TEST_CASE("Test my vector overloaded[]") 
{
	Vector v(3);
	v[0] =5;

	REQUIRE(v[0] == 5);
}

TEST_CASE("Test my vector class copy") 
{
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v.Size() == v1.Size());
}

TEST_CASE("test my vector create 2 vectors overwrite v1 with v")
{
	Vector v(3);
	Vector v1(3);
	v1 = v;
}

TEST_CASE("Test overwrite vector with std move function")
{
	Vector v(3);
	Vector v1 = std::move(v);
}