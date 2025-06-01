const header = document.body.querySelector("h1")

if(header){
    console.log(header);
    header.style.backgroundColor = "red";
}

chrome.runtime.sendMessage({ greeting: "hello" }, (response) => {
  console.log("Content script received:", response.reply);
});
