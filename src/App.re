open ReactNative;

let styles =
  Style.(
    StyleSheet.create({
      "gradient": style(~flex=1., ()),
      "container":
        style(~flex=1., ~justifyContent=`center, ~alignItems=`center, ()),
      "text":
        style(~fontSize=22., ~color="rgb(209,62,62)", ~fontWeight=`_500, ()),
    })
  );

[@react.component]
let make = () => {
  <Expo.LinearGradient
    colors=[|"rgb(10, 13, 47)", "rgb(10, 13, 47)"|]
    start=[|0.0, 1.0|]
    _end=[|1.0, 0.0|]
    style=styles##gradient>
    <View style=styles##container>
      <Text style=styles##text>
        {React.string("Build something great! " ++ {j| 🤖|j})}
      </Text>
    </View>
  </Expo.LinearGradient>;
};
