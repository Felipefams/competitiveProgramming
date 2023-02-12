main = do
  putStrLn "Digite o seu nome:"
  input <- getLine
  putStrLn $ "Olá "++ input ++ " é um prazer te conhecer"
  
