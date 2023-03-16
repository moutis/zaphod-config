//
//  moutis_config.dtsi
//  
//
//  Created by Alan on 7/24/22.
//

#define ___  &trans

#define l_any   -1
enum my_layers {
    l_alpha,
    l_adaptL,
    l_adaptHU,
    l_nav,
    l_sym,
    l_fn,
    l_num,
    l_cfg
};



&mt {
    tapping-term-ms = <170>;
};
&sl {
    release-after-ms = <200>;
};

#define EN_PRONOUN_COMBOS //  (I, I'm, I've I'd I'll etc)
