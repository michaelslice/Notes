//import { initializeApp } from "firebase/app";
//import { getAnalytics } from "firebase/analytics";
//import { useState, useEffect } from "react";
//import { getAuth } from "firebase/auth";
import { child, get, getDatabase, ref, set } from "firebase/database";
//import Login from "../Components/Login Page/LogIn";
//import CryptoJS from "crypto-js";
//import { firebaseConfig } from "../Components/Login Page/LogIn";


export function writeUserData(
  email: string | null | undefined,
  age: number,
  height: string,
  gender: string,
  ethnicity: string,
  weight: number
) {
  var hash = CryptoJS.SHA256(email as string); // Each user's user_id/key is the SHA256 hash of their email
  const db = getDatabase();
  const reference = ref(db, 'users/' + hash);

  // Reference the database if the user exists
  get(reference).then((snapshot) => {
    if (snapshot.exists()) {
      // User exists so add a new job entry
      const jobsRef = child(reference, 'jobs'); // Navigate to the child node of the current reference
      return get(jobsRef).then((jobsSnapshot) => 
      {
        let newIndex = 0;
        jobsSnapshot.forEach((childSnapshot) => 
        {
          newIndex++;
        });
        const newJobRef = child(jobsRef, newIndex.toString());

        set(newJobRef, 
          {
          age: age,
          ethnicity: ethnicity,
          gender: gender,
          height: height,

          status: {
            code: "Success",
            value: "string",
          },
          timestamp: {
            nanos_since_epoch: (Date.now() % 1000) * 1e6,
            secs_since_epoch: Math.floor(Date.now() / 1000)
          },
          weight: weight,
        });
      });
    } 
    else 
    {
      // User does not exist so create a new entry for user
      set(reference, 
        {
        email: email,
        jobs: 
        {
          0: {
            age: age,
            ethnicity: ethnicity,
            gender: gender,
            height: height,

            status: {
              code: "Success",
              value: "string",
            },
            timestamp: {
              nanos_since_epoch: (Date.now() % 1000) * 1e6,
              secs_since_epoch: Math.floor(Date.now() / 1000)
            },
            weight: weight,
          },
        },
      });
    }
  })
  .catch((error) => {
    console.error("Error checking user existence", error);
  });
}