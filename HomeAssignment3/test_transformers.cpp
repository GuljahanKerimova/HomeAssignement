

#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "minicon.h"   
#include "decepticon.h"  
#include <iostream>

// Base class test
TEST(TransformerTest, transformers) {
    BaseTransformer myRobo2;
    myRobo2.setName("Titanus");
    myRobo2.setHeight(150);
    EXPECT_EQ(myRobo2.getHeight(), 150);
    EXPECT_EQ(myRobo2.getName(), "Titanus");
}

// Autobots
// We initialized the value of the autobots counter 
int Autobot::autobotCounter = 0;
TEST(AutobotTest, autobotsCount) {
    Autobot autobot;
    Autobot autobot1;
    Autobot autobotQ;
    EXPECT_EQ(Autobot::autobotCounter, 3);
}

// Minicons
// We initialized the value of the counter 
int Minicon::miniconCounter = 0; 
TEST(MiniconTest, miniconsCount) {
    Minicon minicon; 
    EXPECT_EQ(Minicon::miniconCounter, 1); 
}

// Decepticons
TEST(DecepticonTest, decepticonGetName) { 
    Decepticon decepticon; 
    decepticon.setName("google");
    EXPECT_EQ(decepticon.getName(), "google");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
