# CHECKER FUNCTIONS
#   1. check_1d      : vector
#   2. check_nd      : matrix/array
#   3. check_number  : just a real number
#   4. check_alpha   : (0,1)
#   5. check_dlist1d : datalist 1d
#   6. check_dlistnd : datalist nd
#   7. check_simplex : probability simplex with correction


# 01. check_1d ------------------------------------------------------------
#' @keywords internal
#' @noRd
check_1d <- function(x){
  cond1 = ((is.vector(x)))
  cond2 = (all(!is.infinite(x)))
  cond3 = (all(!is.na(x)))
  cond4 = (all(!is.complex(x)))
  
  if (cond1&&cond2&&cond3&&cond4){
    return(TRUE)
  } else {
    stop()
  }
}

# 02. check_nd ------------------------------------------------------------
#' @keywords internal
#' @noRd
check_nd <- function(x){
  cond1 = ((is.array(x))||(is.matrix(x)))
  cond2 = (all(!is.infinite(x)))
  cond3 = (all(!is.na(x)))
  cond4 = (all(!is.complex(x)))
  cond5 = (length(dim(x))==2) # only 2-dimensional array is allowed
  cond6 = ((dim(x)[1]!=1)&&(dim(x)[2]!=1))
  
  
  if (cond1&&cond2&&cond3&&cond4&&cond5&&cond6){
    return(TRUE)
  } else {
    stop()
  }
}

# 03. check_number --------------------------------------------------------
#' @keywords internal
#' @noRd
check_number <- function(x){
  cond1 = (length(x)==1)
  cond2 = ((!is.na(x))&&(!is.infinite(x)))
  
  if (cond1&&cond2){
    return(TRUE)
  } else {
    stop()
  }
}

# 04. check_alpha ---------------------------------------------------------
#' @keywords internal
#' @noRd
check_alpha <- function(x){
  cond1 = (length(x)==1)
  cond2 = ((!is.na(x))&&(!is.infinite(x)))
  cond3 = ((x<=1)&&(0<=x))
  
  if (cond1&&cond2&&cond3){
    return(TRUE)
  } else {
    stop()
  }
}


# 05. check_dlist1d -------------------------------------------------------
#' @keywords internal
#' @noRd
check_dlist1d_single <- function(x){
  cond1 = ((is.vector(x)))
  cond2 = (all(!is.infinite(x)))
  cond3 = (all(!is.na(x)))
  cond4 = (all(!is.complex(x)))
  cond5 = (length(x)>=2)
  
  if (cond1&&cond2&&cond3&&cond4&&cond5){
    return(TRUE)
  } else {
    return(FALSE)
  }
}
#' @keywords internal
#' @noRd
check_dlist1d <- function(dlist){
  cond1 = (is.list(dlist))
  cond2 = (length(dlist)>=2)
  cond3 = (all(unlist(lapply(dlist,check_dlist1d_single))==TRUE))
  if (cond1&&cond2&&cond3){
    return(TRUE)
  } else {
    stop()
  }
}


# 06. check_dlistnd -------------------------------------------------------
check_dlistnd_single <- function(x){
  cond1 = ((is.matrix(x)))
  cond2 = (all(!is.infinite(x)))
  cond3 = (all(!is.na(x)))
  cond4 = (all(!is.complex(x)))
  cond5 = (length(x)>=2)
  
  if (cond1&&cond2&&cond3&&cond4&&cond5){
    return(TRUE)
  } else {
    return(FALSE)
  }
}
#' @keywords internal
#' @noRd
check_dlistnd <- function(dlist){
  cond1 = (is.list(dlist))
  cond2 = (length(dlist)>=2)
  cond3 = (all(unlist(lapply(dlist,check_dlistnd_single))==TRUE))
  cond4 = (length(unique(unlist(lapply(dlist, ncol))))==1)
  if (cond1&&cond2&&cond3&&cond4){
    return(TRUE)
  } else {
    stop()
  }
}


# 07. check_simplex -------------------------------------------------------
#' @keywords internal
#' @noRd
check_simplex <- function(X, fname){
  if (!is.matrix(X)){
    stop(paste("* ",fname," : an input 'X' is not a matrix."))
  }
  if (any(X < 0)){
    stop(paste0("* ",fname," : an input 'X' contains negative entries."))
  }
  if (any(is.infinite(X))||any(is.na(X))){
    stop(paste0("* ",fname," : an input 'X' contains NA or Inf values."))
  }
  
  n = base::nrow(X)
  p = base::ncol(X)
  
  output = array(0,c(n,p))
  for (i in 1:n){
    tgt = abs(as.vector(X[i,]))
    if (all(tgt>0)){
      output[i,] = tgt/base::sum(tgt)
    } else {
      tgt[tgt<.Machine$double.eps] = 1e-10
      output[i,] = tgt/base::sum(tgt)
    }
  }
  return(output)
}
