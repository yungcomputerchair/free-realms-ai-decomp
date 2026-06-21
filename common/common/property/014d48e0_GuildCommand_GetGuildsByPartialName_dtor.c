// addr: 0x014d48e0
// name: GuildCommand_GetGuildsByPartialName_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_GetGuildsByPartialName_dtor(void * this) */

void __fastcall GuildCommand_GetGuildsByPartialName_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys GuildCommand_GetGuildsByPartialName by installing its vtable,
                       freeing owned string/vector buffers, and then running the GuildCommand base
                       destructor helper. */
  puStack_8 = &LAB_016accd9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_GetGuildsByPartialName::vftable;
  local_4 = 2;
  if (0xf < *(uint *)((int)this + 0x40)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x40) = 0xf;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  local_4 = 1;
  if (*(void **)((int)this + 0x1c) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x1c),*(void **)((int)this + 0x20));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x1c));
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  local_4 = 0;
  if (*(void **)((int)this + 0xc) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc));
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

