// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// libgdalcubes_is_null
Rcpp::LogicalVector libgdalcubes_is_null(SEXP pointer);
RcppExport SEXP _gdalcubes_libgdalcubes_is_null(SEXP pointerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pointer(pointerSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_is_null(pointer));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_version
Rcpp::List libgdalcubes_version();
RcppExport SEXP _gdalcubes_libgdalcubes_version() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_version());
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_gdalformats
std::vector<std::string> libgdalcubes_gdalformats();
RcppExport SEXP _gdalcubes_libgdalcubes_gdalformats() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_gdalformats());
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_gdalversion
std::string libgdalcubes_gdalversion();
RcppExport SEXP _gdalcubes_libgdalcubes_gdalversion() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_gdalversion());
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_add_format_dir
void libgdalcubes_add_format_dir(std::string dir);
RcppExport SEXP _gdalcubes_libgdalcubes_add_format_dir(SEXP dirSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type dir(dirSEXP);
    libgdalcubes_add_format_dir(dir);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_init
void libgdalcubes_init();
RcppExport SEXP _gdalcubes_libgdalcubes_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libgdalcubes_init();
    return R_NilValue;
END_RCPP
}
// libgdalcubes_cleanup
void libgdalcubes_cleanup();
RcppExport SEXP _gdalcubes_libgdalcubes_cleanup() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    libgdalcubes_cleanup();
    return R_NilValue;
