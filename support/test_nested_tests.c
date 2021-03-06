#include "../clarify.h"

RUN_TESTS()
{
    GIVEN("two positive integers (1)")
    {
        printf("+ Given: two positive integers (1)\n");
        int a = 5;
        int b = 7;
        
        WHEN("they are added together")
        {
            printf(" + When: they are added together\n");
            int result = a + b;

            /* THEN */
            THEN("the result is correct")
            {
                printf("  + Then: the result is correct\n");
                REQUIRE(result == 12);
                
                //change the state
                b = 8;
            }
            
            /* THEN */
            THEN("something else happens")
            {
                printf("  + Then: something else happens\n");
                REQUIRE(result == 12);
                
                //change the state
                b = 8;
            }
        }

        WHEN("they they are multiplied")
        {
            printf(" + When: they are multiplied together\n");
            int result = a * b;
        
            /* THEN */
            THEN("the value is correct")
            {
                printf("  + Then: the value is correct\n");
                REQUIRE(result == 35);
            }
        }
    }
    
    // GIVEN("two positive integers (1)")
    // {
    //     int a = 5;
    //     int b = 7;
    //     
    //     WHEN ("they are added together")
    //     {
    //         int result = a + b;
    //         
    //         THEN ("the result is correct")
    //         {
    //             REQUIRE(result == 12);
    //             REQUIRE(result == 13);
    //         }
    //     }
    //     
    //     WHEN ("they are multiplied together")
    //     {
    //         int result = a * b;
    //         
    //         THEN ("the result is correct")
    //         {
    //             REQUIRE(result == 35);
    //             //REQUIRE(result == 36);
    //         }
    //     }
    // }
    
//     GIVEN("two positive integers (2)")
//     {
//         int a = 5;
//         int b = 7;
//         
//         WHEN ("they are multiplied together")
//         {
//             int result = a * b;
//             
//             THEN ("the result is correct")
//             {
//                 REQUIRE(result == 35);
//                 //REQUIRE(result == 36);
//             }
//         }
//     }
//     
//     GIVEN ("two negative integers")
//     {
//         int a = -5;
//         int b = -7;
//         
//         WHEN ("they are multiplied together")
//         {
//             int result = a * b;
//             
//             THEN ("the result is correct")
//             {
//                 REQUIRE(result == 35);
//                 //REQUIRE(result == -35);
//             }
//         }
//     }
}