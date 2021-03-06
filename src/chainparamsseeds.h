#ifndef BITCOIN_CHAINPARAMSSEEDS_H
#define BITCOIN_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the bitcoin network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x88,0x21,0x6f,0x39}, 5749},
    {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xba,0x2b,0xf1,0x45,0x09,0xb3,0x78,0x8e,0x1e,0xc9}, 5749}
};


static SeedSpec6 pnSeed6_test[] = {
};
#endif // BITCOIN_CHAINPARAMSSEEDS_H
