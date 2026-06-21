// addr: 0x01439d70
// name: ECommCommand_RedeemItemGrant_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_RedeemItemGrant_dtor(void * this) */

void __fastcall ECommCommand_RedeemItemGrant_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for ECommCommand_RedeemItemGrant; deletes its owned polymorphic
                       member at offset 0x10 and then calls the ECommCommand base destructor.
                       Evidence is ECommCommand_RedeemItemGrant::vftable. */
  puStack_8 = &LAB_016977c8;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = ECommCommand_RedeemItemGrant::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1,uVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  ECommCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

