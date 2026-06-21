// addr: 0x00b17f30
// name: GuildDataFullPacket_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuildDataFullPacket_ctor(void * this) */

void * __fastcall GuildDataFullPacket_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GuildDataFullPacket, calls a packet/base initializer, installs
                       the GuildDataFullPacket vftable, and clears a field. Evidence is
                       GuildDataFullPacket::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d0da8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00a09b70(0x16);
  *(undefined ***)this = GuildDataFullPacket::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

