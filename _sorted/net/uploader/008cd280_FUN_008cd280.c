// addr: 0x008cd280
// name: FUN_008cd280
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void readThreeDwordsFromCursor_dup(void * outStruct, void * cursor) */

void __thiscall readThreeDwordsFromCursor_dup(void *this,void *outStruct,void *cursor)

{
                    /* Duplicate-shaped bounded cursor reader for three dwords, zeroing fields and
                       marking error if data runs out. Class identity is not evident. */
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
    return;
  }
  *(undefined4 *)((int)this + 8) = **(undefined4 **)((int)outStruct + 8);
  *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  return;
}

