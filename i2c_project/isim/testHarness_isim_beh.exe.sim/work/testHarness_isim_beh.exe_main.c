/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002245826500_0999479621_init();
    work_m_00000000000592982722_0772397708_init();
    work_m_00000000000396460140_2922806970_init();
    work_m_00000000001989914918_1628738415_init();
    work_m_00000000001472758620_3634728854_init();
    work_m_00000000001929508252_1878379842_init();
    work_m_00000000001198880073_2589727521_init();
    work_m_00000000001847884148_3565543037_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001847884148_3565543037");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