END_RCPP
}
// libgdalcubes_datetime_values
Rcpp::StringVector libgdalcubes_datetime_values(SEXP pin);
RcppExport SEXP _gdalcubes_libgdalcubes_datetime_values(SEXP pinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_datetime_values(pin));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_cube_info
Rcpp::List libgdalcubes_cube_info(SEXP pin);
RcppExport SEXP _gdalcubes_libgdalcubes_cube_info(SEXP pinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_cube_info(pin));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_dimension_values_from_view
Rcpp::List libgdalcubes_dimension_values_from_view(Rcpp::List view, std::string dt_unit);
RcppExport SEXP _gdalcubes_libgdalcubes_dimension_values_from_view(SEXP viewSEXP, SEXP dt_unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type view(viewSEXP);
    Rcpp::traits::input_parameter< std::string >::type dt_unit(dt_unitSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_dimension_values_from_view(view, dt_unit));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_dimension_values
Rcpp::List libgdalcubes_dimension_values(SEXP pin, std::string dt_unit);
RcppExport SEXP _gdalcubes_libgdalcubes_dimension_values(SEXP pinSEXP, SEXP dt_unitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type dt_unit(dt_unitSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_dimension_values(pin, dt_unit));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_get_cube_view
Rcpp::List libgdalcubes_get_cube_view(SEXP pin);
RcppExport SEXP _gdalcubes_libgdalcubes_get_cube_view(SEXP pinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_get_cube_view(pin));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_open_image_collection
SEXP libgdalcubes_open_image_collection(std::string filename);
RcppExport SEXP _gdalcubes_libgdalcubes_open_image_collection(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_open_image_collection(filename));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_image_collection_info
Rcpp::List libgdalcubes_image_collection_info(SEXP pin);
RcppExport SEXP _gdalcubes_libgdalcubes_image_collection_info(SEXP pinSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_image_collection_info(pin));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_image_collection_extent
Rcpp::List libgdalcubes_image_collection_extent(SEXP pin, std::string srs);
RcppExport SEXP _gdalcubes_libgdalcubes_image_collection_extent(SEXP pinSEXP, SEXP srsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type srs(srsSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_image_collection_extent(pin, srs));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_image_collection
void libgdalcubes_create_image_collection(std::vector<std::string> files, std::string format_file, std::string outfile, bool unroll_archives);
RcppExport SEXP _gdalcubes_libgdalcubes_create_image_collection(SEXP filesSEXP, SEXP format_fileSEXP, SEXP outfileSEXP, SEXP unroll_archivesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type files(filesSEXP);
    Rcpp::traits::input_parameter< std::string >::type format_file(format_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< bool >::type unroll_archives(unroll_archivesSEXP);
    libgdalcubes_create_image_collection(files, format_file, outfile, unroll_archives);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_add_images
void libgdalcubes_add_images(SEXP pin, std::vector<std::string> files, bool unroll_archives, std::string outfile);
RcppExport SEXP _gdalcubes_libgdalcubes_add_images(SEXP pinSEXP, SEXP filesSEXP, SEXP unroll_archivesSEXP, SEXP outfileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type files(filesSEXP);
    Rcpp::traits::input_parameter< bool >::type unroll_archives(unroll_archivesSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    libgdalcubes_add_images(pin, files, unroll_archives, outfile);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_list_collection_formats
SEXP libgdalcubes_list_collection_formats();
RcppExport SEXP _gdalcubes_libgdalcubes_list_collection_formats() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_list_collection_formats());
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_view
SEXP libgdalcubes_create_view(SEXP v);
RcppExport SEXP _gdalcubes_libgdalcubes_create_view(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_view(v));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_image_collection_cube
SEXP libgdalcubes_create_image_collection_cube(SEXP pin, Rcpp::IntegerVector chunk_sizes, SEXP mask, SEXP v);
RcppExport SEXP _gdalcubes_libgdalcubes_create_image_collection_cube(SEXP pinSEXP, SEXP chunk_sizesSEXP, SEXP maskSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type chunk_sizes(chunk_sizesSEXP);
    Rcpp::traits::input_parameter< SEXP >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< SEXP >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_image_collection_cube(pin, chunk_sizes, mask, v));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_dummy_cube
SEXP libgdalcubes_create_dummy_cube(SEXP v, uint16_t nbands, double fill, Rcpp::IntegerVector chunk_sizes);
RcppExport SEXP _gdalcubes_libgdalcubes_create_dummy_cube(SEXP vSEXP, SEXP nbandsSEXP, SEXP fillSEXP, SEXP chunk_sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type v(vSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type nbands(nbandsSEXP);
    Rcpp::traits::input_parameter< double >::type fill(fillSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type chunk_sizes(chunk_sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_dummy_cube(v, nbands, fill, chunk_sizes));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_reduce_cube
SEXP libgdalcubes_create_reduce_cube(SEXP pin, std::string reducer);
RcppExport SEXP _gdalcubes_libgdalcubes_create_reduce_cube(SEXP pinSEXP, SEXP reducerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type reducer(reducerSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_reduce_cube(pin, reducer));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_reduce_time_cube
SEXP libgdalcubes_create_reduce_time_cube(SEXP pin, std::vector<std::string> reducers, std::vector<std::string> bands);
RcppExport SEXP _gdalcubes_libgdalcubes_create_reduce_time_cube(SEXP pinSEXP, SEXP reducersSEXP, SEXP bandsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type reducers(reducersSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type bands(bandsSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_reduce_time_cube(pin, reducers, bands));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_stream_reduce_time_cube
SEXP libgdalcubes_create_stream_reduce_time_cube(SEXP pin, std::string cmd, uint16_t nbands, std::vector<std::string> names);
RcppExport SEXP _gdalcubes_libgdalcubes_create_stream_reduce_time_cube(SEXP pinSEXP, SEXP cmdSEXP, SEXP nbandsSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type cmd(cmdSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type nbands(nbandsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_stream_reduce_time_cube(pin, cmd, nbands, names));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_reduce_space_cube
SEXP libgdalcubes_create_reduce_space_cube(SEXP pin, std::vector<std::string> reducers, std::vector<std::string> bands);
RcppExport SEXP _gdalcubes_libgdalcubes_create_reduce_space_cube(SEXP pinSEXP, SEXP reducersSEXP, SEXP bandsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type reducers(reducersSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type bands(bandsSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_reduce_space_cube(pin, reducers, bands));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_window_time_cube_reduce
SEXP libgdalcubes_create_window_time_cube_reduce(SEXP pin, std::vector<int> window, std::vector<std::string> reducers, std::vector<std::string> bands);
RcppExport SEXP _gdalcubes_libgdalcubes_create_window_time_cube_reduce(SEXP pinSEXP, SEXP windowSEXP, SEXP reducersSEXP, SEXP bandsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type window(windowSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type reducers(reducersSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type bands(bandsSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_window_time_cube_reduce(pin, window, reducers, bands));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_window_time_cube_kernel
SEXP libgdalcubes_create_window_time_cube_kernel(SEXP pin, std::vector<int> window, std::vector<double> kernel);
RcppExport SEXP _gdalcubes_libgdalcubes_create_window_time_cube_kernel(SEXP pinSEXP, SEXP windowSEXP, SEXP kernelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type window(windowSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type kernel(kernelSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_window_time_cube_kernel(pin, window, kernel));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_join_bands_cube
SEXP libgdalcubes_create_join_bands_cube(SEXP pinA, SEXP pinB, std::string prefix_A, std::string prefix_B);
RcppExport SEXP _gdalcubes_libgdalcubes_create_join_bands_cube(SEXP pinASEXP, SEXP pinBSEXP, SEXP prefix_ASEXP, SEXP prefix_BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pinA(pinASEXP);
    Rcpp::traits::input_parameter< SEXP >::type pinB(pinBSEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_A(prefix_ASEXP);
    Rcpp::traits::input_parameter< std::string >::type prefix_B(prefix_BSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_join_bands_cube(pinA, pinB, prefix_A, prefix_B));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_select_bands_cube
SEXP libgdalcubes_create_select_bands_cube(SEXP pin, std::vector<std::string> bands);
RcppExport SEXP _gdalcubes_libgdalcubes_create_select_bands_cube(SEXP pinSEXP, SEXP bandsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type bands(bandsSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_select_bands_cube(pin, bands));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_apply_pixel_cube
SEXP libgdalcubes_create_apply_pixel_cube(SEXP pin, std::vector<std::string> expr, std::vector<std::string> names);
RcppExport SEXP _gdalcubes_libgdalcubes_create_apply_pixel_cube(SEXP pinSEXP, SEXP exprSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type expr(exprSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_apply_pixel_cube(pin, expr, names));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_stream_apply_pixel_cube
SEXP libgdalcubes_create_stream_apply_pixel_cube(SEXP pin, std::string cmd, uint16_t nbands, std::vector<std::string> names);
RcppExport SEXP _gdalcubes_libgdalcubes_create_stream_apply_pixel_cube(SEXP pinSEXP, SEXP cmdSEXP, SEXP nbandsSEXP, SEXP namesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type cmd(cmdSEXP);
    Rcpp::traits::input_parameter< uint16_t >::type nbands(nbandsSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type names(namesSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_stream_apply_pixel_cube(pin, cmd, nbands, names));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_filter_predicate_cube
SEXP libgdalcubes_create_filter_predicate_cube(SEXP pin, std::string pred);
RcppExport SEXP _gdalcubes_libgdalcubes_create_filter_predicate_cube(SEXP pinSEXP, SEXP predSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type pred(predSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_filter_predicate_cube(pin, pred));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_debug_output
void libgdalcubes_debug_output(bool debug);
RcppExport SEXP _gdalcubes_libgdalcubes_debug_output(SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    libgdalcubes_debug_output(debug);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_eval_cube
void libgdalcubes_eval_cube(SEXP pin, std::string outfile, uint8_t compression_level);
RcppExport SEXP _gdalcubes_libgdalcubes_eval_cube(SEXP pinSEXP, SEXP outfileSEXP, SEXP compression_levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type outfile(outfileSEXP);
    Rcpp::traits::input_parameter< uint8_t >::type compression_level(compression_levelSEXP);
    libgdalcubes_eval_cube(pin, outfile, compression_level);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_create_stream_cube
SEXP libgdalcubes_create_stream_cube(SEXP pin, std::string cmd);
RcppExport SEXP _gdalcubes_libgdalcubes_create_stream_cube(SEXP pinSEXP, SEXP cmdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type cmd(cmdSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_stream_cube(pin, cmd));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_create_fill_time_cube
SEXP libgdalcubes_create_fill_time_cube(SEXP pin, std::string method);
RcppExport SEXP _gdalcubes_libgdalcubes_create_fill_time_cube(SEXP pinSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type pin(pinSEXP);
    Rcpp::traits::input_parameter< std::string >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(libgdalcubes_create_fill_time_cube(pin, method));
    return rcpp_result_gen;
END_RCPP
}
// libgdalcubes_set_threads
void libgdalcubes_set_threads(IntegerVector n);
RcppExport SEXP _gdalcubes_libgdalcubes_set_threads(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n(nSEXP);
    libgdalcubes_set_threads(n);
    return R_NilValue;
END_RCPP
}
// libgdalcubes_set_swarm
void libgdalcubes_set_swarm(std::vector<std::string> swarm);
RcppExport SEXP _gdalcubes_libgdalcubes_set_swarm(SEXP swarmSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type swarm(swarmSEXP);
    libgdalcubes_set_swarm(swarm);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gdalcubes_libgdalcubes_is_null", (DL_FUNC) &_gdalcubes_libgdalcubes_is_null, 1},
    {"_gdalcubes_libgdalcubes_version", (DL_FUNC) &_gdalcubes_libgdalcubes_version, 0},
    {"_gdalcubes_libgdalcubes_gdalformats", (DL_FUNC) &_gdalcubes_libgdalcubes_gdalformats, 0},
    {"_gdalcubes_libgdalcubes_gdalversion", (DL_FUNC) &_gdalcubes_libgdalcubes_gdalversion, 0},
    {"_gdalcubes_libgdalcubes_add_format_dir", (DL_FUNC) &_gdalcubes_libgdalcubes_add_format_dir, 1},
    {"_gdalcubes_libgdalcubes_init", (DL_FUNC) &_gdalcubes_libgdalcubes_init, 0},
    {"_gdalcubes_libgdalcubes_cleanup", (DL_FUNC) &_gdalcubes_libgdalcubes_cleanup, 0},
    {"_gdalcubes_libgdalcubes_datetime_values", (DL_FUNC) &_gdalcubes_libgdalcubes_datetime_values, 1},
    {"_gdalcubes_libgdalcubes_cube_info", (DL_FUNC) &_gdalcubes_libgdalcubes_cube_info, 1},
    {"_gdalcubes_libgdalcubes_dimension_values_from_view", (DL_FUNC) &_gdalcubes_libgdalcubes_dimension_values_from_view, 2},
    {"_gdalcubes_libgdalcubes_dimension_values", (DL_FUNC) &_gdalcubes_libgdalcubes_dimension_values, 2},
    {"_gdalcubes_libgdalcubes_get_cube_view", (DL_FUNC) &_gdalcubes_libgdalcubes_get_cube_view, 1},
    {"_gdalcubes_libgdalcubes_open_image_collection", (DL_FUNC) &_gdalcubes_libgdalcubes_open_image_collection, 1},
    {"_gdalcubes_libgdalcubes_image_collection_info", (DL_FUNC) &_gdalcubes_libgdalcubes_image_collection_info, 1},
    {"_gdalcubes_libgdalcubes_image_collection_extent", (DL_FUNC) &_gdalcubes_libgdalcubes_image_collection_extent, 2},
    {"_gdalcubes_libgdalcubes_create_image_collection", (DL_FUNC) &_gdalcubes_libgdalcubes_create_image_collection, 4},
    {"_gdalcubes_libgdalcubes_add_images", (DL_FUNC) &_gdalcubes_libgdalcubes_add_images, 4},
    {"_gdalcubes_libgdalcubes_list_collection_formats", (DL_FUNC) &_gdalcubes_libgdalcubes_list_collection_formats, 0},
    {"_gdalcubes_libgdalcubes_create_view", (DL_FUNC) &_gdalcubes_libgdalcubes_create_view, 1},
    {"_gdalcubes_libgdalcubes_create_image_collection_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_image_collection_cube, 4},
    {"_gdalcubes_libgdalcubes_create_dummy_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_dummy_cube, 4},
    {"_gdalcubes_libgdalcubes_create_reduce_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_reduce_cube, 2},
    {"_gdalcubes_libgdalcubes_create_reduce_time_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_reduce_time_cube, 3},
    {"_gdalcubes_libgdalcubes_create_stream_reduce_time_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_stream_reduce_time_cube, 4},
    {"_gdalcubes_libgdalcubes_create_reduce_space_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_reduce_space_cube, 3},
    {"_gdalcubes_libgdalcubes_create_window_time_cube_reduce", (DL_FUNC) &_gdalcubes_libgdalcubes_create_window_time_cube_reduce, 4},
    {"_gdalcubes_libgdalcubes_create_window_time_cube_kernel", (DL_FUNC) &_gdalcubes_libgdalcubes_create_window_time_cube_kernel, 3},
    {"_gdalcubes_libgdalcubes_create_join_bands_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_join_bands_cube, 4},
    {"_gdalcubes_libgdalcubes_create_select_bands_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_select_bands_cube, 2},
    {"_gdalcubes_libgdalcubes_create_apply_pixel_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_apply_pixel_cube, 3},
    {"_gdalcubes_libgdalcubes_create_stream_apply_pixel_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_stream_apply_pixel_cube, 4},
    {"_gdalcubes_libgdalcubes_create_filter_predicate_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_filter_predicate_cube, 2},
    {"_gdalcubes_libgdalcubes_debug_output", (DL_FUNC) &_gdalcubes_libgdalcubes_debug_output, 1},
    {"_gdalcubes_libgdalcubes_eval_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_eval_cube, 3},
    {"_gdalcubes_libgdalcubes_create_stream_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_stream_cube, 2},
    {"_gdalcubes_libgdalcubes_create_fill_time_cube", (DL_FUNC) &_gdalcubes_libgdalcubes_create_fill_time_cube, 2},
    {"_gdalcubes_libgdalcubes_set_threads", (DL_FUNC) &_gdalcubes_libgdalcubes_set_threads, 1},
    {"_gdalcubes_libgdalcubes_set_swarm", (DL_FUNC) &_gdalcubes_libgdalcubes_set_swarm, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_gdalcubes(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
