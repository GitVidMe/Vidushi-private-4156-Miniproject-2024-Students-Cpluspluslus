# COMS-4156-Project
This is the GitHub repository for the **service portion** of the Mini Project associated with COMS 4156 Advanced Software Engineering. I, Vidushi Bansal, worked on this mini project. 

## Viewing the Client App Repository
Please use the following link to view the repository relevant to the app: 
https://github.com/GitVidMe/Vidushi-private-4156-Miniproject-2024-Students-Cpluspluslus

## Building and Running a Local Instance
In order to build and use this service you must install the following (This guide assumes Linux distribution):

CI/CD
Used existing github action workflow: c-cpp, Updated the code to install required external_libraries and build using cmake

BASIC TOOLS
1. Package Manager - Make sure that you have the apt package manager by running this command in the terminal.
    apt
    sudo apt update
    sudo apt install build-essential
2. Visual Studio Code IDE - Download and Install Visual Studio Code IDE in your system for ease.
    sudo apt install code 
3. GCC: Make sure that you have gcc compiler installed for building.
    gcc --version # To check if gcc is present
    sudo apt-get install manpages-dev # install gcc
4. Cloning GitHub Repository - You can use https method to clone the github repository.
    git clone <from a GitHub repo, click the green code button and copy the http line that is provided there>
    Alternatively, when you open VS Code, you have the option to clone from a GitHub repo, copy the same http line and give it to your IDE to clone.
5. In order to build the project with cmake you can run 'cmake .' from the directory where the CMakeLists.txt file is present. Build using command 'make' in the same directory. You can run the tests via the test files described below.
6. If you wish to run the style checker you can with  'make tests' from the same directory as in point 5. 

## Running a Cloud based Instance
You can reach my service using cloud computing as follows:
1. When running tests in Postman point them to:  http://35.229.103.211:8080/endpoint

## Running Tests
The unit tests are located under the directory 'src/test'. To run the tests, you must first build the project.
Run the following commands to run the tests
   make
   make test
Tests are logged in a log file

## Postman Test Documentation
View the list of API calls made over the network using post man fully documented with the received result and parameters: []
Specific Tests confirming proper returning of HTTP status codes and content types are ran during Continuous Integration as well.

## Style Checking Report
I used the tool "cpplint" to check the style of the code and generate style checking reports.

## Continuous Integration Report
This repository using GitHub Actions to perform continous integration, to view the latest results go to the file: c-cpp.yml 

Click on the latest job on the top under "X workflow runs" then Click 'build' under jobs finally click the drop down next to all the action items to read the logs made during their execution

## Tools used 🧰
This section includes notes on tools and technologies used in building this project, as well as any additional details if applicable.

* Python3
* pip
* external_libraries - crow, boost, asio, genhtml, lcov
* setup database
* cpplint for stylechecking
* googletest for testing
* GCOV for test suite creation
* Postman