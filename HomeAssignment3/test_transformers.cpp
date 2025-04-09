#include <gtest/gtest.h>
#include "Transformers.h"
#include "autobot.h"
#include "minicon.h"   
#include "decepticon.h"  

// --- BaseTransformer Tests ---
TEST(TransformerTest, DefaultValues) {
    BaseTransformer transformer;
    EXPECT_EQ(transformer.getName(), "");  
    EXPECT_EQ(transformer.getHeight(), 0); 
}

TEST(TransformerTest, SetNameAndHeight) {
    BaseTransformer transformer;
    transformer.setName("Optimus");
    transformer.setHeight(30);
    EXPECT_EQ(transformer.getName(), "Optimus");
    EXPECT_EQ(transformer.getHeight(), 30);
}

// --- Autobot Tests ---
int Autobot::autobotCounter = 0; // Initialize static counter

TEST(AutobotTest, CounterIncrementsCorrectly) {
    int initialCount = Autobot::autobotCounter;
    Autobot bot1, bot2;
    EXPECT_EQ(Autobot::autobotCounter, initialCount + 2); 
}

TEST(AutobotTest, InheritsBaseProperties) {
    Autobot autobot;
    autobot.setName("Bumblebee");
    autobot.setHeight(15);
    EXPECT_EQ(autobot.getName(), "Bumblebee");  
    EXPECT_EQ(autobot.getHeight(), 15);
}

// --- Minicon Tests ---
int Minicon::miniconCounter = 0; 

TEST(MiniconTest, CounterIncrements) {
    int initialCount = Minicon::miniconCounter;
    Minicon mini1;
    EXPECT_EQ(Minicon::miniconCounter, initialCount + 1);
}

TEST(MiniconTest, SmallSize) {
    Minicon minicon;
    minicon.setHeight(5);
    EXPECT_LT(minicon.getHeight(), 10); 
}

// --- Decepticon Tests ---
TEST(DecepticonTest, EvilNameAssignment) {
    Decepticon decepticon;
    decepticon.setName("Starscream");
    EXPECT_EQ(decepticon.getName(), "Starscream");
}

TEST(DecepticonTest, TallHeight) {
    Decepticon decepticon;
    decepticon.setHeight(50);
    EXPECT_GT(decepticon.getHeight(), 30); 
}


TEST(InteractionTest, AutobotVsDecepticonNames) {
    Autobot autobot;
    Decepticon decepticon;
    autobot.setName("Ironhide");
    decepticon.setName("Soundwave");
    EXPECT_NE(autobot.getName(), decepticon.getName()); 
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
