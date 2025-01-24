

async function makeRequest(){
    try {
        const url = "https://google.com"

        const response = await fetch(url);
        
        console.log(response);

    } catch (error) {
        console.log(error);
    }
}

makeRequest();


const request = async () => {
    const url = "https://google.com";

    try {
        const response = await fetch(url);
        console.log(response);
        return response; 
    } catch (error) {
        console.error(error); 
        throw error; 
    }
};

request();
