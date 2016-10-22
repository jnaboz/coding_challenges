/* 1.0.0 */
/*****************************************************************************************************************************************************************\
* Module Name       : Thousand Digit Product
* Description       : Euler Project 8 Source Code
* Original Author   : Jake Nabozny
* Date Created      : 10/17/2012
\*****************************************************************************************************************************************************************/


/*******************************************************************************\
* Include Files
\*******************************************************************************/
#include "thoudig_private.h"


/*******************************************************************************\
* Macro Definitions
\*******************************************************************************/
#define THOUDIG_LIMIT    (THOUDIG_THOUSAND - 4)
// Answer: 


/*******************************************************************************\
* Static Variables
\*******************************************************************************/


/*******************************************************************************\
* Static Functions
\*******************************************************************************/
static U4 u4_s_ThouDig_GetProd(void);


/*******************************************************************************\
* Function Definitions
\*******************************************************************************/


/*****************************************************************************************************************************************************************\
* Function name     : vd_g_ThouDig_Main
* Called by         : main
* Argument(s)       : void
* Return            : void
* Description       : Entry Point for Euler Project 8 ThouDig
\*****************************************************************************************************************************************************************/
void vd_g_ThouDig_Main(void)
{
    U4 u4_t_ans;

    cout << "Find the greatest product of the 1000 digit number..\n\n";

    u4_t_ans = u4_s_ThouDig_GetProd();

    cout << "Answer:\t" << u4_t_ans << "\n\n";
}


/*****************************************************************************************************************************************************************\
* Function name     : u4_s_ThouDig_GetProd
* Called by         : vd_g_ThouDig_Main
* Argument(s)       : void
* Return            : U4
* Description       : Get Product
\*****************************************************************************************************************************************************************/
static U4 u4_s_ThouDig_GetProd(void)
{
    U2 u2_t_idx;
    U4 u4_t_prod;
    U4 u4_t_max;

    u4_t_max = (U4)0;

    for(u2_t_idx = (U2)0; u2_t_idx < (U2)THOUDIG_LIMIT; u2_t_idx++)
    {
        if(st_sp_NUMBER[u2_t_idx + 4] == (U1)0)
        {
            u2_t_idx += (U2)5;
        }
        else if(st_sp_NUMBER[u2_t_idx + 3] == (U1)0)
        {
            u2_t_idx += (U2)4;
        }
        else if(st_sp_NUMBER[u2_t_idx + 2] == (U1)0)
        {
            u2_t_idx += (U2)3;
        }
        else if(st_sp_NUMBER[u2_t_idx + 1] == (U1)0)
        {
            u2_t_idx += (U2)2;
        }
        else if(st_sp_NUMBER[u2_t_idx] == (U1)0)
        {
            u2_t_idx++;
        }
        else        /* No zeroes */
        {
            u4_t_prod = (U4)(st_sp_NUMBER[u2_t_idx] * st_sp_NUMBER[u2_t_idx + 1] * st_sp_NUMBER[u2_t_idx + 2] * st_sp_NUMBER[u2_t_idx + 3] * st_sp_NUMBER[u2_t_idx + 4]);

            if(u4_t_prod > u4_t_max)
            {
                u4_t_max = u4_t_prod;
            }
        }
    }

    return(u4_t_max);
}