// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/abess.h"
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// abessGLM_API
List abessGLM_API(Eigen::MatrixXd x, Eigen::MatrixXd y, int n, int p, int normalize_type, Eigen::VectorXd weight, int algorithm_type, int model_type, int max_iter, int exchange_num, int path_type, bool is_warm_start, int ic_type, double ic_coef, int Kfold, Eigen::VectorXi sequence, Eigen::VectorXd lambda_seq, int s_min, int s_max, double lambda_min, double lambda_max, int nlambda, int screening_size, Eigen::VectorXi g_index, Eigen::VectorXi always_select, int primary_model_fit_max_iter, double primary_model_fit_epsilon, bool early_stop, bool approximate_Newton, int thread, bool covariance_update, bool sparse_matrix, int splicing_type, int sub_search, Eigen::VectorXi cv_fold_id, Eigen::VectorXi A_init);
RcppExport SEXP _abess_abessGLM_API(SEXP xSEXP, SEXP ySEXP, SEXP nSEXP, SEXP pSEXP, SEXP normalize_typeSEXP, SEXP weightSEXP, SEXP algorithm_typeSEXP, SEXP model_typeSEXP, SEXP max_iterSEXP, SEXP exchange_numSEXP, SEXP path_typeSEXP, SEXP is_warm_startSEXP, SEXP ic_typeSEXP, SEXP ic_coefSEXP, SEXP KfoldSEXP, SEXP sequenceSEXP, SEXP lambda_seqSEXP, SEXP s_minSEXP, SEXP s_maxSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP nlambdaSEXP, SEXP screening_sizeSEXP, SEXP g_indexSEXP, SEXP always_selectSEXP, SEXP primary_model_fit_max_iterSEXP, SEXP primary_model_fit_epsilonSEXP, SEXP early_stopSEXP, SEXP approximate_NewtonSEXP, SEXP threadSEXP, SEXP covariance_updateSEXP, SEXP sparse_matrixSEXP, SEXP splicing_typeSEXP, SEXP sub_searchSEXP, SEXP cv_fold_idSEXP, SEXP A_initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type normalize_type(normalize_typeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type algorithm_type(algorithm_typeSEXP);
    Rcpp::traits::input_parameter< int >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type exchange_num(exchange_numSEXP);
    Rcpp::traits::input_parameter< int >::type path_type(path_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type is_warm_start(is_warm_startSEXP);
    Rcpp::traits::input_parameter< int >::type ic_type(ic_typeSEXP);
    Rcpp::traits::input_parameter< double >::type ic_coef(ic_coefSEXP);
    Rcpp::traits::input_parameter< int >::type Kfold(KfoldSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda_seq(lambda_seqSEXP);
    Rcpp::traits::input_parameter< int >::type s_min(s_minSEXP);
    Rcpp::traits::input_parameter< int >::type s_max(s_maxSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type screening_size(screening_sizeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type g_index(g_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type always_select(always_selectSEXP);
    Rcpp::traits::input_parameter< int >::type primary_model_fit_max_iter(primary_model_fit_max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type primary_model_fit_epsilon(primary_model_fit_epsilonSEXP);
    Rcpp::traits::input_parameter< bool >::type early_stop(early_stopSEXP);
    Rcpp::traits::input_parameter< bool >::type approximate_Newton(approximate_NewtonSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< bool >::type covariance_update(covariance_updateSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse_matrix(sparse_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type splicing_type(splicing_typeSEXP);
    Rcpp::traits::input_parameter< int >::type sub_search(sub_searchSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type cv_fold_id(cv_fold_idSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type A_init(A_initSEXP);
    rcpp_result_gen = Rcpp::wrap(abessGLM_API(x, y, n, p, normalize_type, weight, algorithm_type, model_type, max_iter, exchange_num, path_type, is_warm_start, ic_type, ic_coef, Kfold, sequence, lambda_seq, s_min, s_max, lambda_min, lambda_max, nlambda, screening_size, g_index, always_select, primary_model_fit_max_iter, primary_model_fit_epsilon, early_stop, approximate_Newton, thread, covariance_update, sparse_matrix, splicing_type, sub_search, cv_fold_id, A_init));
    return rcpp_result_gen;
END_RCPP
}
// abessPCA_API
List abessPCA_API(Eigen::MatrixXd x, int n, int p, int normalize_type, Eigen::VectorXd weight, Eigen::MatrixXd sigma, int max_iter, int exchange_num, int path_type, bool is_warm_start, int ic_type, double ic_coef, int Kfold, Eigen::MatrixXi sequence, int s_min, int s_max, int screening_size, Eigen::VectorXi g_index, Eigen::VectorXi always_select, bool early_stop, int thread, bool sparse_matrix, int splicing_type, int sub_search, Eigen::VectorXi cv_fold_id, int pca_num, Eigen::VectorXi A_init);
RcppExport SEXP _abess_abessPCA_API(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP normalize_typeSEXP, SEXP weightSEXP, SEXP sigmaSEXP, SEXP max_iterSEXP, SEXP exchange_numSEXP, SEXP path_typeSEXP, SEXP is_warm_startSEXP, SEXP ic_typeSEXP, SEXP ic_coefSEXP, SEXP KfoldSEXP, SEXP sequenceSEXP, SEXP s_minSEXP, SEXP s_maxSEXP, SEXP screening_sizeSEXP, SEXP g_indexSEXP, SEXP always_selectSEXP, SEXP early_stopSEXP, SEXP threadSEXP, SEXP sparse_matrixSEXP, SEXP splicing_typeSEXP, SEXP sub_searchSEXP, SEXP cv_fold_idSEXP, SEXP pca_numSEXP, SEXP A_initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type normalize_type(normalize_typeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type exchange_num(exchange_numSEXP);
    Rcpp::traits::input_parameter< int >::type path_type(path_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type is_warm_start(is_warm_startSEXP);
    Rcpp::traits::input_parameter< int >::type ic_type(ic_typeSEXP);
    Rcpp::traits::input_parameter< double >::type ic_coef(ic_coefSEXP);
    Rcpp::traits::input_parameter< int >::type Kfold(KfoldSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXi >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< int >::type s_min(s_minSEXP);
    Rcpp::traits::input_parameter< int >::type s_max(s_maxSEXP);
    Rcpp::traits::input_parameter< int >::type screening_size(screening_sizeSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type g_index(g_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type always_select(always_selectSEXP);
    Rcpp::traits::input_parameter< bool >::type early_stop(early_stopSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse_matrix(sparse_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type splicing_type(splicing_typeSEXP);
    Rcpp::traits::input_parameter< int >::type sub_search(sub_searchSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type cv_fold_id(cv_fold_idSEXP);
    Rcpp::traits::input_parameter< int >::type pca_num(pca_numSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type A_init(A_initSEXP);
    rcpp_result_gen = Rcpp::wrap(abessPCA_API(x, n, p, normalize_type, weight, sigma, max_iter, exchange_num, path_type, is_warm_start, ic_type, ic_coef, Kfold, sequence, s_min, s_max, screening_size, g_index, always_select, early_stop, thread, sparse_matrix, splicing_type, sub_search, cv_fold_id, pca_num, A_init));
    return rcpp_result_gen;
END_RCPP
}
// abessRPCA_API
List abessRPCA_API(Eigen::MatrixXd x, int n, int p, int max_iter, int exchange_num, int path_type, bool is_warm_start, int ic_type, double ic_coef, Eigen::VectorXi sequence, Eigen::VectorXd lambda_seq, int s_min, int s_max, double lambda_min, double lambda_max, int nlambda, int screening_size, int primary_model_fit_max_iter, double primary_model_fit_epsilon, Eigen::VectorXi g_index, Eigen::VectorXi always_select, bool early_stop, int thread, bool sparse_matrix, int splicing_type, int sub_search, Eigen::VectorXi A_init);
RcppExport SEXP _abess_abessRPCA_API(SEXP xSEXP, SEXP nSEXP, SEXP pSEXP, SEXP max_iterSEXP, SEXP exchange_numSEXP, SEXP path_typeSEXP, SEXP is_warm_startSEXP, SEXP ic_typeSEXP, SEXP ic_coefSEXP, SEXP sequenceSEXP, SEXP lambda_seqSEXP, SEXP s_minSEXP, SEXP s_maxSEXP, SEXP lambda_minSEXP, SEXP lambda_maxSEXP, SEXP nlambdaSEXP, SEXP screening_sizeSEXP, SEXP primary_model_fit_max_iterSEXP, SEXP primary_model_fit_epsilonSEXP, SEXP g_indexSEXP, SEXP always_selectSEXP, SEXP early_stopSEXP, SEXP threadSEXP, SEXP sparse_matrixSEXP, SEXP splicing_typeSEXP, SEXP sub_searchSEXP, SEXP A_initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type exchange_num(exchange_numSEXP);
    Rcpp::traits::input_parameter< int >::type path_type(path_typeSEXP);
    Rcpp::traits::input_parameter< bool >::type is_warm_start(is_warm_startSEXP);
    Rcpp::traits::input_parameter< int >::type ic_type(ic_typeSEXP);
    Rcpp::traits::input_parameter< double >::type ic_coef(ic_coefSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type sequence(sequenceSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type lambda_seq(lambda_seqSEXP);
    Rcpp::traits::input_parameter< int >::type s_min(s_minSEXP);
    Rcpp::traits::input_parameter< int >::type s_max(s_maxSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_min(lambda_minSEXP);
    Rcpp::traits::input_parameter< double >::type lambda_max(lambda_maxSEXP);
    Rcpp::traits::input_parameter< int >::type nlambda(nlambdaSEXP);
    Rcpp::traits::input_parameter< int >::type screening_size(screening_sizeSEXP);
    Rcpp::traits::input_parameter< int >::type primary_model_fit_max_iter(primary_model_fit_max_iterSEXP);
    Rcpp::traits::input_parameter< double >::type primary_model_fit_epsilon(primary_model_fit_epsilonSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type g_index(g_indexSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type always_select(always_selectSEXP);
    Rcpp::traits::input_parameter< bool >::type early_stop(early_stopSEXP);
    Rcpp::traits::input_parameter< int >::type thread(threadSEXP);
    Rcpp::traits::input_parameter< bool >::type sparse_matrix(sparse_matrixSEXP);
    Rcpp::traits::input_parameter< int >::type splicing_type(splicing_typeSEXP);
    Rcpp::traits::input_parameter< int >::type sub_search(sub_searchSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXi >::type A_init(A_initSEXP);
    rcpp_result_gen = Rcpp::wrap(abessRPCA_API(x, n, p, max_iter, exchange_num, path_type, is_warm_start, ic_type, ic_coef, sequence, lambda_seq, s_min, s_max, lambda_min, lambda_max, nlambda, screening_size, primary_model_fit_max_iter, primary_model_fit_epsilon, g_index, always_select, early_stop, thread, sparse_matrix, splicing_type, sub_search, A_init));
    return rcpp_result_gen;
END_RCPP
}
// sample_by_conf
Eigen::MatrixXd sample_by_conf(long long n, Eigen::MatrixXd theta, int seed);
static SEXP _abess_sample_by_conf_try(SEXP nSEXP, SEXP thetaSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< long long >::type n(nSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_by_conf(n, theta, seed));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _abess_sample_by_conf(SEXP nSEXP, SEXP thetaSEXP, SEXP seedSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_abess_sample_by_conf_try(nSEXP, thetaSEXP, seedSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// Ising_Gibbs
Eigen::MatrixXd Ising_Gibbs(Eigen::MatrixXd theta, int n_sample, int burn, int skip, Eigen::VectorXd value, int seed);
static SEXP _abess_Ising_Gibbs_try(SEXP thetaSEXP, SEXP n_sampleSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP valueSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type n_sample(n_sampleSEXP);
    Rcpp::traits::input_parameter< int >::type burn(burnSEXP);
    Rcpp::traits::input_parameter< int >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type value(valueSEXP);
    Rcpp::traits::input_parameter< int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(Ising_Gibbs(theta, n_sample, burn, skip, value, seed));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _abess_Ising_Gibbs(SEXP thetaSEXP, SEXP n_sampleSEXP, SEXP burnSEXP, SEXP skipSEXP, SEXP valueSEXP, SEXP seedSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_abess_Ising_Gibbs_try(thetaSEXP, n_sampleSEXP, burnSEXP, skipSEXP, valueSEXP, seedSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _abess_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Eigen::MatrixXd(*sample_by_conf)(long long,Eigen::MatrixXd,int)");
        signatures.insert("Eigen::MatrixXd(*Ising_Gibbs)(Eigen::MatrixXd,int,int,int,Eigen::VectorXd,int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _abess_RcppExport_registerCCallable() { 
    R_RegisterCCallable("abess", "_abess_sample_by_conf", (DL_FUNC)_abess_sample_by_conf_try);
    R_RegisterCCallable("abess", "_abess_Ising_Gibbs", (DL_FUNC)_abess_Ising_Gibbs_try);
    R_RegisterCCallable("abess", "_abess_RcppExport_validate", (DL_FUNC)_abess_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_abess_abessGLM_API", (DL_FUNC) &_abess_abessGLM_API, 35},
    {"_abess_abessPCA_API", (DL_FUNC) &_abess_abessPCA_API, 26},
    {"_abess_abessRPCA_API", (DL_FUNC) &_abess_abessRPCA_API, 26},
    {"_abess_sample_by_conf", (DL_FUNC) &_abess_sample_by_conf, 3},
    {"_abess_Ising_Gibbs", (DL_FUNC) &_abess_Ising_Gibbs, 6},
    {"_abess_RcppExport_registerCCallable", (DL_FUNC) &_abess_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_abess(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
