// addr: 0x008dbaf0
// name: Stream_ReadU32Pair
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadU32Pair(void * outPair, void * reader) */

void __thiscall Stream_ReadU32Pair(void *this,void *outPair,void *reader)

{
                    /* Reads two consecutive 32-bit values into an output pair with standard reader
                       overflow handling. It has the same shape as 008cdfb0. */
  if (*(undefined4 **)((int)outPair + 0xc) < *(undefined4 **)((int)outPair + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)outPair + 0x10) = 1;
    *(undefined4 *)((int)outPair + 8) = *(undefined4 *)((int)outPair + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)outPair + 8);
    *(int *)((int)outPair + 8) = *(int *)((int)outPair + 8) + 4;
  }
  if (*(undefined4 **)((int)outPair + 0xc) < *(undefined4 **)((int)outPair + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)outPair + 0x10) = 1;
    *(undefined4 *)((int)outPair + 8) = *(undefined4 *)((int)outPair + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)outPair + 8);
  *(int *)((int)outPair + 8) = *(int *)((int)outPair + 8) + 4;
  return;
}

