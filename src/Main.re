type canvas;
type context;

Js.log("Hello, BuckleScript and Reason!");

/* we're leaving these types abstract, because we won't
 * be using them directly anywhere */
[@bs.send] external getContext : (canvas, string) => context = "";
[@bs.send] external fillRect : (context, float, float, float, float) => unit = "";

let myCanvas: canvas = [%bs.raw {| document.getElementById("mycanvas") |}];

let ctx = getContext(myCanvas, "2d");

fillRect(ctx, 0.0, 0.0, 100.0, 100.0);
