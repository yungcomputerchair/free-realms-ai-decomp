// addr: 0x00ca5b10
// name: Stream_ReadFiveVec4AndScalars
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadFiveVec4AndScalars(void * outRecord, void * reader) */

void __thiscall Stream_ReadFiveVec4AndScalars(void *this,void *outRecord,void *reader)

{
                    /* Reads five Vec4 values followed by four scalar dwords/floats, setting the NaN
                       flag for float-like scalars. Exact record class is unknown. */
  Stream_ReadVec4(outRecord,this);
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x10));
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x20));
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x30));
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x40));
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x50) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x50) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
    if (NAN(*(float *)((int)this + 0x50))) {
      *(undefined1 *)((int)outRecord + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x54) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
    if (NAN(*(float *)((int)this + 0x54))) {
      *(undefined1 *)((int)outRecord + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x58) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
    if (NAN(*(float *)((int)this + 0x58))) {
      *(undefined1 *)((int)outRecord + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x5c) = **(undefined4 **)((int)outRecord + 8);
  *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  return;
}

