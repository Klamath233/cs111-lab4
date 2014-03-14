#include "access.h"

// Tentative data structures:
// A dictionary data structure. Key = file name, Value = a pointer to a struct of both a white list and a black list of ip addresses.

// RULES:
// 1. if an IP address is explicitly declared in the black list (e.g. 192.168.1.103), block.
// 2. if an IP address is implicitly included (e.g. 192.168.1.*) in the black list,
//     2.1 if the IP address is not declared in the white list, block.
//     2.2 if the IP address is declared in the white list, grant.
// 3. if an IP address is not declared or included in the black list, grant.

// glib hash table and list may help.


void access_control_setup(const char *ac_filename) {

	// Read in the access control file.

	// Initialize the data structure.

	// Parse the file. Translate the content of the file into data structures.

}

int access_control_verify(const char *ip_addr, const char *filename) {

	// Use filename as key to search the dictionary.
	// If file is in the dictionary, then search the lists for that key.
		// If ip_addr is indicated in the list as blocked (according to apache semantics), return 0 (access denied).
	// else return 1 (access allowed).

}

void access_control_grant_permission(const char *ip_addr, const char *filename) {

	// Use filename as key to search the dictionary.
	// If file is in the dictionary, then search the lists for that key.
		// If ip_addr is indicated in the list as blocked, modify the struct to grant permission to that ip address.
			// If nothing left in the black list, detele the entry from the dictionary.
		// Else simply return (nothing changed).
	// Else simply return. 
}

void access_control_revoke_permission(const char *ip_addr, const char *filename) {

	// Use filename as key to search the dictionary.
	// If file is in the dictionary, then search the lists for that key.
		// If ip_addr is indicated in the list as blocked, do nothing.
		// Else change the data structure to revoke the permission.
	// Else create a new entry in the dictionary, and add ip_addr to the black list. 

}

void access_control_dispose(const char *ac_filename) {

	// Write the data structures back to the file.

	// Free the data structure.
}

