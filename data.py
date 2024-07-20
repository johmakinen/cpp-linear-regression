from sklearn.datasets import make_regression
import pandas as pd
# Get some random regression data and save it into a csv file
def get_data():
    X, y = make_regression(n_samples=100, n_features=2, noise=0.1)
    df = pd.DataFrame(X, columns=['feature1', 'feature2'])
    df['target'] = y
    df.to_csv('data.csv', index=False)

if __name__ == '__main__':
    get_data()
