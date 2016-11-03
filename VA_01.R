md = read.table("/Users/behdad/Downloads/dust-2014.dat", header = TRUE, sep = ";")
md2= md[!duplicated(md$MasterTime),]
summary(md)

md[duplicated(md$MasterTime),]

lengths(md[!duplicated(md$MasterTime),])
lengths(unique(md))

install.packages("zoo")
library(zoo)
require(xts)
test <- xts(md2$Small, order.by=as.POSIXct(md2$MasterTime))
test2 <- xts(md2$Large, order.by=as.POSIXct(md2$MasterTime))

basket <- cbind(test, test2)
is.xts(basket)
summary(basket)


zoo = as.zoo(basket)
?as.zoo
tsRainbow <- rainbow(ncol(zoo))
# Plot the overlayed series
plot(x = zoo, ylab = "ABC", main = "Value",
     col = tsRainbow, screens = 1)


legend(x = "topleft", legend = c("Small", "Large"), 
       lty = 1,col = tsRainbow)

summary(zoo)

plot.zoo(c(test2$Small, test2$Large))
?plot.zoo

hist(test$, freq = FALSE)

plot(test$V1, type = "b", main = "pressure data")


boxplot(md$Small)

?count

counter = md[md$Large < 0,]

summary(counter)
