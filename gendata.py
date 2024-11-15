"""
This app uses Python, numpy, pandas, matplotlib to generate a set of data points and plot them on a graph.
"""

# Importing the required libraries for numpy, pandas and matplotlib
import numpy as np              # This library is used for numerical computing
import pandas as pd             # This library is used for data manipulation and analysis
import matplotlib.pyplot as plt # This library is used for data visualization

"""
Create a function 'gendatapoints' that generates a set of 100 data points (x, f(x)) and returns them as a pandas data frame.
Arguments:
- 'x_range' is a tuple of two integers representing the rang0 e of x values to generate.
Returns:
- A pandas data frame with two columns, 'x' and 'y'.
Details:
- 'x' values are generated randomly between x_range[0] and x_range[1].
- 'y' values are generated as a non-linear function of x with excessive random noise: y = x ^ 1.5  + noise.
- The data frame is sorted by the 'x' values.
- The data frame has 100 rows.
Error Handling:
- Raise a ValueError if x_range is not a tuple of two integers.
- Raise a ValueError if x_range[0] is greater than x_range[1].
Exceptions:
- ValueError: 'x_range' is not a tuple of two integers.
- ValueError: 'x_range[0]' is greater than 'x_range[1]'.
Examples:
- gendata((0, 100)) generates a data frame with 'x' values between 0 and 100.
- gendata((-100, 100)) generates a data frame with 'x' values between -100 and 100.
"""

def gendatapoints(x_range):
    """
    Generate a DataFrame of random data points.

    This function generates 100 random x values within the specified range and computes corresponding y values as a non-linear function of x with added noise. The resulting data points are returned as a sorted pandas DataFrame.

    Parameters:
    x_range (tuple): A tuple of two integers specifying the range (inclusive) within which to generate the x values. The first integer must be less than or equal to the second integer.

    Returns:
    pandas.DataFrame: A DataFrame with two columns 'x' and 'y', where 'x' contains the generated x values and 'y' contains the corresponding y values.

    Raises:
    ValueError: If 'x_range' is not a tuple of two integers or if the first integer is greater than the second integer.
    """
    # Check if x_range is a tuple of two integers
    if not isinstance(x_range, tuple) or len(x_range) != 2 or not all(isinstance(i, int) for i in x_range):
        raise ValueError("'x_range' is not a tuple of two integers.")
    # Check if x_range[0] is less than x_range[1]
    if x_range[0] > x_range[1]:
        raise ValueError("'x_range[0]' is greater than 'x_range[1]'.")
    # Generate 100 random x values between x_range[0] and x_range[1]
    x = np.random.randint(x_range[0], x_range[1], 100)
    # Generate y values as a non-linear function of x with noise
    y = x ** 1.5 + np.random.normal(0, 100, 100)
    # Create a pandas data frame with 'x' and 'y' columns
    df = pd.DataFrame({'x': x, 'y': y})
    # Sort the data frame by 'x' values
    df = df.sort_values('x')
    return df


"""
Create a function 'plot_data' that plots the data points from the data frame.
Arguments:
- 'data' is a pandas data frame with two columns, 'x' and 'y'.
Returns:
- None
Details:
- The data points are plotted as a scatter plot.
- The plot has a title 'Data Points', x-axis label 'x', and y-axis label 'f(x)'.
"""

def plot_data(data):
    """
    Plots the given data points as a scatter plot.

    Parameters:
    data (dict): A dictionary containing the data points to plot. 
                 It should have two keys 'x' and 'y', where 'x' is a list of x-coordinates 
                 and 'y' is a list of corresponding y-coordinates.

    Returns:
    None
    """
    # Plot the data points as a scatter plot
    plt.scatter(data['x'], data['y'], label='Data Points')
    plt.legend()
    # Add title and labels to the plot
    plt.title('Data Points')
    plt.xlabel('x')
    plt.ylabel('f(x)')
    plt.show(block=True)
    plt.show()

"""
Create function 'main' that generates data points and plots them.
Arguments:
- None
Returns:
- None
"""

def main():
    # Generate data points with x values between -100 and 100
    data = gendatapoints((-100, 100))
    # Plot the data points
    plot_data(data)

# Call the main function
if __name__ == "__main__":
    main()