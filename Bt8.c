BEGIN
    INPUT a, b, c
    COMPUTE delta = b^2 - 4ac
    IF delta > 0 THEN
        COMPUTE x1 = (-b + sqrt(delta)) / (2a)
        COMPUTE x2 = (-b - sqrt(delta)) / (2a)
        OUTPUT "Ph��ng tr?nh c� 2 nghi?m ph�n bi?t: x1 =", x1, "v� x2 =", x2
    ELSE IF delta == 0 THEN
        COMPUTE x = -b / (2a)
        OUTPUT "Ph��ng tr?nh c� nghi?m k�p: x =", x
    ELSE
        OUTPUT "Ph��ng tr?nh v� nghi?m"
    END IF
END

