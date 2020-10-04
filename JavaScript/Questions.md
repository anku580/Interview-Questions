# JavaScript Questions

### **Question:** What are the six data types in JavaScript?
### **Answer:** (according to [MDN web docs](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Data_structures))
```js
undefined, Boolean, Number, String, BigInt, Symbol
```
---
### **Question:** What are the three different ways to define a variable in JavaScript?
### **Answer:**
```js
const language = 'JavaScript';
let developer = 'Brendan Eich';
var date = 'September 1995';
```
---
### **Question:** What is the difference between null and undefined?
### **Answer:**
> Undefined means a variable has been declared but has not yet been assigned a value. While null is a value that is assigned to a variable as a representation of no value.
---
### **Question:** How do you define a function in JavaScript?
### **Answer:**
```js
// ES5
function nameOfFunction(params) {
  doStuff(params)
}

// ES6+
const nameOfFunction = (params) => {
  doStuff(params)
}

// ES6+ (Short)
const nameOfFunction = (params) => doStuff(params)
```
---
### **Question:** How do you check the data type of a variable in JavaScript?
### **Answer:**
```js
const numberVar = 69;
console.log(typeof numberVar) // => 'number'

const stringVar = '69';
console.log(typeof stringVar) // => 'string'

const booleanVar = false;
console.log(typeof booleanVar) // => 'boolean'

console.log(typeof true) // => 'boolean'
```

### ***Question:**What is the difference between == and ===?
### **Answer:**
```js
== will look for the data only while === will also check for data types
// ==
let id= '100';
if(id == 100){
  do this
}
else{
  do that
} //if condition will run because 100=100 is considered,== doesnt look the data type though '100' is string

// ===
let id= '100';
if(id == 100){
  do this
}
else{
  do that
} //if condition is false so the else condition get accessed as '100' is string 100 is not i.e.'100'!==100
```
### **Question:**How do you select elements for DOM manipulation?
### **Answer:**  
```js
//  Single element selector
const items=document.getElementById('idName');
console.log(items); //this will give the item whose idName is specified as above

// Multiple Element Selector
// Query Selector
const items= document.querySelector('tagname');
console.log(items); //this will but select only the first child under the tag

// Query Selector All
const items= document.querySelectorAll('className');
console.log(items); //this will give all the items inside that class name
```

