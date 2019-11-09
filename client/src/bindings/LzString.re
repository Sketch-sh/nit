type t;

let async: unit => Js.Promise.t(t) = () => Modules.import("lz-string");

module URI = {
  [@bs.module "lz-string"]
  external compress: string => string = "compressToEncodedURIComponent";
  [@bs.module "lz-string"]
  external unsafe_decompress: string => string =
    "decompressFromEncodedURIComponent";
  let decompress = data =>
    try (Some(unsafe_decompress(data))) {
    | _exn => None
    };
};
