example :: IO Integer
example =
    putStrLn "Qual o seu nome?" >> (
        getLine >>= (\name ->
            putStrLn ("Oi, " ++ name ++ ".") >> (
                putStrLn "Que número devo somar com ele mesmo?" >> (
                    getLine >>= (\line ->
                        let n = (read line :: Integer) in
                            return (n + n))))))




