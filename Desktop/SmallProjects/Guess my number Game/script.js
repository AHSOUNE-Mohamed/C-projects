// use 'stract'
// document.addEventListener("DOMContentLoaded", Function());
const input = document.querySelector(".input");
const check = document.querySelector(".check");
const number = document.querySelector(".number");
const score = document.querySelector(".Score");
const hightscore = document.querySelector(".highscore");
const again = document.querySelector(".again");
const para = document.querySelector(".para");

let randomNamber = getRandomNumber(1, 20);
let scor = 20;
let hightsco = 0;
let enterdNamber;
function getRandomNumber(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + 1;
}
console.log(randomNamber);
// console.log(play);
input.addEventListener("input", function (event) {
  let inputValue = event.target.value;
  if (!isNaN(inputValue)) {
    enterdNamber = parseFloat(inputValue);
  }
});
let play = true;
if ((play = true)) {
  check.addEventListener("click", function () {
    if (enterdNamber > randomNamber) {
      para.textContent = "Go Down";
      scor--;
      score.textContent = scor;
      console.log(play);
    } else if (enterdNamber < randomNamber) {
      para.textContent = "Go Up";
      scor--;
      score.textContent = scor;
      console.log(play);
    } else if ((enterdNamber = randomNamber && hightsco < scor)) {
      number.textContent = randomNamber;
      para.textContent = "Congratulation";
      hightsco = scor;
      hightscore.textContent = scor;
      play = false;
      //   console.log(play);
    } else {
      number.textContent = randomNamber;
      para.textContent = "Congratulation";
      //   console.log(play);
      play = false;
    }
  });
} else {
  console.log("Event will not execute because the condition is not met.");
}

// reset the game
again.addEventListener("click", function () {
  console.log("go again");
  randomNamber = getRandomNumber(1, 20);
  console.log(randomNamber);
  play = 1;
  input.value = "";
  number.textContent = "?";
  scor = 20;
});
