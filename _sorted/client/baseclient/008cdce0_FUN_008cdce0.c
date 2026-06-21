// addr: 0x008cdce0
// name: FUN_008cdce0
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void stream_readTwoDwords(uint * outPair, void * reader) */

void __thiscall stream_readTwoDwords(void *this,uint *outPair,void *reader)

{
                    /* Reads two 32-bit words from a bounded buffer, setting the reader error flag
                       and clamping to end when insufficient bytes remain. */
  if ((undefined4 *)outPair[3] < (undefined4 *)outPair[2] + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)(outPair + 4) = 1;
    outPair[2] = outPair[3];
  }
  else {
    *(undefined4 *)this = *(undefined4 *)outPair[2];
    outPair[2] = outPair[2] + 4;
  }
  if ((undefined4 *)outPair[3] < (undefined4 *)outPair[2] + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)(outPair + 4) = 1;
    outPair[2] = outPair[3];
    return;
  }
  *(undefined4 *)((int)this + 4) = *(undefined4 *)outPair[2];
  outPair[2] = outPair[2] + 4;
  return;
}

