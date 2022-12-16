<?php
$nom = "exemple_nom";
$prenom = "exemple_prenom";
$taille = 185;
$poids = 75;

$variable_poids = 65;
echo $variable_poids . "\n";
echo "Ce programme est maintenant en cours d'exécution.\n";
$bdd = new PDO(
    "mysql:host=localhost;dbname=anthonin.boisot;charset=utf8",
    "anthonin.boisot",
    "6Y4Gsj"
);
$bdd->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

$req = $bdd->prepare(
    "INSERT INTO `utilisateurs` (`id`, `nom`, `prenom`, `taille`, `poids`) VALUES (NULL, :nom, :prenom, :taille, :poids)"
);
$req->execute([
    "nom" => $nom,
    "prenom" => $prenom,
    "taille" => $taille,
    "poids" => $poids,
]);
echo "L'entrée a été ajoutée à la table utilisateurs avec succès.\n";

$response = $bdd->query("SELECT * FROM `IMC`");
while ($donnees = $response->fetch()) {
    echo $donnees["IMC"];
}
$bdd->exec(
    "INSERT INTO `IMC` (`id`, `nom`, `prenom`, `taille`, `poids`, `IMC`) VALUES (NULL, 'nom_test', 'prenom_test', '182', '78', NULL);"
);
echo "La requête a été exécutée avec succès.\n";
echo "Le programme est maintenant terminé.\n";
while ($donnees = $reponse->fetch()) {
    echo "TEST";
    echo $donnees["poids"];
    echo $donnees["taille"];
    echo $donnees["IMC"];
    echo "</br>";
}
$reponse->closeCursor();

$variable_console = "Nintendo";
$variable_prix = 450;
$variable_commentaires = "Blanche, bon état";
$req = $bdd->prepare("INSERT INTO jeux_video (console, prix, commentaires) 
VALUES(:console, :prix, :commentaires)");
$req->execute([
    "console" => $variable_console,
    "prix" => $variable_prix,
    "commentaires" => $variable_commentaires,
]);
echo "Le jeu a bien été ajouté !\n";
?>
