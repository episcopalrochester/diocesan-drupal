<?php if ($roster): ?>
<?php 
$subcommittees = FALSE;
foreach ($roster->node as $person) {
  if (!empty(trim($person->Subcommittees))) {
    $subcommittees = TRUE;
  }
}
?>
<table class="table table-striped tableheader-processed">
 <thead>
    <tr>
      <th>Name</th>
      <th>Role</th>
      <th>Details</th>
      <?php if ($subcommittees): ?>
      <th>Subcomittees</th>
      <?php endif; ?>
      <th>Term</th>
      <th>Contact</th>
    </tr>
  </thead>
  <tbody>
<?php foreach ($roster->node as $person) :?>
    <tr>
      <td><?php echo $person->Name; ?></td>
      <td><?php echo ucwords(str_replace("vicechair","Vice-Chair",$person->Role)); ?></td>
      <td><?php echo implode("<br />",array_filter(array(
		trim(ucwords(str_replace("exofficio", "ex officio",$person->Type))),
		trim($person->District),
		trim($person->Details)
	))); ?></td>
      <?php if ($subcommittees): ?>
      <td><?php echo $person->Subcommittees; ?></td>
      <?php endif; ?>
      <td><?php echo implode(" to ",array_filter(array(
                trim($person->Start),
                trim($person->End)
        ))); ?></td>
      <td><?php echo $person->Email; ?></td>
    </tr>
<?php endforeach; ?>
</table>
<?php endif; ?>
