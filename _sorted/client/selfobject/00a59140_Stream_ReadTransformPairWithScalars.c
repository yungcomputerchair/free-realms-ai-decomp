// addr: 0x00a59140
// name: Stream_ReadTransformPairWithScalars
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadTransformPairWithScalars(void * outRecord, void * reader) */

void __thiscall Stream_ReadTransformPairWithScalars(void *this,void *outRecord,void *reader)

{
                    /* Reads a Vec4, a float, another Vec4, and two additional float/dword scalar
                       fields with NaN checks. Exact record class is not identified. */
  Stream_ReadVec4(outRecord,this);
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
    if (NAN(*(float *)((int)this + 0x10))) {
      *(undefined1 *)((int)outRecord + 0x11) = 1;
    }
  }
  Stream_ReadVec4(outRecord,(float *)((int)this + 0x20));
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x30) = **(undefined4 **)((int)outRecord + 8);
    *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
    if (NAN(*(float *)((int)this + 0x30))) {
      *(undefined1 *)((int)outRecord + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)outRecord + 0xc) < *(undefined4 **)((int)outRecord + 8) + 1) {
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined1 *)((int)outRecord + 0x10) = 1;
    *(undefined4 *)((int)outRecord + 8) = *(undefined4 *)((int)outRecord + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x34) = **(undefined4 **)((int)outRecord + 8);
  *(int *)((int)outRecord + 8) = *(int *)((int)outRecord + 8) + 4;
  if (NAN(*(float *)((int)this + 0x34))) {
    *(undefined1 *)((int)outRecord + 0x11) = 1;
  }
  return;
}

