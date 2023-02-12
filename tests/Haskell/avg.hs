avg :: [Double] -> Double
avg xs = sum xs / fromIntegral (length xs)


main = do
  n <- read <$> getLine
  m <- read <$> getLine
  putStrLn "Media do intervalo: "
  print (avg [n..m])


