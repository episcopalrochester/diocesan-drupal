var $ = jQuery;

$(document).ready(function() {
    $('.views-cycle').show();
    $('div.views-cycle .view-content').cycle({
            speed: 1200,
                manualSpeed: 100,
                slides: "> div.views-row"
                });
   // $('.views-cycle .slide-text-container-inner').append('<div class="slide-controls"><a href="#" class="slide-prev">Prev</a><a href="#" class="slide-next">Next</a>');
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
