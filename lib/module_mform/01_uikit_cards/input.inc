<?php


// settings
$MForm = new MForm();

# grids / grid width
$MForm->addTab('Einstellungen für alle UiKit Cards:');
$MForm->addSelectField("2.0.gutterWidth");
$MForm->setLabel('Abstand:');
$MForm->setOptions(array('medium'=>'normal', 'small'=>'eng', 'large'=>'weit','collapse' => 'entfernen'));
$MForm->addDescription("Abstände zwischen den 'Cards' verändern");

// checkbox
$MForm->addCheckboxField("2.0.matchHeight",array(1=>'Ja'),array('label'=>'Alle gleiche Höhe:'));
$MForm->closeTab();

echo $MForm->show();

<<<<<<< HEAD:lib/module_mform/01_uikit_card/input.inc
=======
// cards / mblocks
>>>>>>> 676dde8ff4c83cdfecd4f422d69db5d6d91b149e:lib/module_mform/01_uikit_cards/input.inc
$id = 1;
$MForm = new MForm();
$MForm->addFieldset('UiKit Cards:');
$MForm->addTextField("$id.0.header", array('label'=>'Kopfzeile:'));
$MForm->addTextAreaField("$id.0.content", array('label'=>'Inhalt:', 'class'=>'ckeditor', 'data-ckeditor-profile'=>'lite'));
$MForm->addTextField("$id.0.footer", array('label'=>'Fusszeile:'));

$MForm->addFieldset("Einstellung für diese UiKit Card");

$MForm->addSelectField("$id.0.ukWidth");
$MForm->setLabel('Breite:');
$MForm->setOptions( array('auto@m'=>'automatisch', '1-1@m'=>'100%','1-2@m'=>'50%','1-3@m'=>'33%','1-4@m'=>'25%','1-5@m'=>'20%', 'expand@m' => 'Ausdehnen'));

$MForm->addSelectField("$id.0.ukColor");
$MForm->setLabel('Farbe:');
$MForm->setOptions( array('default'=>'Standard', 'muted'=>'hellgrau','primary'=>'Hauptfarbe','secondary'=>'Zusatzfarbe'));


$MForm->closeFieldset();

echo MBlock::show($id, $MForm->show(), array('min'=>1,'max'=>5));