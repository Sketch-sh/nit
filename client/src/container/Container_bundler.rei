module Polestar = Container_polestar;

let make_polestar:
  (~onError: exn => unit, ~onEntry: unit => unit) => Polestar.polestar;

let eval: (Polestar.polestar, string) => unit;
