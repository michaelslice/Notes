## 1. Chrome Extension Architecture

- `manifest.json`: Config file that defines the extensions meta data, permissions, background scripts
- Background Scripts: Persistent or event-driven scripts that run in the background and handle things like messaging and long-running tasks
- Content Scripts: Scripts injected into web pages to interact with the DOM
- Popup UI: The HTML/CSS/JS shown when clicking the extension icon
- Service Workers: Replace the background scripts to handle events more efficiently

## 2. Manifest File
Key Fields
- `name`, `version`, `description` 
- `permission`: Declare what the extension can access (tabs, storage)
- `background`: Script or service worker definition
- `content_scripts`: Where and when to inject
- `action` or `browser_action`: Define popup
- `host_permissions`: URLs it can interact with

## 3. Key Chrome Extension APIs

- `chrome.tabs`: Access, modify, or query browser tabs.
- `chrome.runtime`: Communication between components.
- `chrome.storage`: Store data (sync/local).
- `chrome.scripting`: Dynamically inject scripts (MV3).
- `chrome.action`: Interact with the extension icon.
- `chrome.webRequest`: Observe or modify web requests.
- `chrome.notifications`: Show system notifications.
- `chrome.contextMenus`: Add items to right-click menu.
- `chrome.alarms`: Trigger actions at scheduled times.
- `chrome.identity`: OAuth & authentication. 

## 1. `chrome.tabs`: Access, modify, or query browser tabs
```js
// Query the active tab
chrome.tabs.query({ active: true, currentWindow: true }, (tabs) => {
  console.log("Active tab:", tabs[0]);
});

// Update a tab
chrome.tabs.update(tabs[0].id, { url: "https://example.com" });

// Create a new tab
chrome.tabs.create({ url: "https://developer.chrome.com" });

```

## 2. `chrome.runtime`: Communication between components
Send message from content to background:
```js
// content.js
chrome.runtime.sendMessage({ greeting: "hello" }, (response) => {
  console.log("Got response:", response);
});
```
Listen in background.js:
```js
chrome.runtime.onMessage.addListener((msg, sender, sendResponse) => {
  if (msg.greeting === "hello") {
    sendResponse({ reply: "hi!" });
  }
  return true; // allows async sendResponse
});
```

## 3. `chrome.storage`: Store data (sync/local)
```js
// Save to local storage
chrome.storage.local.set({ theme: "dark" });

// Read from local storage
chrome.storage.local.get(["theme"], (result) => {
  console.log("Stored theme is", result.theme);
});

// Remove a key
chrome.storage.local.remove("theme");
```
For syncing across devices, use `chrome.storage.sync`

## 4. `chrome.scripting`: Inject JS/CSS dynamically (MV3)
```js
chrome.scripting.executeScript({
  target: { tabId: tab.id },
  func: () => {
    document.body.style.backgroundColor = "yellow";
  },
});
```

## 5. `chrome.action`: Interact with the extension icon
```js
// Change badge text
chrome.action.setBadgeText({ text: "ON" });
chrome.action.setBadgeBackgroundColor({ color: "#FF0000" });

// Set popup programmatically
chrome.action.setPopup({ popup: "popup.html" });
```

## 6. `chrome.webRequest`: Intercept/modify web requests
Requires "permissions": ["webRequest", "webRequestBlocking", "*://*/*"]
```js
chrome.webRequest.onBeforeRequest.addListener(
  (details) => {
    console.log("Intercepted:", details.url);
    return { cancel: true }; // block request
  },
  { urls: ["*://*.ads.com/*"] },
  ["blocking"]
);
```

## 7. `chrome.notifications`: Show system notifications
Requires "permissions": ["notifications"]
```js
chrome.notifications.create({
  type: "basic",
  iconUrl: "icon.png",
  title: "Reminder",
  message: "Don't forget to take a break!",
});
```

## 8. `chrome.contextMenus`: Add right-click menu items
```js
chrome.contextMenus.create({
  id: "saveText",
  title: "Save selected text",
  contexts: ["selection"],
});

chrome.contextMenus.onClicked.addListener((info, tab) => {
  if (info.menuItemId === "saveText") {
    console.log("User selected:", info.selectionText);
  }
});
```
## 9. `chrome.alarms`: Trigger scheduled actions
```js
// Create an alarm every 10 minutes
chrome.alarms.create("reminder", { periodInMinutes: 10 });

chrome.alarms.onAlarm.addListener((alarm) => {
  if (alarm.name === "reminder") {
    console.log("Time to hydrate!");
  }
});
```

## 10. `chrome.identity`: OAuth and authentication
```js
chrome.identity.getAuthToken({ interactive: true }, (token) => {
  if (chrome.runtime.lastError) {
    console.error(chrome.runtime.lastError.message);
  } else {
    console.log("OAuth token:", token);
    // Use token with fetch/axios
  }
});
```