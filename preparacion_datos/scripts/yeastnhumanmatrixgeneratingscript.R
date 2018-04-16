setwd('/home/semibah/Dropbox/CICESE/Q2/RdP/ProyectoFinal/Datos')
#list files in wd
list.files(getwd())
yeast <- read.table('yeast.matrix')
yeast.genes <-read.table('yeast.genes')
yeastbygene <-data.frame(yeast.genes,yeast)
#Count "-1" which indicates a missing value, according to Tavazoie, et al.
yeast_int_counts <- as.data.frame(table(unlist(yeast)))
#Return missing value row
missing_yeast_counts <- yeast_int_counts[which(yeast_int_counts$Var1==-1),]
yeastbygene[yeastbygene==-1] <- sample(seq(0,800),
                                       size=missing_yeast_counts[,2],
                                       replace=T)
#write to CSV
#write.csv(yeastbygene, file= "Yeast.csv")
#write to .dat
paltonenyeast <- yeastbygene[,-1]
write.table(paltonenyeast, file="yeast.dat", sep=" ", col.names = F, row.names = F)

###HUMAN DATA
human <-read.table('lympedit.txt')
human_int_counts <- as.data.frame(table(unlist(human)))
missing_human_counts <- human_int_counts[which(human_int_counts$Var1 == 999),]
human[human==999] <- sample(seq(-800,800),
                           size=missing_human_counts[,2],
                           replace=T)
human.genes <- read.table('chipnames.txt',sep='\t',quote="")
humanbygene <- data.frame(human.genes[,1],human)
# write to CSV
#write.csv(humanbygene, file= "Human.csv")
paltonenhuman <- humanbygene[,-1]
write.table(paltonenhuman, file="human.dat", sep=" ", col.names = F, row.names = F)

