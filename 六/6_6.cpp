#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 5
#define MAX_LENGTH 100
int main() {
	char strings[MAX_STRINGS][MAX_LENGTH];
	for (int i = 0; i < MAX_STRINGS; i++) {
		scanf("%s", strings[i]);
	}
	char* longeststrings = strings[0];
	for (int i = 1; i < MAX_STRINGS; i++) {
		if (strlen(strings[i]) > strlen(longeststrings)) {
			longeststrings = strings[i];
		}
	}
	printf("%s", longeststrings);
	return 0;
}
