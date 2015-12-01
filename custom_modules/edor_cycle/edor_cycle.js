var $ = jQuery;

$(document).ready(function() {
    // Invoke cycle on our view
    $('.views-cycle').removeClass('no-js');
    $('.views-cycle').show();
    $('div.views-cycle .view-content').cycle({
            speed: 1200,
            pager: '.carousel-pager',
            pauseOnHover: true,
                manualSpeed: 100,
                slides: "> div.views-row"
                });
    if ($("#slide_table")) {
    updateSlideControl();
    $('#edit-slideshow-count').change(function() {
      updateSlideControl();
      });
    $("#slide_table").keyup(function() {
      updateSlideControl();
      });
    $("#slide_table").mouseup(function() {
      updateSlideControl();
      });
    $("#slide_table input").change(function() {
      updateSlideControl();
      });
    }
    });
// Function that manipulates the controls according to changes
function updateSlideControl() {
  count = 1;
  var slide_max = $('#edit-slideshow-count').val();
  $("#slide_table tbody tr").each(function() {
      published = $('input.form-checkbox.status',this).is(":checked");
      if (published) {
      if (count <= slide_max) {
      $(this).css("background","#79d1a7");
      count = count + 1;
      }
      else {
      $(this).css("background","#d0d179");
      }
      }
      else {
      $(this).css("background","#d179a4");
      }
      $(this).css("border-bottom","1px #ccc solid");
      });
}
