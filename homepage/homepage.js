function toggleMode() {
  let body = document.querySelector("body");
  let footer = document.querySelector("footer");

  let jumbotron = document.getElementById("jumbo");
  let card1 = document.getElementById("cards-style1");
  let card2 = document.getElementById("cards-style2");
  let card3 = document.getElementById("cards-style3");

  //   actions
  body.classList.toggle("dark-mode");
  footer.classList.toggle("dark-mode");

  // index jumbotron
  jumbotron.classList.toggle("dark-mode");
  card1.classList.toggle("card-bg-color");
  card2.classList.toggle("card-bg-color");
  card3.classList.toggle("card-bg-color");
}
