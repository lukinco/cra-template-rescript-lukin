module Styles = {
  open Css

  let wrapper = style(list{
    background(`000`->hex),
    padding(zero),
    margin(zero),
    height(100.->pct),
    width(100.->pct),
    overflow(auto),
    display(#flex),
    justifyContent(center),
    alignItems(center),
    flexDirection(column),
  })

  global(
    `html, body, #root`,
    list{padding(zero), margin(zero), height(100.->pct), width(100.->pct)},
  )
  global(`*`, list{boxSizing(#borderBox)})
}

@react.component
let make = () => {
  <div className={Styles.wrapper}> <Logo /> </div>
}
