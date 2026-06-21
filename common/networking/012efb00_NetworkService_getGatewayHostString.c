// addr: 0x012efb00
// name: NetworkService_getGatewayHostString
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * NetworkService_getGatewayHostString(void * this) */

char * __fastcall NetworkService_getGatewayHostString(void *this)

{
                    /* Returns the string object/member at offset 0x20, the second NetworkService
                       endpoint host string. Evidence: paired with offset-4 accessor and
                       NetworkService constructor initializes two host strings from default/gateway
                       globals. */
  return (char *)((int)this + 0x20);
}

