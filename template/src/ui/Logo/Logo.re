let logoUrl = Helpers.import("./logo.svg");

[@react.component]
let make = () => <img src={logoUrl} alt="Lukin CRA + ReScript Template" />;
