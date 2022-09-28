data Person = Person { name :: String
                     , age :: Int
                     } deriving Show

main = do
    print $ Person "Maria" 20
    print $ Person {name = "João", age = 30}
    print $ Person {name = "Luiz", age = 40}

    let s = Person {name = "Pedro", age = 50}
    putStrLn $ name s
    print $ age s

    let s' = s {age = 51}
    print $ age s'


