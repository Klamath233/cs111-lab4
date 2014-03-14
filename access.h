// COM SCI 111 Design Project
// File access control module interface.

// Read the access file and set up data structures.
// Parameter: the file name of the access control file.
void access_control_setup(const char *ac_filename);

// Determine if an IP address can access a file
// Parameter: the ip address and the file name which the peer wants to access, both in C string.
// Return: 1 if OK, 0 if not OK.
int access_control_verify(const char *ip_addr, const char *filename);

// Allow an ip address to access a file.
// Parameter: the ip address and the file name which the peer wants to access, both in C string.
void access_control_grant_permission(const char *ip_addr, const char *filename);

// Revoke the permission of an ip address to access a file.
// Parameter: the ip address and the file name which the peer wants to access, both in C string.
void access_control_revoke_permission(const char *ip_addr, const char *filename);

// Write back the changes made to the access control file and release in-memory data structures.
void access_control_dispose(const char *ac_filename);
