
let title = Css.(style([
  color("fff"->hex),
  fontFamily(`custom({|
    -apple-system,system-ui,
    BlinkMacSystemFont,
    "Segoe UI", Roboto,
    "Helvetica Neue",
    Arial,
    sans-serif
  |})),
  textAlign(center),
  margin(5.->rem),
  letterSpacing((-0.05)->em),
  fontSize(3.->rem)
]));

[@react.component]
let make = (~children) => <h1 className={title}> children </h1>;
