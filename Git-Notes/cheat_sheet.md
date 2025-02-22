## Git Commit Best Practice

Where:
- `<type>`: A short description of the change type (e.g., `feat`, `fix`, `docs`, etc.)
- `<description>`: A brief summary of the change.

## Commit Message Types

### 1. **`feat:`**
   - **Description:** Introduces a new feature or enhancement.
   - **Example:**
     ```bash
     git commit -m "feat: add dark mode toggle"
     ```

### 2. **`fix:`**
   - **Description:** Fixes a bug.
   - **Example:**
     ```bash
     git commit -m "fix: resolve login issue"
     ```

### 3. **`docs:`**
   - **Description:** Documentation updates (README, code comments, etc.)
   - **Example:**
     ```bash
     git commit -m "docs: update README with new setup instructions"
     ```

### 4. **`style:`**
   - **Description:** Formatting changes (code style, indentation, etc.) that do not affect functionality.
   - **Example:**
     ```bash
     git commit -m "style: clean up spacing and indentation"
     ```

### 5. **`refactor:`**
   - **Description:** Code changes that neither fix a bug nor add a feature but improve the structure or performance.
   - **Example:**
     ```bash
     git commit -m "refactor: simplify user authentication logic"
     ```

### 6. **`perf:`**
   - **Description:** Improves performance (e.g., optimization).
   - **Example:**
     ```bash
     git commit -m "perf: optimize image loading"
     ```

### 7. **`test:`**
   - **Description:** Adds or modifies tests.
   - **Example:**
     ```bash
     git commit -m "test: add unit tests for user service"
     ```

## Best Practices

- Keep the description concise and to the point.
- Use the present tense (e.g., "add" instead of "added").
- Capitalize the first letter of the description.
- Avoid punctuation at the end of the description.
