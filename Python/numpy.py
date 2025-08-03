import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import linregress, pearsonr

advertising = np.array([10, 20, 30, 40, 50, 60, 70])
sales = np.array([25, 45, 50, 65, 80, 95, 100])

# Linear regression
slope, intercept, r_value, p_value, std_err = linregress(advertising, sales)
regression_line = slope * advertising + intercept

# Plot scatter
plt.figure(figsize=(10, 6))
plt.scatter(advertising, sales, color='blue', label='Data Points')
plt.plot(advertising, regression_line, color='red', label='Best-Fit Line')

# Labeling
plt.xlabel('Advertising Budget (in thousands)')
plt.ylabel('Sales (in thousands)')
plt.title('Advertising Budget vs Sales')
plt.legend()
plt.grid(True)

# Display correlation coefficient
r, _ = pearsonr(advertising, sales)
plt.text(min(advertising), max(sales) - 5, f"Correlation Coefficient (r) = {r:.2f}", fontsize=12)

plt.tight_layout()
plt.show()
