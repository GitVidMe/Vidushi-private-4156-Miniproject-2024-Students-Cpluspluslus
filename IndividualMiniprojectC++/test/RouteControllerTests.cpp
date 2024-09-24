/* Copyright 2024 Vidushi Bansal */
#include "../include/RouteController.h"
#include "../include/MyFileDatabase.h"

#include <gtest/gtest.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include "../include/Course.h"

#include "../external_libraries/Crow-1.2.0-Darwin/include/crow.h"
  

class RouteControllerTests : public ::testing::Test {
protected:
    RouteController routeController;
    crow::request req;
    crow::response res;

};

// Test case for successfully retrieving a course
TEST_F(RouteControllerTests, RetrieveCourses_Success) {
    // Arrange
    req.url_params = crow::query_string("/retrieveCourses?courseCode=4102");
    routeController.retrieveCourses(req, res);

    // Assert
    EXPECT_EQ(res.code, 200);
    std::cout<< "bjfdklmkdlmnhvjfdkn" << res.body.find("Department: CHEM Course Details: Instructor: Dalibor Sames; Location: 320 HAV; Time: 10:10-11:25");
}
