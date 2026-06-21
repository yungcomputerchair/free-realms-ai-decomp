// addr: 0x008e8460
// name: PacketRecord_deserializeTwoIntsAndString
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PacketRecord_deserializeTwoIntsAndString(void * this, int stream_) */

void __thiscall PacketRecord_deserializeTwoIntsAndString(void *this,int stream_)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* Deserializes two 32-bit fields followed by a length-prefixed Soe string from
                       a bounded packet buffer, marking the stream bad on overflow or negative
                       length. */
  if (*(undefined4 **)(stream_ + 0xc) < *(undefined4 **)(stream_ + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)(stream_ + 0x10) = 1;
    *(undefined4 *)(stream_ + 8) = *(undefined4 *)(stream_ + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)(stream_ + 8);
    *(int *)(stream_ + 8) = *(int *)(stream_ + 8) + 4;
  }
  if (*(undefined4 **)(stream_ + 0xc) < *(undefined4 **)(stream_ + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)(stream_ + 0x10) = 1;
    *(undefined4 *)(stream_ + 8) = *(undefined4 *)(stream_ + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)(stream_ + 8);
    *(int *)(stream_ + 8) = *(int *)(stream_ + 8) + 4;
  }
  piVar2 = *(int **)(stream_ + 0xc);
  piVar1 = *(int **)(stream_ + 8) + 1;
  if (piVar2 < piVar1) {
    iVar3 = 0;
    *(undefined1 *)(stream_ + 0x10) = 1;
    *(int **)(stream_ + 8) = piVar2;
  }
  else {
    iVar3 = **(int **)(stream_ + 8);
    *(int **)(stream_ + 8) = piVar1;
    if (iVar3 < 0) goto LAB_008e84f5;
  }
  if ((int *)(*(int *)(stream_ + 8) + iVar3) <= piVar2) {
    SoeString_Assign(*(int *)(stream_ + 8),iVar3);
    *(int *)(stream_ + 8) = *(int *)(stream_ + 8) + iVar3;
    return;
  }
LAB_008e84f5:
  *(undefined1 *)(stream_ + 0x10) = 1;
  *(int **)(stream_ + 8) = piVar2;
  return;
}

