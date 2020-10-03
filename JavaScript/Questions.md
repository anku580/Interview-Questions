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
