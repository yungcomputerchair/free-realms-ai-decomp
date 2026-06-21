// addr: 0x013c2260
// name: PacketBuffer_identity
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PacketBuffer_identity(void * buffer) */

void * __fastcall PacketBuffer_identity(void *buffer)

{
                    /* Returns its argument unchanged. It appears as a trivial helper/thunk used in
                       packet-buffer call chains, with no additional side effects. */
  return buffer;
}

