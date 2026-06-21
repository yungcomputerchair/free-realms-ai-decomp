// addr: 0x008cd360
// name: FUN_008cd360
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void readFiveDwordsFromCursor(void * outStruct, void * cursor) */

void __thiscall readFiveDwordsFromCursor(void *this,void *outStruct,void *cursor)

{
                    /* Reads five dwords from a bounded cursor into an output struct, including
                       fields 0..4 with the last two written in swapped order, and marks cursor
                       error on underflow. */
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)this = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)this = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 4) = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0xc) = **(undefined4 **)((int)outStruct + 8);
  *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  return;
}

