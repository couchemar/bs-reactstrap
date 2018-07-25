[@bs.module "reactstrap"]
external collapse : ReasonReact.reactClass = "Collapse";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  navbar: bool,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make =
    (~isOpen=?, ~tag=?, ~className=?, ~navbar=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=props(~isOpen?, ~tag?, ~className?, ~navbar?, ~cssModule?, ()),
    children,
  );