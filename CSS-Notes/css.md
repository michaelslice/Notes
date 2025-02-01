# CSS Flexbox

## Main Concepts
- **Main Axis**: Horizontal
- **Cross Axis**: Vertical

## Flexbox Properties

### `display: flex;`
- Creates a flex container with two invisible axes: main (horizontal) and cross (vertical).
- Positions items along the main axis by default.

### `flex-direction`
- Defines the direction of the main axis.
  - `row` (default): Items align horizontally.
  - `column`: Items align vertically.

### `justify-content`
- Aligns items along the **main axis**.
  - `flex-start`: Align items at the start (default).
  - `flex-end`: Push items to the end.
  - `center`: Center items.
  - `space-between`: Distribute items evenly.
  - `space-around`: Distribute space around items.
  - `space-evenly`: Distribute space equally.

### `align-items`
- Aligns items along the **cross axis**.
  - `flex-start`: Align at the start.
  - `flex-end`: Align at the end.
  - `center`: Align at the center.
  - `baseline`: Align text baselines.

### `flex-wrap`
- Controls whether items wrap to the next line.
  - `nowrap` (default): Items try to fit in one line.
  - `wrap`: Items wrap if needed.

### `align-content`
- Aligns rows when `flex-wrap: wrap` is enabled.

### `gap`
- Adds spacing between items.
  - Example: `gap: 1em;`

### `flex-grow`
- Allows an item to expand to fill available space.
  - Example: `flex-grow: 1;`

### `flex-shrink`
- Controls how items shrink when space is limited.
  - Example: `flex-shrink: 5;`

### `flex-basis`
- Defines the initial size of an item before space distribution.
  - Example: `flex-basis: 300px;`

### `flex`
- Shorthand for `flex-grow`, `flex-shrink`, and `flex-basis`.

### `align-self`
- Overrides `align-items` for an individual item.

### `order`
- Changes the order of flex items.

---

# CSS Grid

## Grid Properties

### `display: grid;`
- Creates a grid container.

### `grid-template-rows`
- Defines row sizes in pixels or other units.

### `grid-template-columns`
- Defines column sizes in pixels or other units.

### Positioning Items
- `grid-row-start` / `grid-row-end`: Start and end row positions.
- `grid-column-start` / `grid-column-end`: Start and end column positions.
- Example:
  ```css
  grid-row: span 2;
  grid-column: span 2;
  ```

### `grid-area`
- Defines an item's area in the grid.
  ```css
  grid-area: row-start / col-start / row-end / col-end;
  grid-area: 3 / 1 / -1 / -1;
  ```

### `grid-auto-rows`
- Defines row sizes for implicit grids.

### `grid-auto-flow`
- Specifies the flow direction (`row` or `column`).

### `repeat()`
- Repeats a grid definition.
  ```css
  grid-template-columns: repeat(3, 100px);
  ```

### `grid-gap`
- Defines gaps between grid items.

### `auto-fit`
- Automatically fits items into the grid, making it responsive.
  ```css
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(100px, 1fr));
  grid-template-rows: repeat(4, 100px);
  ```

---

# CSS Notes

## Media Queries and Responsive Design

### `media-query`
- Conditionally changes CSS styles based on viewport size.

### `clamp()`
- Provides a flexible way to define sizes with min, preferred, and max values.
  ```css
  width: clamp(200px, 50%, 600px);
  ```

### `aspect-ratio`
- Ensures media elements maintain their aspect ratio dynamically.

### `:root`
- Defines global CSS variables.

## Relative Units for Text Size

### `em`
- Relative to the parent element's font size.

### `rem`
- Relative to the root element's font size.

## Layout and Positioning

### `z-index`
- Controls element layering.

### `width` & `height`
- Sets element dimensions.

### `max-width`
- Sets the maximum allowable width.

### `margin`
- Defines space around elements.

### `padding`
- Sets space between content and border.

### `box-sizing`
- Ensures padding and borders do not affect element dimensions.

## Typography

### `font-family`
- Defines font styles.

### `font-weight`
- Controls text boldness.

### `font-size`
- Adjusts text size.

### `font-style`
- Typically used for italics.

### `text-align`
- Aligns text within an element.

### `line-height`
- Sets space between lines of text.

### `letter-spacing`
- Adjusts space between letters.

## User Interaction

### `user-select`
- Prevents text selection.

### `cursor`
- Changes the pointer appearance.

## Colors and Backgrounds

### `color`
- Defines text and border colors.

### `background-color`
- Changes background colors.

### `border`
- Adds a border around an element.

### `border-radius`
- Rounds corners.

### `box-shadow`
- Adds shadow effects.

### `object-fit`
- Ensures images maintain aspect ratio within containers.

## Transitions & Animations

### `transition`
- Adds smooth animations to property changes.

## Overflow Handling

### `opacity`
- Controls transparency.

### `overflow`
- Manages content overflow behavior.

## Centering Elements

### Flexbox
```css
  display: flex;
  justify-content: center;
```

### Grid
```css
  display: grid;
  grid-template-columns: 1fr 500px 1fr;
  grid-template-rows: 100px 200px;
  place-items: center;
```
