clean:
	-find . -type f -name '*.o' -delete
	-rm cliente/cliente
	-rm servidor/servidor
	-rm servidorDisplay/servidor