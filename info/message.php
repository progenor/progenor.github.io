<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHPfile</title>
</head>
<body>
<header>
      <h1>Elado ingatlan</h1>
    </header>
<main>
    <div class="result_cont">
            <div class="result">
                echo "<h1>Result:</h2>";
            <?php
                $tipus = $_POST['tipus'];
                $email = $_POST['email'];
                $telefon = $_POST['telefon'];
                $terulet = $_POST['terulet'];
                $fekves = $_POST['fekves'];
                $szintszam = $_POST['sziszam'];
                $szobaszam = $_POST['szoszam'];
                $furdo = $_POST['furdo'];
                $garazs = $_POST['garazs'];
                $lift = $_POST['lift'];
                $kert = $_POST['kert'];
                $leiras = $_POST['leiras'];
                $ar = $_POST['ar'];

               
                echo "Tipus: $tipus <br>";
                echo "Email: $email <br>";
                echo "Telefon: $telefon <br>";
                echo "Terulet: $terulet <br>";
                echo "Fekves: $fekves <br>";
                echo "Szintszam: $szintszam <br>";
                echo "Szobaszam: $szobaszam <br>";
                echo "Furdo: $furdo <br>";
                echo "Garazs: $garazs <br>";
                echo "Lift: $lift <br>";
                echo "Kert: $kert <br>";
                echo "Leiras: $leiras <br>";
                echo "Ar: $ar <br>";
              ?>
            </div>
          </div>
</main> 
      <footer>
      <p>
        Created by
        <a href="https://github.com/progenor">Progenor(Kantor Csongor)</a>
      </p>
    </footer> 
</body>
</html>