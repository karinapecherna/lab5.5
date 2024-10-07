#include "pch.h"
#include "CppUnitTest.h"
#include <sstream> 
#include "../lab5.5/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;


namespace UnitTestForPascalsTriangle
{
    TEST_CLASS(UnitTestForPascalsTriangle)  {
    public:

        TEST_METHOD(TestPascalsTriangleForN3)
        {
            
            stringstream buffer;
            streambuf* old = cout.rdbuf(buffer.rdbuf());

           
            string expectedOutput = "  1 \n 1 1 \n1 2 1 \n";

            
            printPascalsTriangle(3);

            
            Assert::AreEqual(expectedOutput, buffer.str());

           
            cout.rdbuf(old);
        }
    };
}
