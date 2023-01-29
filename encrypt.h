void encrypt (char *message) {
	while (*message) {
		*message = *message+6;
		*message++;
	}
}

void decrypt (char *message) {
	while (*message) {
		*message = *message-6;
		*message++;
	}
}
