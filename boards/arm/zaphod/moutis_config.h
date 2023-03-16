//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define ___  &trans


#define l_any   -1
#define l_alpha  0
#define l_adapt  1
#define l_nav    2
#define l_sym    3
#define l_fn     4
#define l_num    5
#define l_cfg    6


&mt {
    tapping-term-ms = <170>;
};
&sl {
    release-after-ms = <200>;
};

#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
