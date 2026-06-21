// addr: 0x013c23e0
// name: PacketBuffer_hasRemaining
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PacketBuffer_hasRemaining(void * buffer) */

bool __fastcall PacketBuffer_hasRemaining(void *buffer)

{
                    /* Checks whether the cursor/read offset at +0xc is less than the size/limit at
                       +8. Evidence is the direct comparison *(this+0xc) < *(this+8). */
  return *(int *)((int)buffer + 0xc) < *(int *)((int)buffer + 8);
}

