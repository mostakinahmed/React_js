import React from "react";
import ReactDOM from "react-dom/client";

const root = ReactDOM.createRoot(document.getElementById("root"));
const todoTitle = "Learn React with Mostakin ahmed";
const date = new Date();
const year = date.getFullYear();

root.render(
  <div>
    <h1>Hello, {todoTitle} Mostakin ahmed !</h1>
    <h2>Hello, ahmed !</h2>
    <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quisquam,</p>
    <h1>{year}</h1>
  </div>
);
