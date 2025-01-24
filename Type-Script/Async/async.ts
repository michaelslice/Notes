

async function Test(){
    try {
        const response = await fetch("https://www.google.com");

        const data = response.json();
    } 
    catch (error) {
        console.log(error);    
    }
}

