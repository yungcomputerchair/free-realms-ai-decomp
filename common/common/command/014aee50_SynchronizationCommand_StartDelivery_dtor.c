// addr: 0x014aee50
// name: SynchronizationCommand_StartDelivery_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartDelivery_dtor(void * this) */

void __fastcall SynchronizationCommand_StartDelivery_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destructor for SynchronizationCommand_StartDelivery; releases two base/member
                       components and its std::string member before base cleanup. */
  puStack_8 = &LAB_016a69a9;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = SynchronizationCommand_StartDelivery::vftable;
  local_4 = 2;
  FUN_012c2de0(uVar1);
  local_4._0_1_ = 1;
  FUN_012c2de0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < *(uint *)((int)this + 0x28)) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x28) = 0xf;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  local_4 = 0xffffffff;
  SynchronizationCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

