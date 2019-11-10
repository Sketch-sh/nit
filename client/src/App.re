%raw
{|require("./index.css");|};

let parse_query_string: (string, string) => string = [%raw
  {|
  function(name, query) {
    name = name.replace(/[\[]/, '\\[').replace(/[\]]/, '\\]');
    var regex = new RegExp('[\\?&]?' + name + '=([^&#]*)');
    var results = regex.exec(query);
    return results === null ? '' : decodeURIComponent(results[1].replace(/\+/g, ' '));
  }
|}
];

[@react.component]
let make = () => {
  let url = ReasonReactRouter.useUrl();

  let query = url.ReasonReactRouter.search;

  let query_code = parse_query_string("code", query);
  let value =
    switch (query_code) {
    | "" => None
    | compressed_string => LzString.URI.decompress(compressed_string)
    };

  [%log.debug "encoded data"; ("value", value); ("query_code", query_code)];
  <Edit_main ?value />;
};

let default = make;
