# React Native

## Core Components

### `<View>`, `<Text>`, and `<Pressable>`
- `<View>`: A container that supports layout with flexbox style, some touch handling, and accessibility controls.
- `<Text>`: Displays, styles, and nests strings of text and even handles touch events.
- `<Pressable>`: A wrapper for making views respond to touches with better performance and flexibility than `<TouchableOpacity>`.

### StyleSheet
- `StyleSheet.create()` function helps define styles in a more optimized way for React Native.
```sh
const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#25292e',
    alignItems: 'center',
    justifyContent: 'center',
  },
  text: {
    color: '#fff',
  },
  button: {
    fontSize: 20,
    textDecorationLine: 'underline',
    color: '#fff',
  },
});
```

### Tabs Subdirectory
- Used to group routes together and display them in a bottom tab bar.

### Other Core Components
- `<Image>`: Displays different types of images.
- `<ScrollView>`: A generic scrolling container that can contain multiple components and views.
- `<TextInput>`: Allows the user to enter text.
- `FlatList`: Good for dynamic lists.

## Components
- A function that serves as a blueprint for something displayed on the screen.

```tsx
const Cat = () => {
  return (
    <Text> Coding is awesome! </Text>
  );
};
```

## Props
- Short for "properties," props let you customize React components.
- Props are used to configure a component when it renders.

```tsx
type CatProps = {
  name: string;
};

const Cat = (props: CatProps) => {
  return (
    <View>
      <Text>Hello, I am {props.name}!</Text>
    </View>
  );
};
```

## State
- State is a component's personal data storage.
- Use state to keep track of any component data that you expect to change over time.

### `useState` Example
```tsx
const [response, setResponse] = useState<{ Value: string }[]>([]);
```

### Direct State Update
```tsx
setResponse([
  ...response,
  { Value: value }
]);
```
**What this does:** This update occurs asynchronously.

### Current Response State
```tsx
setResponse((prevResponse) => [
  ...prevResponse,
  { Value: value }
]);
```
**What this does:** `prevResponse` represents the latest state of the `response` array.

## Navigation
- React Navigation is the most popular navigation library for React Native.
- Types of navigators:
  - **Stack Navigator**: Manages screens in a stack (like a call stack).
  - **Bottom Tab Navigator**: Provides tab-based navigation at the bottom of the screen.
  - **Drawer Navigator**: Opens a side menu for navigation.

## Note
- In a `layout_tsx` file for a folder, all `*.tsx` files with valid function will automatically get a tab created!

Example:
```tsx
import { createStackNavigator } from '@react-navigation/stack';
const Stack = createStackNavigator();

function MyStack() {
  return (
    <Stack.Navigator>
      <Stack.Screen name="Home" component={HomeScreen} />
      <Stack.Screen name="Details" component={DetailsScreen} />
    </Stack.Navigator>
  );
}
```

## Hooks
- `useEffect`: Runs side effects in a function component.

Example:
```tsx
useEffect(() => {
  console.log("Component mounted");
  return () => console.log("Component unmounted");
}, []);
```

- `useContext`: Manages global state without prop drilling.

Example:
```tsx
const MyContext = React.createContext();
const value = useContext(MyContext);
```

