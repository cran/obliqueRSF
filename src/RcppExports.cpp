// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// surv_est
NumericVector surv_est(NumericVector times, NumericVector probs, NumericVector newtimes);
RcppExport SEXP _obliqueRSF_surv_est(SEXP timesSEXP, SEXP probsSEXP, SEXP newtimesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type times(timesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type newtimes(newtimesSEXP);
    rcpp_result_gen = Rcpp::wrap(surv_est(times, probs, newtimes));
    return rcpp_result_gen;
END_RCPP
}
// innerprod
double innerprod(NumericVector x, NumericVector y);
RcppExport SEXP _obliqueRSF_innerprod(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(innerprod(x, y));
    return rcpp_result_gen;
END_RCPP
}
// lrtestC
double lrtestC(NumericVector time, NumericVector status, NumericVector grp);
RcppExport SEXP _obliqueRSF_lrtestC(SEXP timeSEXP, SEXP statusSEXP, SEXP grpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type grp(grpSEXP);
    rcpp_result_gen = Rcpp::wrap(lrtestC(time, status, grp));
    return rcpp_result_gen;
END_RCPP
}
// moving_average
NumericVector moving_average(NumericVector a);
RcppExport SEXP _obliqueRSF_moving_average(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(moving_average(a));
    return rcpp_result_gen;
END_RCPP
}
// colmeans
NumericVector colmeans(NumericMatrix input_mat);
RcppExport SEXP _obliqueRSF_colmeans(SEXP input_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type input_mat(input_matSEXP);
    rcpp_result_gen = Rcpp::wrap(colmeans(input_mat));
    return rcpp_result_gen;
END_RCPP
}
// pick_node
String pick_node(double wt, double cut_pnt, CharacterVector options);
RcppExport SEXP _obliqueRSF_pick_node(SEXP wtSEXP, SEXP cut_pntSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type wt(wtSEXP);
    Rcpp::traits::input_parameter< double >::type cut_pnt(cut_pntSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(pick_node(wt, cut_pnt, options));
    return rcpp_result_gen;
END_RCPP
}
// predict_orsf
NumericMatrix predict_orsf(List forest, NumericMatrix newx, NumericVector times);
RcppExport SEXP _obliqueRSF_predict_orsf(SEXP forestSEXP, SEXP newxSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type forest(forestSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_orsf(forest, newx, times));
    return rcpp_result_gen;
END_RCPP
}
// predict_ost
NumericMatrix predict_ost(List ostree, NumericMatrix newx, NumericVector times);
RcppExport SEXP _obliqueRSF_predict_ost(SEXP ostreeSEXP, SEXP newxSEXP, SEXP timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type ostree(ostreeSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type times(timesSEXP);
    rcpp_result_gen = Rcpp::wrap(predict_ost(ostree, newx, times));
    return rcpp_result_gen;
END_RCPP
}
// seql
NumericVector seql(long double from, long double to, long unsigned int length_out);
RcppExport SEXP _obliqueRSF_seql(SEXP fromSEXP, SEXP toSEXP, SEXP length_outSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< long double >::type from(fromSEXP);
    Rcpp::traits::input_parameter< long double >::type to(toSEXP);
    Rcpp::traits::input_parameter< long unsigned int >::type length_out(length_outSEXP);
    rcpp_result_gen = Rcpp::wrap(seql(from, to, length_out));
    return rcpp_result_gen;
END_RCPP
}
// leaf_nodes
StringVector leaf_nodes(List nodes);
RcppExport SEXP _obliqueRSF_leaf_nodes(SEXP nodesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type nodes(nodesSEXP);
    rcpp_result_gen = Rcpp::wrap(leaf_nodes(nodes));
    return rcpp_result_gen;
END_RCPP
}
// unique_len_fast
int unique_len_fast(NumericVector x);
RcppExport SEXP _obliqueRSF_unique_len_fast(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(unique_len_fast(x));
    return rcpp_result_gen;
END_RCPP
}
// filter_unique
IntegerVector filter_unique(IntegerVector v, IntegerVector i);
RcppExport SEXP _obliqueRSF_filter_unique(SEXP vSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type i(iSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_unique(v, i));
    return rcpp_result_gen;
END_RCPP
}
// modify_string
StringVector modify_string(StringVector x, String newchar, IntegerVector newindx);
RcppExport SEXP _obliqueRSF_modify_string(SEXP xSEXP, SEXP newcharSEXP, SEXP newindxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< String >::type newchar(newcharSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type newindx(newindxSEXP);
    rcpp_result_gen = Rcpp::wrap(modify_string(x, newchar, newindx));
    return rcpp_result_gen;
END_RCPP
}
// namegen
StringVector namegen(String origin_name, StringVector rhs);
RcppExport SEXP _obliqueRSF_namegen(SEXP origin_nameSEXP, SEXP rhsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type origin_name(origin_nameSEXP);
    Rcpp::traits::input_parameter< StringVector >::type rhs(rhsSEXP);
    rcpp_result_gen = Rcpp::wrap(namegen(origin_name, rhs));
    return rcpp_result_gen;
END_RCPP
}
// find_nonconst_cols
IntegerVector find_nonconst_cols(NumericMatrix mat, IntegerVector indx, int ncol);
RcppExport SEXP _obliqueRSF_find_nonconst_cols(SEXP matSEXP, SEXP indxSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indx(indxSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(find_nonconst_cols(mat, indx, ncol));
    return rcpp_result_gen;
END_RCPP
}
// soft_sample
IntegerVector soft_sample(IntegerVector x, int size);
RcppExport SEXP _obliqueRSF_soft_sample(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(soft_sample(x, size));
    return rcpp_result_gen;
END_RCPP
}
// find_indx
IntegerVector find_indx(StringVector node_ids, String current_node);
RcppExport SEXP _obliqueRSF_find_indx(SEXP node_idsSEXP, SEXP current_nodeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< StringVector >::type node_ids(node_idsSEXP);
    Rcpp::traits::input_parameter< String >::type current_node(current_nodeSEXP);
    rcpp_result_gen = Rcpp::wrap(find_indx(node_ids, current_node));
    return rcpp_result_gen;
END_RCPP
}
// comp_preds
NumericVector comp_preds(IntegerVector& indx, int& node_nobs, IntegerVector& node_cols, NumericVector& bwts, NumericMatrix& dmat);
RcppExport SEXP _obliqueRSF_comp_preds(SEXP indxSEXP, SEXP node_nobsSEXP, SEXP node_colsSEXP, SEXP bwtsSEXP, SEXP dmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type indx(indxSEXP);
    Rcpp::traits::input_parameter< int& >::type node_nobs(node_nobsSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type node_cols(node_colsSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type bwts(bwtsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type dmat(dmatSEXP);
    rcpp_result_gen = Rcpp::wrap(comp_preds(indx, node_nobs, node_cols, bwts, dmat));
    return rcpp_result_gen;
END_RCPP
}
// srv_R
List srv_R(NumericVector time_indx, IntegerVector status_indx, Function f);
RcppExport SEXP _obliqueRSF_srv_R(SEXP time_indxSEXP, SEXP status_indxSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type time_indx(time_indxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type status_indx(status_indxSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(srv_R(time_indx, status_indx, f));
    return rcpp_result_gen;
END_RCPP
}
// lrt_R
double lrt_R(NumericVector tmp_time, NumericVector tmp_grp, NumericVector tmp_status, Function f);
RcppExport SEXP _obliqueRSF_lrt_R(SEXP tmp_timeSEXP, SEXP tmp_grpSEXP, SEXP tmp_statusSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tmp_time(tmp_timeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmp_grp(tmp_grpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tmp_status(tmp_statusSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(lrt_R(tmp_time, tmp_grp, tmp_status, f));
    return rcpp_result_gen;
END_RCPP
}
// boot_R
List boot_R(NumericMatrix dmat, NumericVector time, IntegerVector status, IntegerVector inb, Function f);
RcppExport SEXP _obliqueRSF_boot_R(SEXP dmatSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP inbSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type inb(inbSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(boot_R(dmat, time, status, inb, f));
    return rcpp_result_gen;
END_RCPP
}
// eval_forest_R
List eval_forest_R(NumericMatrix oob_predictions, NumericVector time, IntegerVector status, NumericVector eval_times, Function f);
RcppExport SEXP _obliqueRSF_eval_forest_R(SEXP oob_predictionsSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP eval_timesSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type oob_predictions(oob_predictionsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eval_times(eval_timesSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(eval_forest_R(oob_predictions, time, status, eval_times, f));
    return rcpp_result_gen;
END_RCPP
}
// net_R
NumericMatrix net_R(Rcpp::NumericMatrix dmat, Rcpp::NumericVector time, Rcpp::IntegerVector status, Rcpp::IntegerVector indx, Rcpp::IntegerVector cols, int dfmax, NumericVector alpha, Function f);
RcppExport SEXP _obliqueRSF_net_R(SEXP dmatSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP indxSEXP, SEXP colsSEXP, SEXP dfmaxSEXP, SEXP alphaSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type indx(indxSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(net_R(dmat, time, status, indx, cols, dfmax, alpha, f));
    return rcpp_result_gen;
END_RCPP
}
// tune_node
List tune_node(NumericMatrix& dmat, NumericMatrix& bwts_mat, IntegerVector& indx, IntegerVector& node_cols, NumericVector& status_indx, NumericVector& time_indx, List& node, int& node_nobs, int& min_obs_in_leaf_node, int& min_events_in_leaf_node, int& nsplit, double gamma, double mincriterion);
RcppExport SEXP _obliqueRSF_tune_node(SEXP dmatSEXP, SEXP bwts_matSEXP, SEXP indxSEXP, SEXP node_colsSEXP, SEXP status_indxSEXP, SEXP time_indxSEXP, SEXP nodeSEXP, SEXP node_nobsSEXP, SEXP min_obs_in_leaf_nodeSEXP, SEXP min_events_in_leaf_nodeSEXP, SEXP nsplitSEXP, SEXP gammaSEXP, SEXP mincriterionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type bwts_mat(bwts_matSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type indx(indxSEXP);
    Rcpp::traits::input_parameter< IntegerVector& >::type node_cols(node_colsSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type status_indx(status_indxSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type time_indx(time_indxSEXP);
    Rcpp::traits::input_parameter< List& >::type node(nodeSEXP);
    Rcpp::traits::input_parameter< int& >::type node_nobs(node_nobsSEXP);
    Rcpp::traits::input_parameter< int& >::type min_obs_in_leaf_node(min_obs_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int& >::type min_events_in_leaf_node(min_events_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int& >::type nsplit(nsplitSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mincriterion(mincriterionSEXP);
    rcpp_result_gen = Rcpp::wrap(tune_node(dmat, bwts_mat, indx, node_cols, status_indx, time_indx, node, node_nobs, min_obs_in_leaf_node, min_events_in_leaf_node, nsplit, gamma, mincriterion));
    return rcpp_result_gen;
END_RCPP
}
// OST
List OST(NumericMatrix dmat, StringVector features, NumericVector alpha, NumericVector time, IntegerVector status, IntegerVector inbag_orsf_ids, int min_events_to_split_node, int min_obs_to_split_node, int min_obs_in_leaf_node, int min_events_in_leaf_node, int mtry, int dfmax, int nsplit, double gamma, double mincriterion, Function surv_KM_Rfun, Function glmnet_Rfun);
RcppExport SEXP _obliqueRSF_OST(SEXP dmatSEXP, SEXP featuresSEXP, SEXP alphaSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP inbag_orsf_idsSEXP, SEXP min_events_to_split_nodeSEXP, SEXP min_obs_to_split_nodeSEXP, SEXP min_obs_in_leaf_nodeSEXP, SEXP min_events_in_leaf_nodeSEXP, SEXP mtrySEXP, SEXP dfmaxSEXP, SEXP nsplitSEXP, SEXP gammaSEXP, SEXP mincriterionSEXP, SEXP surv_KM_RfunSEXP, SEXP glmnet_RfunSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< StringVector >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type inbag_orsf_ids(inbag_orsf_idsSEXP);
    Rcpp::traits::input_parameter< int >::type min_events_to_split_node(min_events_to_split_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_to_split_node(min_obs_to_split_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_in_leaf_node(min_obs_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_events_in_leaf_node(min_events_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< int >::type nsplit(nsplitSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mincriterion(mincriterionSEXP);
    Rcpp::traits::input_parameter< Function >::type surv_KM_Rfun(surv_KM_RfunSEXP);
    Rcpp::traits::input_parameter< Function >::type glmnet_Rfun(glmnet_RfunSEXP);
    rcpp_result_gen = Rcpp::wrap(OST(dmat, features, alpha, time, status, inbag_orsf_ids, min_events_to_split_node, min_obs_to_split_node, min_obs_in_leaf_node, min_events_in_leaf_node, mtry, dfmax, nsplit, gamma, mincriterion, surv_KM_Rfun, glmnet_Rfun));
    return rcpp_result_gen;
END_RCPP
}
// ORSFcpp
List ORSFcpp(NumericMatrix dmat, StringVector features, NumericVector alpha, NumericVector time, IntegerVector status, NumericVector eval_times, int min_events_to_split_node, int min_obs_to_split_node, int min_obs_in_leaf_node, int min_events_in_leaf_node, int mtry, int dfmax, int nsplit, int ntree, double gamma, double mincriterion, bool verbose, bool compute_oob, Function surv_KM_Rfun, Function bootstrap_Rfun, Function glmnet_Rfun, Function forest_eval_Rfun);
RcppExport SEXP _obliqueRSF_ORSFcpp(SEXP dmatSEXP, SEXP featuresSEXP, SEXP alphaSEXP, SEXP timeSEXP, SEXP statusSEXP, SEXP eval_timesSEXP, SEXP min_events_to_split_nodeSEXP, SEXP min_obs_to_split_nodeSEXP, SEXP min_obs_in_leaf_nodeSEXP, SEXP min_events_in_leaf_nodeSEXP, SEXP mtrySEXP, SEXP dfmaxSEXP, SEXP nsplitSEXP, SEXP ntreeSEXP, SEXP gammaSEXP, SEXP mincriterionSEXP, SEXP verboseSEXP, SEXP compute_oobSEXP, SEXP surv_KM_RfunSEXP, SEXP bootstrap_RfunSEXP, SEXP glmnet_RfunSEXP, SEXP forest_eval_RfunSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type dmat(dmatSEXP);
    Rcpp::traits::input_parameter< StringVector >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type time(timeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type status(statusSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type eval_times(eval_timesSEXP);
    Rcpp::traits::input_parameter< int >::type min_events_to_split_node(min_events_to_split_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_to_split_node(min_obs_to_split_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_obs_in_leaf_node(min_obs_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type min_events_in_leaf_node(min_events_in_leaf_nodeSEXP);
    Rcpp::traits::input_parameter< int >::type mtry(mtrySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< int >::type nsplit(nsplitSEXP);
    Rcpp::traits::input_parameter< int >::type ntree(ntreeSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type mincriterion(mincriterionSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type compute_oob(compute_oobSEXP);
    Rcpp::traits::input_parameter< Function >::type surv_KM_Rfun(surv_KM_RfunSEXP);
    Rcpp::traits::input_parameter< Function >::type bootstrap_Rfun(bootstrap_RfunSEXP);
    Rcpp::traits::input_parameter< Function >::type glmnet_Rfun(glmnet_RfunSEXP);
    Rcpp::traits::input_parameter< Function >::type forest_eval_Rfun(forest_eval_RfunSEXP);
    rcpp_result_gen = Rcpp::wrap(ORSFcpp(dmat, features, alpha, time, status, eval_times, min_events_to_split_node, min_obs_to_split_node, min_obs_in_leaf_node, min_events_in_leaf_node, mtry, dfmax, nsplit, ntree, gamma, mincriterion, verbose, compute_oob, surv_KM_Rfun, bootstrap_Rfun, glmnet_Rfun, forest_eval_Rfun));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_obliqueRSF_surv_est", (DL_FUNC) &_obliqueRSF_surv_est, 3},
    {"_obliqueRSF_innerprod", (DL_FUNC) &_obliqueRSF_innerprod, 2},
    {"_obliqueRSF_lrtestC", (DL_FUNC) &_obliqueRSF_lrtestC, 3},
    {"_obliqueRSF_moving_average", (DL_FUNC) &_obliqueRSF_moving_average, 1},
    {"_obliqueRSF_colmeans", (DL_FUNC) &_obliqueRSF_colmeans, 1},
    {"_obliqueRSF_pick_node", (DL_FUNC) &_obliqueRSF_pick_node, 3},
    {"_obliqueRSF_predict_orsf", (DL_FUNC) &_obliqueRSF_predict_orsf, 3},
    {"_obliqueRSF_predict_ost", (DL_FUNC) &_obliqueRSF_predict_ost, 3},
    {"_obliqueRSF_seql", (DL_FUNC) &_obliqueRSF_seql, 3},
    {"_obliqueRSF_leaf_nodes", (DL_FUNC) &_obliqueRSF_leaf_nodes, 1},
    {"_obliqueRSF_unique_len_fast", (DL_FUNC) &_obliqueRSF_unique_len_fast, 1},
    {"_obliqueRSF_filter_unique", (DL_FUNC) &_obliqueRSF_filter_unique, 2},
    {"_obliqueRSF_modify_string", (DL_FUNC) &_obliqueRSF_modify_string, 3},
    {"_obliqueRSF_namegen", (DL_FUNC) &_obliqueRSF_namegen, 2},
    {"_obliqueRSF_find_nonconst_cols", (DL_FUNC) &_obliqueRSF_find_nonconst_cols, 3},
    {"_obliqueRSF_soft_sample", (DL_FUNC) &_obliqueRSF_soft_sample, 2},
    {"_obliqueRSF_find_indx", (DL_FUNC) &_obliqueRSF_find_indx, 2},
    {"_obliqueRSF_comp_preds", (DL_FUNC) &_obliqueRSF_comp_preds, 5},
    {"_obliqueRSF_srv_R", (DL_FUNC) &_obliqueRSF_srv_R, 3},
    {"_obliqueRSF_lrt_R", (DL_FUNC) &_obliqueRSF_lrt_R, 4},
    {"_obliqueRSF_boot_R", (DL_FUNC) &_obliqueRSF_boot_R, 5},
    {"_obliqueRSF_eval_forest_R", (DL_FUNC) &_obliqueRSF_eval_forest_R, 5},
    {"_obliqueRSF_net_R", (DL_FUNC) &_obliqueRSF_net_R, 8},
    {"_obliqueRSF_tune_node", (DL_FUNC) &_obliqueRSF_tune_node, 13},
    {"_obliqueRSF_OST", (DL_FUNC) &_obliqueRSF_OST, 17},
    {"_obliqueRSF_ORSFcpp", (DL_FUNC) &_obliqueRSF_ORSFcpp, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_obliqueRSF(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
