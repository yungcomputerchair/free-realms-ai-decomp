// addr: 0x008cd0f0
// name: FUN_008cd0f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void readFourDwordsFromCursor(void * outStruct, void * cursor) */

void __thiscall readFourDwordsFromCursor(void *this,void *outStruct,void *cursor)

{
                    /* Reads four dwords from a bounded cursor into outStruct offsets 0x10..0x1c,
                       setting the cursor error flag and clamping to end on underflow. Class
                       identity is not evident. */
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
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x14) = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = **(undefined4 **)((int)outStruct + 8);
    *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  }
  if (*(undefined4 **)((int)outStruct + 0xc) < *(undefined4 **)((int)outStruct + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)outStruct + 0x10) = 1;
    *(undefined4 *)((int)outStruct + 8) = *(undefined4 *)((int)outStruct + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)outStruct + 8);
  *(int *)((int)outStruct + 8) = *(int *)((int)outStruct + 8) + 4;
  return;
}

