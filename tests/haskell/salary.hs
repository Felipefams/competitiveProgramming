annualSalaryCalc :: (RealFloat a) => a -> a -> String
annualSalaryCalc hourlyRate weekHoursOfWork
    | hourlyRate * (weekHoursOfWork * 52) <= 40000 = "Salario Baixo"
    | hourlyRate * (weekHoursOfWork * 52) <= 120000 = "Salario Medio"
    | hourlyRate * (weekHoursOfWork * 52) <= 200000 = "Salario Alto"
    | otherwise = "Praticamente milionario"



annualSalaryCalc' :: (RealFloat a) => a -> a -> String
annualSalaryCalc' hourlyRate weekHoursOfWork
    | annualSalary <= smallSalary = "Salario Baixo"
    | annualSalary <= mediumSalary = "Salario Medio"
    | annualSalary <= highSalary = "Salario Alto"
    | otherwise = "Praticamente milionario"
    where
        annualSalary = hourlyRate * (weekHoursOfWork * 52)
        (smallSalary, mediumSalary, highSalary) = (40000, 120000, 200000)
