# tests for sprague
message("sprague")
## test sprague index:
library(simPop)
# sprague test",{
x <- data.frame(age=as.factor(c(
  "0-4",
  "5-9","10-14","15-19", "20-24",
  "25-29","30-34","35-39","40-44","45-49",
  "50-54","55-59","60-64","65-69","77-74","75-79","80+"
    )),
  pop=c(1971990, 2095820,2157190, 2094110,2116580,   2003840, 1785690,
        1502990, 1214170, 796934,  627551,  530305, 488014,
        364498, 259029,158047,  125941)
)

# debugonce(sprague)
s  <- sprague(x[,2])

expect_true(all.equal(sum(s), sum(x[,2])),info="not identical")

