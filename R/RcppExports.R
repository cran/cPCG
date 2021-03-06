# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

icc <- function(A) {
    .Call(`_cPCG_icc`, A)
}

#' Conjugate gradient method
#'
#' Conjugate gradient method for solving system of linear equations Ax = b,
#' where A is symmetric and positive definite.
#'
#' @title Solve for x in Ax = b using conjugate gradient method.
#' @param A matrix, symmetric and positive definite.
#' @param b vector, with same dimension as number of rows of A.
#' @param tol numeric, threshold for convergence, default is \code{1e-6}.
#' @param maxIter numeric, maximum iteration, default is \code{1000}.
#' @return A vector representing solution x.
#' @examples
#' \dontrun{
#' test_A <- matrix(c(4,1,1,3), ncol = 2)
#' test_b <- matrix(1:2, ncol = 1)
#' cgsolve(test_A, test_b, 1e-6, 1000)
#' }
cgsolve <- function(A, b, tol = 1e-6, maxIter = 1000L) {
    .Call(`_cPCG_cgsolve`, A, b, tol, maxIter)
}

#' Preconditioned conjugate gradient method
#'
#' Preconditioned conjugate gradient method for solving system of linear equations Ax = b,
#' where A is symmetric and positive definite.
#'
#' @title Solve for x in Ax = b using preconditioned conjugate gradient method.
#' @param A matrix, symmetric and positive definite.
#' @param b vector, with same dimension as number of rows of A.
#' @param preconditioner string, method for preconditioning: \code{"Jacobi"} (default), \code{"SSOR"}, or \code{"ICC"}.
#' @param tol numeric, threshold for convergence, default is \code{1e-6}.
#' @param maxIter numeric, maximum iteration, default is \code{1000}.
#' @return A vector representing solution x.
#' @examples
#' \dontrun{
#' test_A <- matrix(c(4,1,1,3), ncol = 2)
#' test_b <- matrix(1:2, ncol = 1)
#' pcgsolve(test_A, test_b, "ICC")
#' }
pcgsolve <- function(A, b, preconditioner = "Jacobi", tol = 1e-6, maxIter = 1000L) {
    .Call(`_cPCG_pcgsolve`, A, b, preconditioner, tol, maxIter)
}

