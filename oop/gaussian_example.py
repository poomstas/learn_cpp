# %%
from math import pi, exp, sqrt

# %%
class Gaussian():
    def __init__(self, mean, variance):
        self.mu = mean
        self.sigma2 = variance

    def evaluate(self, x):
        ''' Evaluate the PDF '''
        coefficient = 1.0 / sqrt(2.0 * pi *self.sigma2)
        exponential = exp(-0.5 * (x-self.mu) ** 2 / self.sigma2)
        return coefficient * exponential

    def multiply(self, other):
        ''' Multiply two independent Gaussians together '''
        denominator = self.sigma2 + other.sigma2                        # calculate new mean
        numerator = self.mu * other.sigma2 + other.mu * self.sigma2
        new_mu = numerator / denominator

        new_var = 1.0 / ( (1.0 / self.sigma2) + (1.0 / other.sigma2) )  # calcuate new variance

        return Gaussian(new_mu, new_var)                                # generate new gaussian

    def add(self, other):
        ''' Add two independent Gaussian distributions together '''
        new_mu = self.mu + other.mu
        new_sigma2 = self.sigma2 + other.sigma2

        return Gaussian(new_mu, new_sigma2)
