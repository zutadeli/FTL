/* Pi-hole: A black hole for Internet advertisements
*  (c) 2017 Pi-hole, LLC (https://pi-hole.net)
*  Network-wide ad blocking via your own hardware.
*
*  FTL Engine
*  dnsmasq server interfacing routines
*
*  This file is copyright under the latest version of the EUPL.
*  Please see LICENSE file for your rights under this license. */
int socketfd, telnetfd4, telnetfd6;

void FTL_read_hosts(char * filename, int addr_count);
void FTL_new_query(unsigned int flags, char *name, struct all_addr *addr, char *types, int id);
void FTL_forwarded(unsigned int flags, char *name, struct all_addr *addr, int id);
void FTL_reply(unsigned short flags, char *name, struct all_addr *addr, unsigned long ttl, int id);
void FTL_cache(unsigned int flags, char *name, struct all_addr *addr, char * arg, unsigned long ttl, int id);
void FTL_dnssec(int status, int id);
void FTL_dnsmasq_reload(void);
void FTL_fork_and_bind_sockets(void);