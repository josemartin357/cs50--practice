function toggleMode() {
  let body = document.querySelector("body");
  let footer = document.querySelector("footer");
  let nav = document.getElementById("nav");
  let navtext1 = document.getElementById("nav-text1");
  let navtext2 = document.getElementById("nav-text2");
  let navtext3 = document.getElementById("nav-text3");
  let navtext4 = document.getElementById("nav-text4");
  let navtext5 = document.getElementById("nav-text5");

  let jumbotron = document.getElementById("jumbo");
  let card1 = document.getElementById("cards-style1");
  let card2 = document.getElementById("cards-style2");
  let card3 = document.getElementById("cards-style3");
  //   actions
  body.classList.toggle("dark-mode");
  footer.classList.toggle("dark-mode");
  nav.classList.remove("bg-light", "navbar-light");
  nav.classList.toggle("dark-mode");

  navtext1.classList.toggle("navbar-text-color-light");
  navtext2.classList.toggle("navbar-text-color-light");
  navtext3.classList.toggle("navbar-text-color-light");
  navtext4.classList.toggle("navbar-text-color-light");
  navtext5.classList.toggle("navbar-text-color-light");
  // index jumbotron
  jumbotron.classList.toggle("dark-mode");
  card1.classList.toggle("card-bg-color");
  card2.classList.toggle("card-bg-color");
  card3.classList.toggle("card-bg-color");
}
