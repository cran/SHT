% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/norm_1996AJB.R
\name{norm.1996AJB}
\alias{norm.1996AJB}
\title{Adjusted Jarque-Bera Test of Univariate Normality by Urzua (1996)}
\usage{
norm.1996AJB(x, method = c("asymptotic", "MC"), nreps = 2000)
}
\arguments{
\item{x}{a length-\eqn{n} data vector.}

\item{method}{method to compute \eqn{p}-value. Using initials is possible, \code{"a"} for asymptotic for example.}

\item{nreps}{the number of Monte Carlo simulations to be run when \code{method="MC"}.}
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
Given an univariate sample \eqn{x}, it tests
\deqn{H_0 : x\textrm{ is from normal distribution} \quad vs\quad H_1 : \textrm{ not } H_0}
using a test procedure by Urzua (1996), which is a modification of Jarque-Bera test.
}
\examples{
## generate samples from uniform distribution
x = runif(28)

## test with both methods of attaining p-values
test1 = norm.1996AJB(x, method="a") # Asymptotics
test2 = norm.1996AJB(x, method="m") # Monte Carlo 

}
\references{
\insertRef{urzua_correct_1996}{SHT}
}
\concept{gof_normal}
