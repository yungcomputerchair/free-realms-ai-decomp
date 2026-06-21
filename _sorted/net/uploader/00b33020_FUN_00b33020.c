// addr: 0x00b33020
// name: FUN_00b33020
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00b33020(void * this, void * reader) */

void __thiscall FUN_00b33020(void *this,void *reader)

{
  undefined4 *puVar1;
  
                    /* Deserializes several scalar/vector fields from a bounded packet reader and
                       then delegates additional parsing to FUN_00b2e620. Class identity is unknown.
                        */
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0xc) = **(undefined4 **)((int)reader + 8);
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  }
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x10) = *puVar1;
    *(undefined4 *)((int)this + 0x14) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  puVar1 = *(undefined4 **)((int)reader + 8);
  if (*(undefined4 **)((int)reader + 0xc) < puVar1 + 2) {
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
  }
  else {
    *(undefined4 *)((int)this + 0x18) = *puVar1;
    *(undefined4 *)((int)this + 0x1c) = puVar1[1];
    *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 8;
  }
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    deserialize_counted_entry_list(reader,this);
    return;
  }
  *(undefined4 *)((int)this + 0x20) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  deserialize_counted_entry_list(reader,this);
  return;
}

