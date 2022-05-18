void loop(void)
{
	char *line;
	char **args;
	int status;

	/* read command entered by the user */
	/* parse the entered command */
	/* execute the command */

	do {
		printf("%s", "Bryan@root > ");
		line = read();
		/* args is an array of strings */
		/* echo bryan is good */
		args = parse(line);
		status = execute(args);

		/* free allocated memory */
		free(line);
		free(args);
	} while (status)
}

int main(int argc, char** argv[])
{
	/* load config files */

	/* run an REPL loop */
	loop();

	/* perform any shutdown cleanup */

	return 0;
}