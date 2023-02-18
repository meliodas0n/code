#!/usr/bin/env python3

import numpy as np
import pandas as pd

from scipy.sparse import csr_matrix
from scipy.sparse.linalg import svds

def normalize(pred_ratings):
  return (pred_ratings - pred_ratings.min()) / (pred_ratings.max() - pred_ratings.min())

def generate_prediction_df(mat, pt_df, n_factors):
  if not 1 <= n_factors < min(mat.shape):
    raise ValueError('Must be 1 <= n_factors < min(mat.shape)')
  
  u, s, v = svds(mat, k = n_factors)
  s = np.diag(s)
  pred_ratings = np.dot(np.dot(u, s), v)
  pred_ratings = normalize(pred_ratings)
  
  pred_df = pd.DataFrame(
    pred_ratings,
    columns = pt_df.columns,
    index = list(pt_df.index)
  ).transpose()
  return pred_df

def recommend_items(pred_df, usr_id, n_recs):
  usr_pred = pred_df[usr_id].sort_values(ascending = False).reset_index().rename(columns = {usr_id : 'sim'})
  rec_df = usr_pred.sort_values(by = 'sim', ascending = False).head(n_recs)
  return rec_df

if __name__ == "__main__":
  PATH = 'data.csv'
  df = pd.read_csv(PATH)
  print(df.shape)
  
  pt_df = df.pivot_table(
    columns = 'book_id',
    index = 'reader_id',
    values = 'book_rating'
  ).fillna(0)
  
  mat = pt_df.values
  mat = csr_matrix(mat)
  
  pred_df = generate_prediction_df(mat, pt_df, 10)
  
  print(recommend_items(pred_df, 5, 5))