<?php
  $budget = strip_tags(render($items[0]));
  if (!empty($budget)): ?>
<div class="convention-budget">
  <?php print views_embed_view("budget","block_1",$budget); ?>
</div>
<p>
  <?php print l(
    "View all budget drafts for this year &raquo;",
    "budget/drafts/".$budget,
    array(
      'html' => TRUE,
      )
    ); ?>
</p>
<?php endif; ?>
