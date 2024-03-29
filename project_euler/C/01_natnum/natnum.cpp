/* 1.0.0 */
/*****************************************************************************************************************************************************************\
* Module Name       : Natural Numbers
* Description       : Euler Project 1 Source Code
* Original Author   : Jake Nabozny
* Date Created      : 10/16/2012
\*****************************************************************************************************************************************************************/


/*******************************************************************************\
* Include Files
\*******************************************************************************/
#include "natnum_private.h"


/*******************************************************************************\
* Macro Definitions
\*******************************************************************************/
#define NATNUM_LIMIT    (1000)
// Answer: 233168


/*******************************************************************************\
* Static Variables
\*******************************************************************************/


/*******************************************************************************\
* Static Functions
\*******************************************************************************/
static U4 u4_s_NatNum_FindMultiples(void);


/*******************************************************************************\
* Function Definitions
\*******************************************************************************/


/*****************************************************************************************************************************************************************\
* Function name     : vd_g_NatNumMain
* Called by         : main
* Argument(s)       : void
* Return            : void
* Description       : Natural Numbers, Euler Project 1 entry point
\*****************************************************************************************************************************************************************/
void vd_g_NatNumMain(void)
{
    U4 u4_t_ans;

    cout << "Find the sum of all multiples of 3 or 5 below 1000...\n\n";

    u4_t_ans = u4_s_NatNum_FindMultiples();

    cout << "Answer:\t" << u4_t_ans << "\n\n";
}


/*****************************************************************************************************************************************************************\
* Function name     : vd_g_NatNum_FindMultiples
* Called by         : main
* Argument(s)       : void
* Return            : void
* Description       : Natural Numbers, Euler Project 1 entry point
\*****************************************************************************************************************************************************************/
static U4 u4_s_NatNum_FindMultiples(void)
{
    U2 u2_t_idx;
    U4 u4_t_sum;

    u4_t_sum = (U4)0;

    /* Add all multiples of 3 */
    u2_t_idx = (U2)3;
    while(u2_t_idx < (U2)NATNUM_LIMIT)
    {
        if((u2_t_idx % (U2)5) != (U2)0)
        {
            /* Add number to total */
            u4_t_sum += u2_t_idx;
        }
        else
        {
            /* Cover this in 5 loop */
        }

        u2_t_idx += (U2)3;
    }

    /* Add all multiples of 5 */
    u2_t_idx = (U2)5;
    while(u2_t_idx < (U2)NATNUM_LIMIT)
    {
        u4_t_sum += u2_t_idx;
        u2_t_idx += (U2)5;
    }

    return(u4_t_sum);
}
