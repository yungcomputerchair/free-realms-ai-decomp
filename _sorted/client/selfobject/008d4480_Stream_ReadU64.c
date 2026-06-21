// addr: 0x008d4480
// name: Stream_ReadU64
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU64(void * reader, ulonglong * outValue) */

void __cdecl Stream_ReadU64(void *reader,ulonglong *outValue)

{
  undefined4 *puVar1;
  
                    /* Reads an 8-byte value from the stream into two dwords, zeroing and setting
                       overflow on underrun. Called by SelfObject_ParseFromBlob and
                       PlayerUpdatePacketAddNpc_Deserialize. */
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)outValue = 0;
    *(undefined4 *)((int)outValue + 4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)outValue = *puVar1;
  *(undefined4 *)((int)outValue + 4) = puVar1[1];
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  return;
}

