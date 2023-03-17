//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define ___  &trans

#define l_any   -1
#define l_alpha 0
#define l_akL   1
#define l_akHU  2
#define l_akEO  3
#define l_nav   4
#define l_sym   5
#define l_fn    6
#define l_num   7
#define l_cfg   8

#define my-tapping-term 170

&mt {
    tapping-term-ms = <170>;
};
&sl {
    release-after-ms = <200>;
};

#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
