args = argv()

if numel(args) == 0
    a = 0.1;
    b = 0.2;

else
    if numel(args) == 2
        a = str2double(args{1});
        b = str2double(args{2});

else 
    exit(1);
end

printf("SUMA DE 0.1 + 0.2 EN MATLAB. RESULTADO: %.17g\n", a+b)
