// addr: 0x00b3d5f0
// name: FUN_00b3d5f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00b3d5f0(void * this, void * reader) */

void __thiscall FUN_00b3d5f0(void *this,void *reader)

{
                    /* Deserializes a base portion, reads one scalar with bounds checks, then parses
                       an embedded structure at offset 0x18. No class name is available. */
  FUN_00b2dd60(reader);
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    FUN_00b3aa30(reader,(void **)((int)this + 0x18));
    return;
  }
  *(undefined4 *)((int)this + 0x1c) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  FUN_00b3aa30(reader,(void **)((int)this + 0x18));
  return;
}

