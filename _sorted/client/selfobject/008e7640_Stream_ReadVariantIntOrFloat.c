// addr: 0x008e7640
// name: Stream_ReadVariantIntOrFloat
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadVariantIntOrFloat(void * outValue, void * reader) */

void __thiscall Stream_ReadVariantIntOrFloat(void *this,void *outValue,void *reader)

{
                    /* Reads an id/type pair and then conditionally reads a 32-bit payload as either
                       integer-like type 0 or float-like type 1, setting the reader NaN flag for
                       float NaNs. Exact record type is unknown. */
  if (*(undefined4 **)((int)outValue + 0xc) < *(undefined4 **)((int)outValue + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)outValue + 0x10) = 1;
    *(undefined4 *)((int)outValue + 8) = *(undefined4 *)((int)outValue + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)outValue + 8);
    *(int *)((int)outValue + 8) = *(int *)((int)outValue + 8) + 4;
  }
  if (*(undefined4 **)((int)outValue + 0xc) < *(undefined4 **)((int)outValue + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)outValue + 0x10) = 1;
    *(undefined4 *)((int)outValue + 8) = *(undefined4 *)((int)outValue + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)outValue + 8);
    *(int *)((int)outValue + 8) = *(int *)((int)outValue + 8) + 4;
  }
  if (*(int *)((int)this + 4) == 0) {
    if (*(undefined4 **)((int)outValue + 0xc) < *(undefined4 **)((int)outValue + 8) + 1) {
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined1 *)((int)outValue + 0x10) = 1;
      *(undefined4 *)((int)outValue + 8) = *(undefined4 *)((int)outValue + 0xc);
      return;
    }
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)outValue + 8);
    *(int *)((int)outValue + 8) = *(int *)((int)outValue + 8) + 4;
  }
  else if (*(int *)((int)this + 4) == 1) {
    if (*(undefined4 **)((int)outValue + 0xc) < *(undefined4 **)((int)outValue + 8) + 1) {
      *(undefined4 *)((int)this + 8) = 0;
      *(undefined1 *)((int)outValue + 0x10) = 1;
      *(undefined4 *)((int)outValue + 8) = *(undefined4 *)((int)outValue + 0xc);
      return;
    }
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)outValue + 8);
    *(int *)((int)outValue + 8) = *(int *)((int)outValue + 8) + 4;
    if (NAN(*(float *)((int)this + 8))) {
      *(undefined1 *)((int)outValue + 0x11) = 1;
      return;
    }
  }
  return;
}

