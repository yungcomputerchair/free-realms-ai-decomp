// addr: 0x013c2210
// name: PacketBuffer_init
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PacketBuffer_init(void * buffer) */

void __fastcall PacketBuffer_init(void *buffer)

{
                    /* Initializes a five-dword buffer/stream state by zeroing all fields. Evidence
                       is the repeated use by serialize/deserialize/compress callers before packet
                       or property buffer operations. */
  *(undefined4 *)buffer = 0;
  *(undefined4 *)((int)buffer + 4) = 0;
  *(undefined4 *)((int)buffer + 8) = 0;
  *(undefined4 *)((int)buffer + 0xc) = 0;
  *(undefined4 *)((int)buffer + 0x10) = 0;
  return;
}

