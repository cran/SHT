% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utility_useknd.R
\name{useknd}
\alias{useknd}
\title{Apply k-sample tests for two multivariate samples}
\usage{
useknd(X, Y, test.name, ...)
}
\arguments{
\item{X}{an \eqn{(n_x \times p)} data matrix of 1st sample.}

\item{Y}{an \eqn{(n_y \times p)} data matrix of 2nd sample.}

\item{test.name}{character string for the name of k-sample test to be used.}

\item{...}{extra arguments passed onto the function \code{test.name}.}
}
\value{
a (list) object of \code{S3} class \code{htest} containing: \describe{
\item{statistic}{a test statistic.}
\item{p.value}{\eqn{p}-value under \eqn{H_0}.}
\item{alternative}{alternative hypothesis.}
\item{method}{name of the test.}
\item{data.name}{name(s) of provided sample data.}
}
}
\description{
Any \eqn{k}-sample method implies that it can be used for 
a special case of \eqn{k=2}. \code{useknd} lets any \eqn{k}-sample tests 
provided in this package be used with two multivariate samples \eqn{X} and \eqn{Y}.
}
\examples{
\donttest{
## use 'covk.2007Schott' for two-sample covariance testing
## empirical Type 1 error 
niter   = 1000
counter = rep(0,niter)  # record p-values
for (i in 1:niter){
  X = matrix(rnorm(50*5), ncol=10)
  Y = matrix(rnorm(50*5), ncol=10)
  
  counter[i] = ifelse(useknd(X,Y,"covk.2007Schott")$p.value < 0.05, 1, 0)
}

## print the result
cat(paste("\n* Example for 'covk.2007Schott'\n","*\n",
"* number of rejections   : ", sum(counter),"\n",
"* total number of trials : ", niter,"\n",
"* empirical Type 1 error : ",round(sum(counter/niter),5),"\n",sep=""))
}

}
\concept{utility}
