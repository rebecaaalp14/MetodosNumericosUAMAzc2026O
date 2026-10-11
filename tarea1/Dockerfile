# Entorno del curso · Métodos Numéricos en Ingeniería (1151039) · 26-O
# UAM Azcapotzalco · CBI
#
# Construir y prender:  docker compose up -d --build
# Entrar a trabajar:    docker compose exec metodos bash

# Tomé el código que nos dio para el dockerfile al principio del curso para poder crear el contenedor para la tarea 1

FROM debian:bookworm-slim

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential gdb \
        octave gnuplot-nox \
        python3 python3-numpy python3-scipy python3-matplotlib python3-sympy \
        git nano \
    && rm -rf /var/lib/apt/lists/*

RUN mkdir -p /usr/share/octave/site/m/startup \
    && echo 'history_save(false);' > /usr/share/octave/site/m/startup/octaverc \
    && ln -sf /usr/bin/octave-cli /usr/local/bin/octave

ENV LANG=C.UTF-8 \
    TZ=America/Mexico_City \
    MPLBACKEND=Agg

WORKDIR /tarea1
CMD ["bash"]