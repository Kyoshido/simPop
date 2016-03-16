\name{ipu2}
\alias{ipu2}
\title{Iterative Proportional Updating}

\description{
Adjust sampling weights to given totals based on household-level and/or individual level constraints.
}

\usage{
ipu2(dat, hid=NULL, w=NULL, conP, conH, epsP=1e-6, epsH=1e-2, verbose=FALSE, bound=4, maxIter=200, meanHH=TRUE)
}

\arguments{
  \item{dat}{a \code{data.table} containing household ids (optionally), base weights (optionally), household and/or personal level variables (numerical or categorical) that should be fitted.}
  \item{hid}{character vector specifying the variable containing household-ids within \code{dat} or NULL if such a variable does not exist.}
    \item{w}{character vector specifying the variable containing the base weights within \code{dat} or NULL if such a variable does not exist. In the latter case, every observation in \code{dat} is assigned a starting weight of 1.}
  \item{conP}{list or (partly) named list defining the constraints on person level. 
The list elements are contingency tables in array representation with dimnames corresponding to the names of the relevant calibration variables in \code{dat}. If a numerical variable is to be calibrated, the respective list element has to be named with the name of that numerical variable. Otherwise the list element shoud NOT be named.}
  \item{conH}{list or (partly) named list defining the constraints on household level. 
The list elements are contingency tables in array representation with dimnames corresponding to the names of the relevant calibration variables in \code{dat}. If a numerical variable is to be calibrated, the respective list element has to be named with the name of that numerical variable. Otherwise the list element shoud NOT be named.}
  \item{epsP}{numeric value or list (of numeric values and/or arrays) specifying the convergence limit(s) for \code{conP}. The list can contain numeric values and/or arrays which must appear in the same order as the corresponding constraints in \code{conP}. Also, an array must have the same dimensions and dimnames as the corresponding constraint in \code{conP}.}
  \item{epsH}{numeric value or list (of numeric values and/or arrays) specifying the convergence limit(s) for \code{conH}. The list can contain numeric values and/or arrays which must appear in the same order as the corresponding constraints in \code{conH}. Also, an array must have the same dimensions and dimnames as the corresponding constraint in \code{conH}.}
  \item{verbose}{if TRUE, some progress information will be printed.}
  \item{bound}{numeric value specifying the multiplier for determining the weight trimming boundary if the change of the base weights should be restricted, i.e. if the weights should stay between 1/\code{bound}*\code{w} and \code{bound}*\code{w}.}
  \item{maxIter}{numeric value specifying the maximum number of iterations that should be performed.}
  \item{meanHH}{if TRUE, every person in a household is assigned the mean of the person weights corresponding to the household.}
}

\value{
The function will return the input data \code{dat} with the calibrated weights \code{calibWeight} as an additional column.
}

\seealso{
\code{\link{ipu}}
}
\examples{

nrowInp <- 1000
inp <- as.data.table(matrix(0, nrow=nrowInp, ncol=6))
colnames(inp) <- c("pid","hhid","income","agegroup","gender","region")
inp[,pid:=.I]
inp$hhid <- round(seq(from=1, to=round(nrowInp/3), length.out=nrowInp))
set.seed(223344)
# 4 age groups
inp$agegroup <- sample(c(1:4),nrowInp,replace=TRUE, prob=c(0.15,0.3,0.35,0.2))
# 2 gender groups
inp$gender <- sample(c(1,2),nrowInp,replace=TRUE)
# 3 regions
inp$region <- sample(c(1:3),nrowInp,replace=TRUE, prob=c(0.2,0.5,0.3))
inp[,region:=region[1], by=hhid]
# income
inp$income <- round(rpareto(nrowInp, 1000, 3))
inp[agegroup==1,income:=0]    
# hhincome
inp[,hhinc:=sum(income),by=list(hhid)]

# constraints on person level
conP1 <- array(c(239741,601386,360193,480699,1199962,718892,560069,1399490,840041,320257,799359,479911),c(3,4))
dimnames(conP1) <- list(region=c("1", "2", "3"),agegroup=c("1", "2", "3", "4"))

conP2 <- array(c(800171,1999596,1198754,800595,2000601,1200283),c(3,2))
dimnames(conP2) <- list(region=c("1", "2", "3"),gender=c("1", "2"))

conP3 <- array(c(1020162500,2549062073,1528896458,1021294346,2551562798,1530314970),c(3,2))
dimnames(conP3) <- list(region=c("1", "2", "3"),gender=c("1", "2"))

# constraints on household level
conH1 <- array(c(2041271296,5104297066,3055724783),3)
dimnames(conH1) <- list(region=c("1", "2", "3"))

conH2 <- array(c(533267,1333931,799469),3)
dimnames(conH2) <- list(region=c("1", "2", "3"))

# array of convergence limits for conP1 
epsP1 <- array(rep(c(0.9,rep(0.7,2)),4),c(3,4))
dimnames(epsP1) <- dimnames(conP1)

# example for base weights assuming a simple random sample of households stratified per region
inp[,xx:=1]
inp[, regSamp:=sum(xx),by=region]
reg <- cbind(region=1:3,regPop=addmargins(conP2,2)[1:3,"Sum"])
inp <- merge(inp,reg,by="region",sort=FALSE)
inp[,baseWeight:=regPop/regSamp]
inp[,xx:=NULL]

res1 <- ipu2(dat=inp, hid="hhid", w=NULL, conP=list(conP1, conP2, income=conP3), conH=list(hhinc=conH1, conH2), 
     epsP=0.09, epsH=0.05, verbose=TRUE, bound=NULL, maxIter=200, meanHH=TRUE)

# with array epsP1
res2 <- ipu2(dat=inp, hid="hhid", w=NULL, conP=list(conP1, conP2, income=conP3), conH=list(hhinc=conH1, conH2), 
            epsP=list(epsP1,0.07,0.07), epsH=0.05, verbose=TRUE, bound=NULL, maxIter=200, meanHH=TRUE)

# with base weights and bound
res3 <- ipu2(dat=inp, hid="hhid", w="baseWeight", conP=list(conP1, conP2), conH=list(hhinc=conH1, conH2), 
             epsP=list(epsP1,0.05), epsH=1e-2, verbose=TRUE, bound=4, maxIter=200, meanHH=TRUE)



}

