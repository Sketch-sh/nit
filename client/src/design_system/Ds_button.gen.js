/* Untyped file generated by genType. */

import * as React from 'react';

const $$toRE73352046 = {"lg": 24187, "md": 24407, "sm": 25754, "xl": 26868, "xxl": 5994348};

const $$toRE323396120 = {"Disabled": 0, "Normal": 1, "Loading": 2};

const $$toRE470723770 = {"Secondary": 0, "Text": 1, "Brand": 2};

import * as Ds_buttonBS from './Ds_button.bs';

export const make = function Ds_button(Arg1) {
  const $props = {children:Arg1.children, color:(Arg1.color == null ? undefined : $$toRE470723770[Arg1.color]), disabled:Arg1.disabled, onClick:Arg1.onClick, primary:Arg1.primary, size:(Arg1.size == null ? undefined : $$toRE73352046[Arg1.size]), state:(Arg1.state == null ? undefined : $$toRE323396120[Arg1.state])};
  const result = React.createElement(Ds_buttonBS.make, $props);
  return result
};
