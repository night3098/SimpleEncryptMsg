void encrypt (char *message) {
	while (*message) {
		*message = *message+3;
		*message++;
	}
}

void decrypt (char *message) {
	while (*message) {
		*message = *message-3;
		*message++;
	}
}
