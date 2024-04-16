BEGIN
    INPUT a, b, c
    COMPUTE delta = b^2 - 4ac
    IF delta > 0 THEN
        COMPUTE x1 = (-b + sqrt(delta)) / (2a)
        COMPUTE x2 = (-b - sqrt(delta)) / (2a)
        OUTPUT "Phýõng tr?nh có 2 nghi?m phân bi?t: x1 =", x1, "và x2 =", x2
    ELSE IF delta == 0 THEN
        COMPUTE x = -b / (2a)
        OUTPUT "Phýõng tr?nh có nghi?m kép: x =", x
    ELSE
        OUTPUT "Phýõng tr?nh vô nghi?m"
    END IF
END

