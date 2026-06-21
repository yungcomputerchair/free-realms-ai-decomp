// addr: 0x008ce2f0
// name: Stream_ReadThreeU32AndTwoU64
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadThreeU32AndTwoU64(void * outRecord, void * reader) */

void __thiscall Stream_ReadThreeU32AndTwoU64(void *this,void *outRecord,void *reader)

{
  undefined4 *puVar1;
  
                    /* Deserializes a compact record consisting of three 32-bit fields followed by
                       two 64-bit fields, with stream overflow checks before each read. Record
                       semantics are not evident from this context. */
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  }
  puVar1 = *(undefined4 **)((int)outRecord + 8);
  if (*(undefined4 **)((int)outRecord + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *puVar1;
    *(undefined4 *)((int)this + 0x14) = puVar1[1];
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 8;
  }
  puVar1 = *(undefined4 **)((int)outRecord + 8);
  if (*(undefined4 **)((int)outRecord + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x18) = *puVar1;
  *(undefined4 *)((int)this + 0x1c) = puVar1[1];
  *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 8;
  return;
}

