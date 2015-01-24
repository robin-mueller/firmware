#pragma once

#include "global.h"


#define MEM_ALIGNMENT 4
#define NO_SYS 1
#define LWIP_DHCP 1
#define LWIP_SOCKET 0
#define LWIP_NETCONN 0
#define CHECKSUM_BY_HARDWARE
#define CHECKSUM_GEN_IP 0
#define CHECKSUM_GEN_UDP 0
#define CHECKSUM_GEN_TCP 0
#define CHECKSUM_GEN_ICMP 0
#define CHECKSUM_CHECK_IP 0
#define CHECKSUM_CHECK_UDP 0
#define CHECKSUM_CHECK_TCP 0
#define CHECKSUM_CHECK_ICMP 0
#define MEM_SIZE 2048
#define MEMP_NUM_PBUF 16
#define PBUF_POOL_SIZE 12
#define PBUF_POOL_BUFSIZE 256
#define LWIP_NETIF_HOSTNAME 1