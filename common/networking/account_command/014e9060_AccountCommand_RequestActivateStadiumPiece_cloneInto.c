// addr: 0x014e9060
// name: AccountCommand_RequestActivateStadiumPiece_cloneInto
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandRequestActivateStadiumPiece.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_RequestActivateStadiumPiece_cloneInto(void * this, void *
   target) */

void __thiscall AccountCommand_RequestActivateStadiumPiece_cloneInto(void *this,void *target)

{
  void *target_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clone-into routine for AccountCommand_RequestActivateStadiumPiece: casts the
                       target, copies the source member at offset 8 through helper
                       FUN_005f15f0/FUN_014e8ee0, then clones base AccountCommand state. The source
                       file and clone assert identify the method. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b09d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  target_00 = (void *)FUN_00d8d382(target);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60();
  }
  FUN_005f15f0((int)this + 8);
  uStack_4 = 0xffffffff;
  FUN_014e8ee0();
  AccountCommand_cloneInto(this,target_00);
  ExceptionList = local_c;
  return;
}

