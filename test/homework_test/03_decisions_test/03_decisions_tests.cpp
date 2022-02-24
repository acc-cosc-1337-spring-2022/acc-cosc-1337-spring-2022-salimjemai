#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/homework/03_decisions/decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// Testing get_letter_grade_using_if function
TEST_CASE("Verify get_letter_grade_using_if function")
{
	REQUIRE("A" == get_letter_grade_using_if(95));
	REQUIRE("B" == get_letter_grade_using_if(85));
	REQUIRE("C" == get_letter_grade_using_if(75));
	REQUIRE("D" == get_letter_grade_using_if(65));
}

// Testing get_letter_grade_using_switch function
TEST_CASE("Verify get_letter_grade_using_switch function")
{
	REQUIRE("A" == get_letter_grade_using_switch(95));
	REQUIRE("B" == get_letter_grade_using_switch(85));
	REQUIRE("C" == get_letter_grade_using_switch(75));
	REQUIRE("D" == get_letter_grade_using_switch(65));
	REQUIRE("F" == get_letter_grade_using_switch(50));
}