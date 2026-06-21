// addr: 0x014d2d70
// name: GuildCommand_Notify_dtor
// subsystem: common/networking/guild_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuildCommand_Notify_dtor(void * this) */

void __fastcall GuildCommand_Notify_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for GuildCommand_Notify; it releases two owned pointer members via
                       their virtual destructors, clears them, then runs GuildCommand base cleanup.
                        */
  puStack_8 = &LAB_016ac728;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = GuildCommand_Notify::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x14))(1,uVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(undefined4 **)((int)this + 0x18) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x18))(1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  GuildCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

