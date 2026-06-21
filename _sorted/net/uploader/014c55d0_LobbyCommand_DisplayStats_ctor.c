// addr: 0x014c55d0
// name: LobbyCommand_DisplayStats_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_DisplayStats_ctor(void * this) */

void * __fastcall LobbyCommand_DisplayStats_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* LobbyCommand_DisplayStats constructor: initializes LobbyCommand base, sets
                       DisplayStats vftable, initializes string/int-text-map members, and clears
                       stat fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aabf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)this = LobbyCommand_DisplayStats::vftable;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x44) = 0xf;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  local_4 = 2;
  MessageDB_IntTextMap_ctor((void *)((int)this + 0x48));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

