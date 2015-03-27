<?php
  $updates = strip_tags(render($items[0]));
  if ($updates == 1): ?>
<div class="convention-updates">
  <?php print views_embed_view("convention_updates","block",arg(1)); ?>
  <?php print views_embed_view("convention_updates","block_1",arg(1)); ?>
  <?php print views_embed_view("convention_updates","block_2",arg(1)); ?>
</div>
<?php endif; ?>
