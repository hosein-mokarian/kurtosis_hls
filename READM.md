# Kurtosis

#### Historical definition

It is defined as "peakedness" of a distribution. What does actually it mean?

Consider we have nice distribution. It is bell curved shape. It has two main parameters mean an standard deviation. Mean value is where the peak value is located. Standard deviation defines the spread of a distribution. 

shoulder areas: 

we can have two distribution with same mean and standard deviation values, but they look a little bit different, the higher peak value and thinner bell shape. Actually, we get some of the shoulder area and add it to the central region. However, the frequencies of the tail aeras increases (the black line is on the top of the white one). They look different in shape. In fact, the black curved is more peaked and has fatter tails than the white curve. So the all points of kurtosis is to find a way to differentiate between those distributions.  

#### kurtiosis calculation

This is based on moment based calculation. First moment is mean. Second moment is variance. Third moment is skew. Finally, forth moment is Kurtosis. 

#### Describing kurtosis

A normal distribution has a kurtosis of 3 and is called mesokurtic.

Distributions with kurtosis > 3 are called leptokurtic.

Distributions with kurtosis < 3 are called platykurtic. They are like uniform distributions.

kurtosis can get values from 1 to infinity. Kurtosis ranges from 1 to infinity.

The lowest possible value is 1. 

Sometimes, we define a new parameter as Excess kurtosis. It equals to kurtosis minus 3.

Excess Kurtosis = kurtosis - 3

The reason why we define a new parameter is to putting normal distribution at zero and we can have negative and positive values respectively for leptokurtic and platykurtic.

In some texts, Excess Kurtosis are referenced as kurtosis. You should really pay attention to it.

#### Kurtosis Implementation

Now we are going to implement Kurtosis on a FPGA. It will be done by Vivado HLS.
