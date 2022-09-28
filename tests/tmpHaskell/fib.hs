fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib (n-1) + fib (n-2)


map       :: (a -> b) -> [a] -> [b]
filter    :: (a -> Bool) -> [a] -> [a]
takeWhile :: (a -> Bool) -> [a] -> [a]
dropWhile :: (a -> Bool) -> [a] -> [a]
iterate   :: (a -> a) -> a -> [a]
zipWith   :: (a -> b -> c) -> [a] -> [b] -> [c]
scanr     :: (a -> b -> b) -> b -> [a] -> [b]
scanl     :: (b -> a -> b) -> b -> [a] -> [b]



Prelude> map (++ "!") ["BIFF", "BANG", "POW"]  
["BIFF!","BANG!","POW!"] 

Prelude> map (map (^2)) [[1,2],[3,4,5,6],[7,8]]  
[[1,4],[9,16,25,36],[49,64]]  



Prelude> filter (>3) [1,5,3,2,1,6,4,3,2,1]  
[5,6,4]  
 
Prelude> filter even [1..10]  
[2,4,6,8,10] 



Prelude> zipWith (+) [4,2,5,6] [2,6,2,3]  
[6,8,7,9]  

Prelude> zipWith max [6,3,2,1] [7,3,1,5]  
[7,3,2,5] 


